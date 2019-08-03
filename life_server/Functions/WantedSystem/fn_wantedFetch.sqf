#include "\life_server\script_macros.hpp"
/*
    File: fn_wantedFetch.sqf
    Author: Bryan "Tonic" Boardwine"
    Database Persistence By: ColinM
    Assistance by: Paronity
    Stress Tests by: Midgetgrimm

    Description:
    Displays wanted list information sent from the server.
*/

params [
    ["_ret", objNull, [objNull]]
];

if (isNull _ret) exitWith {};

private _units = [];

if (side _ret isEqualTo west) then {
    {
        if (side _x isEqualTo civilian) then {
            _units pushBack (getPlayerUid _x);
        };
    } forEach playableUnits;
};

private _inStatement = "";

{
    if (count _units > 1) then {
        if (_inStatement isEqualTo "") then {
            _inStatement = "'" + _x + "'";
        } else {
            _inStatement = _inStatement + ", '" + _x + "'";
        };
    } else {
        _inStatement = _x;
    };
} forEach _units;

private _query = format ["SELECT pid FROM wanted WHERE active='1' AND wantedID in (%1)",_inStatement];
private _queryResult = [_query,2,true] call DB_fnc_asyncCall;

[_queryResult] remoteExec ["life_fnc_wantedList",_ret];
