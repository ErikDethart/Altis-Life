/*
	File: fn_groupTags.sqf
	Author: Erik
*/

private _color = [profileNamespace getVariable ['IGUI_TEXT_RGB_R', 1], profileNamespace getVariable ['IGUI_TEXT_RGB_G', 1], profileNamespace getVariable ['IGUI_TEXT_RGB_B', 1], profileNamespace getVariable ['IGUI_TEXT_RGB_A', 1]];

{
	drawIcon3D ["a3\ui_f\data\IGUI\Cfg\Cursors\select_ca.paa", _color, (_x modelToWorldVisual (_x selectionPosition "spine2")), 1, 1, 0, "", 0, 0, "RobotoCondensedLight", "center", true];
} forEach ((units group player) - [player]);
