/*
    File: fn_wantedRemove.sqf
    Author: Bryan "Tonic" Boardwine"
    Database Persistence By: ColinM
    Assistance by: Paronity
    Stress Tests by: Midgetgrimm

    Description:
    Removes a person from the wanted list.
*/
private _unit = param [0,objNull,[objNull, ""]];

if (_uid isEqualTo "") exitWith {}; //Bad data

if (_unit isEqualType "") then {
    _uid = _unit;
} else {
    _uid = getPlayerUID _unit;
    [0] remoteExecCall ["life_fnc_updateWanted", _unit];
};

private _query = format ["UPDATE wanted SET active = '0', wantedCrimes = '[]', wantedBounty = 0 WHERE wantedID='%1'",_uid];
[_query,2] call DB_fnc_asyncCall;