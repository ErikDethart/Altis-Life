/*
    File: fn_interactionMenu.sqf
    Author: Erik
    Purpose: Unified system to replace addActions
*/

disableSerialization;

params [
	["_obj", objNull, [objNull]],
	["_config", "", [""]],
	["_title", "", [""]]
];

if (_config isEqualTo "") exitWith {};
if (isNull _obj) exitWith {};
if !(createDialog "life_interaction_menu") exitWith {closeDialog 0;};

private _display = findDisplay 500;
private _buttonCount = 0;

life_pInact_curTarget = _obj;

{
    _condition = [] call compile (format ["(%1)", getText(_x >> "condition")]);

    if (_condition) then {
        _display displayCtrl (1000 + _buttonCount) ctrlSetText getText(_x >> "text");
        buttonSetAction [1000, getText(_x >> "action")];

        _buttonCount = _buttonCount + 1;
    };
} forEach ("true" configClasses(missionConfigFile >> "Actions" >> _config));

if (_buttonCount <=0) exitWith {systemChat "No actions available for this.";};

private _titleBar = _display displayCtrl 100;
private _closeButton = _display displayCtrl 102;
private _mainBackground = _display displayCtrl 103;
private _ctrlGroup = _display displayCtrl 101;
private _animTime = (0.01 + (0.03 * _buttonCount));

_titleBar ctrlSetText _title;
_titleBar ctrlSetPositionY (0.44 - (0.03 * (_buttonCount - 1)));
_titleBar ctrlCommit 0;

_closeButton ctrlSetPositionY (0.484 - (0.03 * (_buttonCount - 1)));
_closeButton ctrlCommit 0;

{
    _x ctrlSetPositionY (0.48 - (0.03 * (_buttonCount - 1)));
    _x ctrlCommit 0;

    _x ctrlSetPositionH (0.08 + (0.06 * (_buttonCount - 1)));
    _x ctrlCommit _animTime;
} forEach [_ctrlGroup, _mainBackground];

_closeButton ctrlSetPositionY (0.564 + (0.03 * (_buttonCount - 1)));
_closeButton ctrlCommit _animTime;
