/*
    File: fn_bankRobbery.sqf
    Author: Erik

    Description:
    Handle a bank robbery on the server.
*/

diag_log "life_fnc_bankRobbery called on server.";

_calcPayout = {
	private _cops = [];

	{
		if ((side _x) isEqualTo west) then {
			_cops pushBack _x;
		}
	} forEach playableUnits;

	private _payout = 100000;

	{
		_payout = _payout + 15000 + (5000 * (_x getVariable ["rank", 1]));
	} forEach _cops;

	_payout;
};

params [
	["_robber", objNull, [objNull]]
];

if !(life_bankState isEqualTo 0) exitWith {};

private _robbers = [];

{
	if (side _x isEqualTo civilian) then {
		_robbers pushBack _x;
	};
} forEach nearestObjects [life_bank_building, ["CAManBase"], 500];

"life_bank_redzone" setMarkerAlpha 0.5;
"life_bank_marker" setMarkerColor "ColorRed";
"life_bank_marker" setMarkerText "Bank of Altis (Robbery In Progress)";
life_bank_drill hideObjectGlobal false;

life_bankState = 1;
publicVariable "life_bankState";

private _finishTime = serverTime + 600;

{
	[_finishTime] remoteExec ["life_fnc_bankTimer", _x];
} forEach _robbers;

[_finishTime] remoteExec ["life_fnc_bankTimer", west];

[2, (format ["A robbery is in progress at the Bank of Altis. %1 suspects were identified.", (count _robbers)])] remoteExecCall ["life_fnc_broadcast", west];

private _payout = [] call _calcPayout;

private _success = false;

while {true} do {
	if (serverTime > _finishTime) exitWith { _success = true; };
	if (life_bankState isEqualTo 2) exitWith {};
	sleep 2;
};

private _newPayout = [] call _calcPayout;

if (_newPayout > _payout) then {
	_payout = _newPayout;
};

if (_success) then {
	//go elevated
	life_bankState = 2;
	publicVariable "life_bankState";

	life_bank_building setVariable ["bis_disabled_Door_4", 0, true];
	life_bank_building animateSource ["Door_4_sound_source", 0.3];

	//Spawn the money
	_pos = getMarkerPos ["life_bank_money_spawn", true];
	_obj = "Land_Money_F" createVehicle _pos;
	[_obj] remoteExecCall ["life_fnc_simDisable",0];
	_obj setPos _pos;
	_obj setVariable ["item",["banknotes",_payout],true];

	//Tell Eveyone
	private _message = format ["The Bank of Altis has been robbed for $%1!", _payout];
	[0, _message] remoteExecCall ["life_fnc_broadcast", -2];

	//Tell the robbers
	{
		[2, "The robbery has succeeded but the vault will only open for three minutes! Hurry up!"] remoteExecCall ["life_fnc_broadcast", _x];
	} forEach _robbers;

	//Shut the vault
	[_obj] spawn {
		params [
			["_money", objNull, [objNull]]
		];
		sleep 180;
		life_bank_building setVariable ["bis_disabled_Door_4", 1, true];
		life_bank_building animateSource ["Door_4_sound_source", 1];
		deleteVehicle _money;
	};

} else {
	{
		[2, "The cops have stopped the drill! The robbery failed!"] remoteExecCall ["life_fnc_broadcast", _x];
	} forEach _robbers;
};

//go elevated
"life_bank_redzone" setMarkerAlpha 0;
"life_bank_marker" setMarkerColor "ColorOrange";
"life_bank_marker" setMarkerText "Bank of Altis (Elevated Security)";
life_bank_drill hideObjectGlobal true;

[] spawn {
	_resetTime = serverTime + 1800;

	while {serverTime < _resetTime} do {
		sleep 15;
	};

	"life_bank_marker" setMarkerColor "ColorWEST";
	"life_bank_marker" setMarkerText "Bank of Altis";

	life_bankState = 0;
	publicVariable "life_bankState";
};
