#include "..\..\script_macros.hpp"
/*
    File: fn_loadGear.sqf
    Author: Erik

    Description:
    Loads saved gear
*/
private _data = param[0, [], [[]]];

if ((count _data) isEqualTo 0) exitWith {
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

private _yItems = _data select 1;

player setUnitLoadout (_data select 0);

life_maxWeight = if (backpack player isEqualTo "") then {LIFE_SETTINGS(getNumber,"total_maxWeight")} else {LIFE_SETTINGS(getNumber,"total_maxWeight") + round(FETCH_CONFIG2(getNumber,"CfgVehicles",(backpack player),"maximumload") / 4)};
{
    [true,(_x select 0),(_x select 1)] call life_fnc_handleInv;
} forEach (_yItems);

[] call life_fnc_playerSkins;