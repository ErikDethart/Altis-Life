/*
    File: fn_killFeed.sqf
    Author: Erik

    Description:
	puts kills in everybody's systemchat
*/

_getName = {
	params [
		["_unit", objNull, [objNull]]
	];

	private _tag = "%1";

	if (side _unit isEqualTo west) then {
		_tag = switch ((_unit getVariable "rank")) do {
			case 1: {"[Police Cadet] %1"};
			case 2: {"[Police Constable] %1"};
			case 3: {"[Police Corporal] %1"};
			case 4: {"[Police Sergeant] %1"};
			case 5: {"[Police Lieutenant] %1"};
			case 6: {"[Police Captain] %1"};
			default {"%1"};
		};
	};

	if (side _unit isEqualTo civilian) then {
		_tag = _unit getVariable ["gang_tag", "%1"];

		if !(_tag isEqualTo "%1") then {
			_tag = format ["[%1] %2", _tag, "%1"];
		}
	};

	format [_tag, _unit getVariable ["realname", false]];
};

params [
	["_victim", objNull, [objNull]],
	["_killer", objNull, [objNull]],
	["_mode", "", [""]]
];

if (_mode isEqualTo "") exitWith {};
if (isNull _victim) exitWith {};
if (isNull _killer) exitWith {};

private _message = switch (_mode) do {
	case "killed": {
		format ["%1 was killed by %2", [_victim] call _getName, [_killer] call _getName];
	};

	case "downed": {
		format ["%1 was downed by %2", [_victim] call _getName, [_killer] call _getName];
	};

	default {
		"";
	};
};

if (_message isEqualTo "") exitWith {};

[0, _message] remoteExecCall ["life_fnc_broadcast", -2];
