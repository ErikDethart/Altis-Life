#include "..\script_macros.hpp"
/*
    File: fn_hideObjects.sqf
    Author: Erik
    Purpose: Hides unwanted map objects
*/

{
    hideObject nearestObject _x;
} forEach (parseSimpleArray loadFile "config\chickenwire.txt");

{
    hideObject nearestObject _x;
} forEach (parseSimpleArray loadFile "config\deadbushes.txt");
