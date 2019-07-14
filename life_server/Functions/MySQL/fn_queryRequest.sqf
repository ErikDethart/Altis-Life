#include "\life_server\script_macros.hpp"
/*
    File: fn_queryRequest.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles the incoming request and sends an asynchronous query
    request to the database.

    Return:
    ARRAY - If array has 0 elements it should be handled as an error in client-side files.
    STRING - The request had invalid handles or an unknown error and is logged to the RPT.
*/
params [
    ["_unit", objNull, [objNull]]
];

private _uid = getPlayerUID _unit;
private _side = side group _unit;

if (isNull _unit) exitWith {};

private _query = switch (_side) do {
    case west: {
        format ["SELECT pid, cash, bank, adminLevel, donorLevel, cop_licenses, cop_gear, cop_vitems, cop_alive, cop_stats, coplevel, blacklist FROM players WHERE pid='%1'", _uid];
    };

    case civilian: {
        format ["SELECT pid, cash, bank, adminLevel, donorLevel, civ_licenses, civ_gear, civ_vitems, civ_alive, civ_stats, arrested, civ_position FROM players WHERE pid='%1'", _uid];
    };

    case independent: {
        format ["SELECT pid, cash, bank, adminLevel, donorLevel, med_licenses, med_gear, med_vitems, med_alive, med_stats, mediclevel FROM players WHERE pid='%1'", _uid];
    };
};

private _queryResult = [_query,2] call DB_fnc_asyncCall;

if ((_queryResult isEqualType "") || (count _queryResult isEqualTo 0)) exitWith {
    [] remoteExecCall ["SOCK_fnc_insertPlayerInfo", _unit];
};

private _packet = [];

//PID
_packet pushBack (_queryResult select 0);

//CASH & BANK
_packet pushBack (_queryResult select 1);
_packet pushBack (_queryResult select 2);

//ADMINLEVEL & DONORLEVEL
_packet pushback (_queryResult select 3);
_packet pushback (_queryResult select 4);

//LICENSES
private _licenses = [(_queryResult select 5)] call DB_fnc_mresToArray;

{
    _licenses set [_forEachIndex, [(_x select 0), ([(_x select 1), 1] call DB_fnc_bool)]];
} forEach _licenses;

_packet pushBack _licenses;

//GEAR
private _gear = [(_queryResult select 6)] call DB_fnc_mresToArray;
_packet pushBack _gear;

//VITEMS
private _vItems = [(_queryResult select 7)] call DB_fnc_mresToArray;
_packet pushBack _vItems;

//ALIVE
_packet pushBack ([(_queryResult select 8), 1] call DB_fnc_bool);

//STATS
private _stats = [(_queryResult select 9)] call DB_fnc_mresToArray;
_packet pushBack _stats;

//KEYCHAIN
_packet pushBack (missionNamespace getVariable [format ["%1_KEYS_%2",_uid,_side],[]]);

//SIDE SPECIFIC
switch (_side) do {
    case west: {
        //COPLEVEL
        _packet pushBack (_queryResult select 10);

        //BLACKLIST
        _packet pushBack ([(_queryResult select 11), 1] call DB_fnc_bool);
    };

    case civilian: {
        //ARRESTED
        _packet pushBack ([(_queryResult select 10), 1] call DB_fnc_bool);

        //POSITION
        private _pos = [(_queryResult select 11)] call DB_fnc_mresToArray;
        _packet set [12, _pos];

        //HOUSES
        _packet set [13, ([_uid] call TON_fnc_fetchPlayerHouses)];

        //GANG
        _packet set [14, ([_uid] call TON_fnc_queryPlayerGang)];
    };

    case independent: {
        //MEDICLEVEL
        _packet pushBack (_queryResult select 10);
    };
};

//Troubleshooting, if you find this in the future feel free to remove it
//diag_log (format ["Packet sent from queryRequest. Contents: %1", str(_packet)]);
//diag_log (format ["db call returned : %1", str(_queryResult)]);

_packet remoteExec ["SOCK_fnc_requestReceived", _unit];

if (_side isEqualTo civilian) then {
    _query = format ["SELECT wantedBounty FROM wanted WHERE wantedID='%1' AND active='1'", _uid];

    _queryResult = [_query,2] call DB_fnc_asyncCall;

    if !((_queryResult isEqualType "") || (count _queryResult isEqualTo 0)) then {
        [_queryResult select 0] remoteExecCall ["life_fnc_updateWanted", _unit];
    };
};
