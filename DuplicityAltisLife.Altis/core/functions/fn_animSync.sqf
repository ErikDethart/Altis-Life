/*
    File: fn_animSync.sqf
    Author:

    Description:

*/
params [
    ["_unit", objNull, [objNull]],
    ["_anim", "", [""]],
    ["_cancelOwner", false, [true]],
    ["_command", "switchMove", [""]]
];

if (isNull _unit || {(local _unit && _cancelOwner)}) exitWith {};

switch _command do {
    case "switchMove": { _unit switchMove _anim };
    case "playMove": {_unit playMove _anim};
    case "playMoveNow": { _unit playMoveNow _anim };
    case "setMimic": { _unit setMimic _anim };
};