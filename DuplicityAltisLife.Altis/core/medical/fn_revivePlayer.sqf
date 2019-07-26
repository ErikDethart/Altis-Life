#include "..\..\script_macros.hpp"
/*
    File: fn_revivePlayer.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the revive process on the player.
*/
#define REVIVETIME 15

private _target = life_interactionTarget;

if (_target getVariable ["Revive", false]) exitWith {};
if (_target getVariable ["Reviving", objNull] isEqualTo player) exitWith {hint "Someone else is already reviving this person";};
if (player distance _target > 5) exitWith {};

private _reviveCost = getNumber (missionConfigFile >> "Life_Settings" >> "revive_fee");
private _targetName = _target getVariable ["name", "Unknown"];
private _title = format ["Reviving %1", _targetName];

life_action_inUse = true;

_target setVariable ["Reviving", player, true];

disableSerialization;
"progressBar" cutRsc ["life_progress", "PLAIN"];
private _ui = uiNamespace getVariable ["life_progress", displayNull];
private _progressBar = _ui displayCtrl 38201;
private _titleText = _ui displayCtrl 38202;
private _cP = 0;

_titleText ctrlSetText format ["%2 (1%1)...", "%", _title];
_progressBar progressSetPosition 0;

player playMoveNow "AinvPknlMstpSnonWnonDr_medic0";

for "_i" from 0 to 1 step 0 do {
    uiSleep (REVIVETIME / 100);
    _cP = _cP + 0.01;
    _titleText ctrlSetText format ["%3 (%1%2)...", round(_cP * 100), "%", _title];
    _progressBar progressSetPosition _cP;
    if (_cP >= 1 || {!alive player}) exitWith {};
    if (life_isDowned || {life_interrupted}) exitWith {};
    if (player getVariable ["restrained", false]) exitWith {};
    if (player distance _target > 5) exitWith {};
    if (_target getVariable ["Revive", false]) exitWith {};
    if !(_target getVariable ["Reviving", objNull] isEqualTo player) exitWith {};
};

"progressBar" cutText ["", "PLAIN"];
player switchMove "";

if !(_target getVariable ["Reviving", objNull] isEqualTo player) exitWith {hint "Someone else is already reviving this person"; life_action_inUse = false;};
_target setVariable ["Reviving", nil, true];

if (!alive player || {life_isDowned}) exitWith {life_action_inUse = false;};
if (_target getVariable ["Revive", false]) exitWith {hint localize "STR_Medic_RevivedRespawned"; life_action_inUse = false;};
if (player getVariable ["restrained", false]) exitWith {life_action_inUse = false;};
if (player distance _target > 5) exitWith {titleText[localize "STR_Medic_TooFar","PLAIN"]; life_action_inUse = false;};
if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel", "PLAIN"]; life_action_inUse = false;};

life_action_inUse = false;
_target setVariable ["Revive", true, true];
[profileName] remoteExecCall ["life_fnc_revived", _target];

titleText[format ["You have revived %1 and received $%2 for your services.", _targetName,[_reviveCost] call life_fnc_numberText], "PLAIN"];
BANK = BANK + _reviveCost;
[1] call SOCK_fnc_updatePartial;
