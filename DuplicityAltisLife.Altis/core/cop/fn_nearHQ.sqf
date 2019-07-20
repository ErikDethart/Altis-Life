/*
	File: fn_nearHQ.sqf
	Author: Erik
	Description: Is the player near an HQ?
*/

private _hqs = ["police_hq_1", "police_hq_2", "cop_spawn_3", "cop_spawn_5", "Correctional_Facility"];
private _return = false;

{
	if ((player distance (getMarkerPos _x)) < 50) exitWith {
		_return = true;
	};
} forEach _hqs;

_return;
