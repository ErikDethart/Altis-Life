#include "..\..\script_macros.hpp"
#define iconID 78000
#define scale 1
/*
    File: fn_playerTags.sqf
    Author: Erik

    Description:
    Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private ["_ui","_units","_masks","_index","_units","_text","_sPos"];

if (visibleMap || {!alive player} || {dialog}) exitWith {
    500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
    500 cutRsc["Life_HUD_nameTags","PLAIN"];
    _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects [(visiblePosition player), ["Car", "Air", "Ship", "Man"], 50];

if (cursorObject isKindOf "Car" || cursorObject isKindOf "Air" || cursorObject isKindOf "Ship" || cursorObject isKindOf "Man") then {
	_units pushBackUnique cursorObject;
};

_units = _units - [player];
_newUnits = [];

{
	if (count crew _x > 0 && !(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x && isPlayer _x) then {
		if (_x distance player > 20 || _x == cursorObject) then {
			_newUnits pushBack _x;
		};
	};
} forEach _units;

{
	_text = "";
	_idc = _ui displayCtrl (iconID + _forEachIndex);

	if (_x isKindOf "Man") then {
		_sPos = worldToScreen [((visiblePosition _x) select 0), ((visiblePosition _x) select 1), (((_x modelToWorld (_x selectionPosition "head")) select 2) + 0.4)];
		_text = format ["<t align='center'>%1<br/><t size='0.8' color='#B6B6B6'>%2</t></t>", [_x] call life_fnc_formatName,(group _x) getVariable ["gang_name",""]];
	} else {
		_sPPos = worldToScreen [((visiblePosition _x) select 0), ((visiblePosition _x) select 1), ((visiblePosition _x select 2) + 2.2)];		
		{
			if (_forEachIndex == 0) then {
				_text = format ["<img image='%1'/> %2", getText(configFile >> "CfgVehicles" >> typeOf _x >> "picture"), _x call life_fnc_formatName];
			} else {
				format ["%1, %2", _text, [_x] call life_fnc_formatName];
			};
		} forEach (crew _x);

		_text = format ["<t align='center'>%1</t>",_text];
	};

	_idc ctrlSetStructuredText parseText _text;
	_idc ctrlSetPosition [((_sPos select 0) - 0.5), _sPos select 1, 1, 0.65];
	_idc ctrlSetScale scale;
	_idc ctrlSetFade 0;
	_idc ctrlCommit 0;
	_idc ctrlShow true;

	_index = _forEachIndex;
} forEach _newUnits;
(_ui displayCtrl (iconID + _index + 1)) ctrlSetStructuredText parseText "";