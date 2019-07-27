#include "..\..\script_macros.hpp"
/*
*    File: fn_keyUpHandler.sqf
*    Author: Bryan "Tonic" Boardwine
*
*    Description:
*    Main key handler for event 'keyUp'.
*/
scopeName "main";
private _handled = false;

params [
    "_ctrl",
    "_code",
    "_shift",
    "_ctrlKey",
    "_alt"
];

_handled;
