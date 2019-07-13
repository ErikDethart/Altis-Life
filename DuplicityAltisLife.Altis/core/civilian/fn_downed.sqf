

#include "..\..\script_macros.hpp"
/*
    File: fn_downed.sqf
    Author: Bryan "Tonic" Boardwine
    Editor: Repentz to improve the function

    Description:
    Starts the animation and broadcasts out what it needs to.
*/

params [
    ["_unit", objNull, [objNull]],
    ["_shooter", objNull, [objNull]]
];

if (isNull _unit || isNull _shooter) exitWith {};
if(player getVariable["restrained",false]) exitWith {};

private _time = time;

if (_shooter isKindOf "Man" && alive player && !life_isDowned) then {
    life_isDowned = true;
    "DynamicBlur" ppEffectEnable true;
    "DynamicBlur" ppEffectAdjust [5];
    "DynamicBlur" ppEffectCommit 0;

    if(isNull objectParent player) then {
        for [{_x=1},{_x<=10},{_x=_x+1}] do {
            [] call life_fnc_forceRagdoll;
            sleep 0.1;
            if(animationState player == "unconscious") exitWith {};
        };
    };

    [_unit, _shooter, "downed"] call life_fnc_killFeed;

    disableUserInput true;
    player setDamage 0;
    waitUntil{animationState player != "unconscious"};
    _anim = if(isNull objectParent player) then {"Incapacitated"} else {"kia_driver_mid01"};
    [player,_anim] remoteExec ["life_client_fnc_animSync",0];

    while {true} do {
        if (time - _time >= 45) exitWith {};
        if (player getVariable["restrained",false]) exitWith {};
        if !(alive player) exitWith {};

        sleep 1;
    };

    if !(player getVariable["Escorting",false]) then {
        detach player;
    };

    "DynamicBlur" ppEffectEnable false;

    life_isDowned = false;

    disableUserInput false;

    if (alive player) then {
        player playMoveNow "amovppnemstpsraswrfldnon";
        player setFatigue 1;
        player setdamage 0;
    };
};















