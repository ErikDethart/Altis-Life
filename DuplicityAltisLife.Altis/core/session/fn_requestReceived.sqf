#include "..\..\script_macros.hpp"
/*
    File: fn_requestReceived.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called by the server saying that we have a response so let's
    sort through the information, validate it and if all valid
    set the client up.
*/

params [
    ["_uid", "", [""]],
    ["_cash", 0, [0]],
    ["_bank", 0, [0]],
    ["_adminLevel", 0, [0]],
    ["_donorLevel", 0, [0]],
    ["_licenses", [], [[]]],
    ["_gear", [], [[]]],
    ["_vItems", [], [[]]],
    ["_alive", false, [true]],
    ["_stats", [], [[]]],
    ["_keychain", [], [[]]],
    ["_SS1", 0, [0, false]],
    ["_SS2", [], [false, []]],
    ["_houses", [], [[]]],
    ["_gang", [], [[]]]
];

life_session_tries = life_session_tries + 1;

if (life_session_completed) exitWith {}; //Why did this get executed when the client already initialized? Fucking arma...
if (life_session_tries > 3) exitWith {cutText[localize "STR_Session_Error","BLACK FADED"]; 0 cutFadeOut 999999999;};

0 cutText [localize "STR_Session_Received","BLACK FADED"];
0 cutFadeOut 9999999;

//ERROR HANDLING
if (isNil "_this") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (_this isEqualType "") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (count _this isEqualTo 0) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (_uid isEqualTo "Error") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (!(getPlayerUID player isEqualTo _uid)) exitWith {[] call SOCK_fnc_dataQuery;};

//Lets make sure some vars are not set before hand.. If they are get rid of them, hopefully the engine purges past variables but meh who cares.
if (!isServer && (!isNil "life_adminlevel" || !isNil "life_coplevel" || !isNil "life_donorlevel")) exitWith {
    [profileName,getPlayerUID player,"VariablesAlreadySet"] remoteExecCall ["SPY_fnc_cookieJar",RSERV];
    [profileName,format ["Variables set before client initialization...\nlife_adminlevel: %1\nlife_coplevel: %2\nlife_donorlevel: %3",life_adminlevel,life_coplevel,life_donorlevel]] remoteExecCall ["SPY_fnc_notifyAdmins",RCLIENT];
    sleep 0.9;
    failMission "SpyGlass";
};

//CASH & BANK
CASH = _cash;
BANK = _bank;

//ADMINLEVEL & DONORLEVEL
life_adminlevel = compileFinal str(_adminLevel);
life_donorlevel = compileFinal str(_donorLevel);

//LICENSES
if (count _licenses > 0) then {
    {
        missionNamespace setVariable [(_x select 0), (_x select 1)];
    } forEach _licenses;
};

//ALIVE
life_is_alive = _alive;

//GEAR
if (life_is_alive) then {
    player setUnitLoadout _gear;
} else {
    switch (playerSide) do {
        case west: {
            [] call life_fnc_copLoadout;
        };

        case civilian: {
            [] call life_fnc_civLoadout;
        };

        case independent: {
            [] call life_fnc_medicLoadout;
        };
    };
};

[] call life_fnc_playerSkins;

//VITEMS
life_maxWeight = if (backpack player isEqualTo "") then {64} else {64 + round(FETCH_CONFIG2(getNumber,"CfgVehicles",(backpack player),"maximumload") / 10)};

if (life_is_alive || !(playerSide isEqualTo civilian)) then {
    {
        [true,(_x select 0),(_x select 1)] call life_fnc_handleInv;
    } forEach (_vItems);
};

//STATS
life_hunger = _stats select 0;
life_thirst = _stats select 1;
player setDamage (_stats select 2);

//KEYCHAIN
if ((count _keychain) > 0) then {
    {
        life_vehicles pushBack _x;
    } forEach (_keychain);
};

//SIDE SPECIFIC
switch (playerSide) do {
    case west: {
        //COPLEVEL % MEDICLEVEL
        life_coplevel = compileFinal str(_SS1);
        mediclevel = compileFinal "0";

        //BLACKLIST
        life_blacklisted = _SS2;
    };

    case civilian: {
        //COPLEVEL % MEDICLEVEL
        life_coplevel = compileFinal "0";
        life_mediclevel = compileFinal "0";

        //ARRESTED
        life_is_arrested = _SS1;

        //POSITION
        life_civ_position = _SS2;
        if (life_is_alive) then {
            if !(count life_civ_position isEqualTo 3) then {
                diag_log format ["[requestReceived] Bad position received. Data: %1", life_civ_position];
                life_is_alive =false;
            };
            if (life_civ_position distance (getMarkerPos "respawn_civilian") < 300) then {
                life_is_alive = false;
            };
        };

        //HOUSES
        life_houses = _houses;

        {
            _house = nearestObject [(call compile format ["%1",(_x select 0)]), "House"];
            life_vehicles pushBack _house;
        } forEach life_houses;

        [] spawn life_fnc_initHouses;

        //GANG
        life_gangData = _gang;
        if !(count life_gangData isEqualTo 0) then {
            [] spawn life_fnc_initGang;
        };
    };

    case independent: {
        //COPLEVEL % MEDICLEVEL
        life_coplevel = compileFinal "0";
        life_mediclevel = compileFinal str(_SS1);
    };
};

life_session_completed = true;
