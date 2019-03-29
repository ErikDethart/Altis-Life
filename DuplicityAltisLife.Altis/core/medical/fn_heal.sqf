#include "..\..\script_macros.hpp"
//File: fn_heal.sqf
//Author: Erik
//Description: Handles first aid kit and blood bag.

private _data = param[3,[objNull,0],[[]],2];
private _unit = _data select 0;
private _type = _data select 1;

