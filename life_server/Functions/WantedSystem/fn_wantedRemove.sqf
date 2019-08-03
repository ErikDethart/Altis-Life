/*
    File: fn_wantedRemove.sqf
    Author: Bryan "Tonic" Boardwine"
    Database Persistence By: ColinM
    Assistance by: Paronity
    Stress Tests by: Midgetgrimm

    Description:
    Removes a person from the wanted list.
*/
params [
    ["_unit", objNull, [objNull]]
];

if (isNull _unit) exitWith {};
private _uid = getPlayerUID _unit;
if (_uid isEqualTo "") exitWith {};

private _query = format ["UPDATE wanted SET active = '0', crimes = '[]', bounty = 0 WHERE pid='%1'",_uid];
[_query,1] call DB_fnc_asyncCall;
