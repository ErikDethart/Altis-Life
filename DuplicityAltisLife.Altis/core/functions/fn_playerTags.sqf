#include "..\..\script_macros.hpp"
#define iconID 78000
/*
    File: fn_playerTags.sqf
    Author: Tonic & Erik

    Description:
    Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private ["_ui","_units","_units"];
private _index = 0;

if (visibleMap || {!alive player} || {dialog}) exitWith {
    500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
    500 cutRsc["Life_HUD_nameTags","PLAIN"];
    _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects [(visiblePosition player), ["Car", "Air", "Ship", "CAManBase"], 30];

if (cursorObject isKindOf "Car" || cursorObject isKindOf "Air" || cursorObject isKindOf "Ship" || cursorObject isKindOf "CAManBase") then {
	_units pushBackUnique cursorObject;
};

_units = _units - [vehicle player];

{
	_idc = _ui displayCtrl (iconID + _index);

	if (count crew _x > 0 && !(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x) then {
		private ["_pos","_text","_sPos"];
		if (_x isKindOf "CAManBase") then {
			_pos = [((visiblePosition _x) select 0), ((visiblePosition _x) select 1), (((_x modelToWorld (_x selectionPosition "head")) select 2) + 0.5)];
		} else {
			_pos = [((visiblePosition _x) select 0), ((visiblePosition _x) select 1), (((visiblePosition _x select 2) + 2.2))];
		};
		_sPos = worldToScreen _pos;
		_distance = _pos distance player;
		
		if (count _sPos > 1 && ((_distance < 15) || (_x == cursorObject))) then {
			if (_x isKindOf "CAManBase") then {
				_text = format ["<t align='center'>%1</t><br/><t align='center' size='0.8' color='#B6B6B6'>%2</t>", ([_x] call life_fnc_formatName),((group _x) getVariable ["gang_name",""])];
			} else {
				{
					if (_forEachIndex == 0) then {
						_text = format ["<img image='%1'/> | %2", (getText(configFile >> "CfgVehicles" >> (typeOf vehicle _x) >> "picture")), ([_x] call life_fnc_formatName)];
					} else {
						_text = format ["%1, %2", _text, ([_x] call life_fnc_formatName)];
					};
				} forEach (crew _x);
				_text = format ["<t align='center'>%1</t>", _text];
			};

			_idc ctrlSetStructuredText parseText _text;
			_idc ctrlSetPosition [((_sPos select 0) - 0.5), (_sPos select 1), 1, 0.65];
			_idc ctrlSetScale 1;
			_idc ctrlSetFade 0;
			_idc ctrlCommit 0;
			_idc ctrlShow true;
			_index = _index + 1;
		};
	};
} forEach _units;

(_ui displayCtrl (iconID + _index)) ctrlSetStructuredText parseText "";