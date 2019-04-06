#include "..\..\script_macros.hpp"
/*
    File: fn_updatePartial.sqf
    Author: Bryan "Tonic" Boardwine
    Modified: Erik

    Description:
    Sends specific information to the server to update on the player,
    meant to keep the network traffic down with large sums of data flowing
    through remoteExec
*/
params [
    ["_mode", 0, [0]]
];

private _packet = [player, _mode];

switch (_mode) do {
    case 0: {
        _packet pushBack CASH;
    };

    case 1: {
        _packet pushBack BANK;
    };

    case 2: {
        private _flag = switch (playerSide) do {case west: {"cop"}; case civilian: {"civ"}; case independent: {"med"};};
        private _licenses = [];

        {
            _varName = LICENSE_VARNAME(configName _x,_flag);
            _licenses pushBack [_varName,LICENSE_VALUE(configName _x,_flag)];
        } forEach (format ["getText(_x >> 'side') isEqualTo '%1'",_flag] configClasses (missionConfigFile >> "Licenses"));

        _packet pushBack _licenses;
    };

    case 3: {
        private _vItems = [];

        {
            _val = ITEM_VALUE(configname _x);
            if (_val > 0) then {
                _vItems pushBack [configname _x,_val];
            };
        } forEach ("true" configClasses (missionConfigFile >> "VirtualItems"));

        _packet pushBack _vItems;
    };

    case 4: {
        _packet pushBack life_is_alive;
    };

    case 5: {
        _packet pushBack life_is_arrested;
    };

    case 6: {
        _packet pushBack [CASH, BANK];
    };
};

_packet remoteExecCall ["DB_fnc_updatePartial",RSERV];