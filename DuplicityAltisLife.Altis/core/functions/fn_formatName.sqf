#include "..\..\script_macros.hpp"
/*
    File: fn_formatName.sqf
    Author: Erik

    Description:
    Prepares the structured text for player names.
*/

params [
	["_unit", objNull,[objNull]]
];

private _masks = LIFE_SETTINGS(getArray,"clothing_masks");
private _name = _unit getVariable ["realname", ""];
private _color = "#FFFFFF";
private _icon = "";
private _tag = "%1";

if (!(alive _unit)) then {
	_name = "Dead Player";
} else {
	if (((headgear _unit) in _masks || (goggles _unit) in _masks || (uniform _unit) in _masks ) && !(currentWeapon player == "binocular")) then {
		_name = "Unknown";
	} else {
		switch (side _unit) do {
			case west: {
				_icon = switch ((_unit getVariable "rank")) do {
					case 1: {"\a3\ui_f\data\gui\cfg\Ranks\private_gs.paa"};
					case 2: {"\a3\ui_f\data\gui\cfg\Ranks\private_gs.paa"};
					case 3: {"\a3\ui_f\data\gui\cfg\Ranks\corporal_gs.paa"};
					case 4: {"\a3\ui_f\data\gui\cfg\Ranks\sergeant_gs.paa"};
					case 5: {"\a3\ui_f\data\gui\cfg\Ranks\lieutenant_gs.paa"};
					case 6: {"\a3\ui_f\data\gui\cfg\Ranks\captain_gs.paa"};
					default {""};
				};

				_tag = switch ((_unit getVariable "rank")) do {
					case 1: {"Police Cadet %1"};
					case 2: {"Police Constable %1"};
					case 3: {"Police Corporal %1"};
					case 4: {"Police Sergeant %1"};
					case 5: {"Police Lieutenant %1"};
					case 6: {"Police Captain %1"};
					default {""};
				};

				_color = "#004d99";
			};
			case independent: {
				_icon = "a3\ui_f\data\map\MapControl\hospital_ca.paa";
			};
			case civilian: {
				if (group _unit == group player) then {
					_color = "#00FF00";
				};
			};
		};
	};
};

_name = format [_tag, _name];

_name = format ["<img image='%1'/><t color='%2'> %3</t>", _icon, _color, _name];

_name;