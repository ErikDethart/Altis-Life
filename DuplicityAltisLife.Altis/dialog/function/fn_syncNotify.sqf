#include "..\..\script_macros.hpp"
//File: fn_syncNotify.sqf
//Author: Erik
//Description: Notify the player when their data has been saved.

disableSerialization;

if (isNull LIFEdisplay) then {[] call life_fnc_hudUpdate;};

private _background = LIFEctrl(1300);
private _picture = LIFEctrl(1301);
private _text = LIFEctrl(1302);

playSound "save";

_background ctrlSetPosition [-0.7125, 0];
_picture ctrlSetPosition [-0.5125, 0];
_text ctrlSetPosition [-0.7125, 0];

_background ctrlCommit 0.25;
_picture ctrlCommit 0.25;
_text ctrlCommit 0.25;

uiSleep 2.25;

_background ctrlSetPosition [(-0.7125 - 0.25), 0];
_picture ctrlSetPosition [(-0.5125 - 0.25), 0];
_text ctrlSetPosition [(-0.7125 - 0.25), 0];

_background ctrlCommit 0.5;
_picture ctrlCommit 0.5;
_text ctrlCommit 0.5;