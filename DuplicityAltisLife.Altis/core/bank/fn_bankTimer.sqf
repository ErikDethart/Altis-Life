/*
    File: fn_bankTimer.sqf
    Author: Erik

    Description:
    Give the bank robbers a visual timer.
*/
disableSerialization;

params [
	["_finishTime", nil, [0]]
];

if (isNil "_finishTime") exitWith {diag_log "Invalid time passed to life_fnc_bankTimer. Exiting."};

[] call life_fnc_hudUpdate;

private _control = (uiNamespace getVariable ["playerHUD",displayNull]) displayCtrl 500;
private ["_delta", "_minutes", "_seconds"];

while {serverTime < _finishTime} do {
	_delta = _finishTime - serverTime;

	if !(life_bankState isEqualTo 1) exitWith {};
	if (_delta < 0) exitWith {};

	_control ctrlSetStructuredText parseText format ["<t size='2'><img image='icons\ico_timer.paa'/> %1</t>", [floor(_delta), "MM:SS"] call BIS_fnc_secondsToString];

	uiSleep 1;
};

_control ctrlSetStructuredText parseText "";
