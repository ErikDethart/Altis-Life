//File: fn_stopBankServer.sqf

params [
	["_cop", objNull, [objNull]]
];

if (isNull _cop) exitWith {};


life_bankState = 2;
publicVariable "life_bankState";

[_cop] remoteExecCall ["life_fnc_bankStopReward", west];
