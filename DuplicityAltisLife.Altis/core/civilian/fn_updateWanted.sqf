#include "..\..\script_macros.hpp"
/*
    File: fn_updateWanted.sqf
    Author: Erik

    Description:
    For wanted on HUD
*/

params [
	["_amount", 0, [0]]
];

life_wanted = _amount;
[] call life_fnc_hudUpdate;