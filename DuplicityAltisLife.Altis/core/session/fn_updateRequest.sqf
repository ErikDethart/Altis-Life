#include "..\..\script_macros.hpp"
/*
    File: fn_updateRequest.sqf
    Author: Tonic

    Description:
    Passes ALL player information to the server to save player data to the database.
*/

private _packet = [player, CASH, BANK, life_hunger, life_thirst, life_is_arrested, life_is_alive];

//vItems
private _array = [];
{
    private _val = ITEM_VALUE(configname _x);
    if (_val > 0) then {
        _array pushBack [configname _x,_val];
    };
} forEach ("true" configClasses (missionConfigFile >> "VirtualItems"));
_packet pushBack _array;

diag_log format ["Sending sync packet to server with contents : %1", str(_packet)];

//Send
if (life_HC_isActive) then {
    _packet remoteExecCall ["HC_fnc_updateRequest",HC_Life];
} else {
    _packet remoteExecCall ["DB_fnc_updateRequest",RSERV];
};

[] spawn life_fnc_syncNotify;