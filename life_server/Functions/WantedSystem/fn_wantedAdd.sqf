/*
    File: fn_wantedAdd.sqf
    Author: Bryan "Tonic" Boardwine"
    Database Persistence By: ColinM
    Assistance by: Paronity
    Stress Tests by: Midgetgrimm

    Description:
    Adds or appends a unit to the wanted list.
*/
params [
    ["_unit", objNull ,[objNull]],
    ["_type", "", [""]],
    ["_count", 1, [0]]
];

private _uid = getPlayerUID _unit;
private _crimeCfg = (missionConfigFile >> "Crimes" >> _type);

if (isNull _unit) exitWith {};
if (_type isEqualTo "") exitWith {};
if (_uid isEqualTo "") exitWith {};
if !((side _unit) isEqualTo civilian) exitWith {};
if !(isClass _crimeCfg) exitWith {};

private _varName = getText(_crimeCfg >> "varName");
private _bounty = getNumber(_crimeCfg >> "bounty");

private _query = format ["SELECT pid, crimes, bounty FROM wanted WHERE pid='%1'", _uid];
private _queryResult = [_query,2,true] call DB_fnc_asyncCall;

if (count _queryResult isEqualTo 0) then {
    _bounty = _bounty * _count;
    private _crimes = [[_varName, _count]];
    _query = format ["INSERT INTO wanted (pid, crimes, bounty, active) VALUES('%1', '%2', '%3', 1)", _uid, [_crimes] call DB_fnc_mresArray, [_bounty] call DB_fnc_numberSafe];
    [_query, 1] call DB_fnc_asyncCall;
} else {
    _queryResult = [_queryResult] call DB_fnc_mresToArray;
    if !(_uid isEqualTo _queryResult select 0) exitWith {};
    private _crimes = _queryResult select 1;
    private _oldBounty = _queryResult select 2;

    private _exists = false;
    {
        if ((_x select 0) isEqualTo _varName) exitWith {
            _crimes set [_forEachIndex, [(_x select 0), ((_x select 1) + _count)]];
            _exists = true;
        };
    } forEach _crimes;

    if !(_exists) then {
        _crimes pushBack [_varName, _count];
    };

    _bounty = _oldBounty + _bounty;

    _query = format ["UPDATE wanted SET crimes='%1', bounty='%2', active='1' WHERE pid='%3'", [_crimes] call DB_fnc_mresArray, [_bounty] call DB_fnc_numberSafe, _uid];
    [_query, 1] call DB_fnc_asyncCall;
};

[_bounty] remoteExec ["life_fnc_updateWanted", _unit];
