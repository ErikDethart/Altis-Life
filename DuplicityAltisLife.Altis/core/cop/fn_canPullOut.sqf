/*
	File: fn_canPullOut.sqf
	Author: Erik
*/
private _car = life_interactionTarget;

if (isNull _car) exitWith {};

scopeName "main";

{
	if (_x getVariable ["Downed", false] || _x getVariable ["restrained", false]) then {
		true breakOut "main";
	}
} forEach (crew _car);

false
