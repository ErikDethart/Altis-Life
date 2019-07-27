/*
    File: fn_bloodbag.sqf
    Author: Erik
    Description: handles blood bag
*/

params [
    ["_unit", objNull, [objNull]]
];

if (isNull _unit) exitWith {};
if !(alive _unit) exitWith {};
if !(alive player) exitWith {};
if (player getVariable ["restrained", false]) exitWith {};
if (player getVariable ["playerSurrender",false]) exitWith {};
if (life_isDowned) exitWith {};
if (!(isNull objectParent player) && !(_unit isEqualTo player)) exitWith {};
if (!(isNull objectParent player) && {(driver objectParent player) isEqualTo player}) exitWith {};
if (player distance _unit > 5) exitWith {};
if (life_inv_bloodbag < 1) exitWith {};

life_action_inUse = true;

private _inVeh = true;
if (isNull objectParent player) then {
    _inVeh = false;
};

private _title = format ["Giving transfusion to %1", _unit getVariable["realname", ""]];

disableSerialization;
"progressBar" cutRsc ["life_progress", "PLAIN"];
private _ui = uiNamespace getVariable ["life_progress", displayNull];
private _progressBar = _ui displayCtrl 38201;
private _titleText = _ui displayCtrl 38202;
private _cP = 0;

_titleText ctrlSetText format ["%2 (1%1)...", "%", _title];
_progressBar progressSetPosition 0;

private "_animator";

if !(_inVeh) then {
    _animator = [] spawn {
        for "_i" from 0 to 1 step 0 do {
            player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
            player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
            waitUntil {animationState player isEqualTo "AinvPknlMstpSnonWnonDnon_medic_1"};
            waitUntil {!(animationState player isEqualTo "AinvPknlMstpSnonWnonDnon_medic_1")};
        };
    };
};

for "_i" from 0 to 1 step 0 do {
    if (!(_inVeh) && !(animationState player isEqualTo "AinvPknlMstpSnonWnonDnon_medic_1")) then {
        player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
    };
    uiSleep (0.2);
    _cP = _cP + 0.01;
    _progressBar progressSetPosition _cP;
    _titleText ctrlSetText format ["%3 (%1%2)...", round(_cP * 100), "%", _title];
    if (_cP >= 1 || {!alive player}) exitWith {};
    if (life_isDowned || {life_interrupted}) exitWith {};
    if (player getVariable ["restrained", false]) exitWith {};
    if (player distance _unit > 5) exitWith {};
    if !(alive _unit) exitWith {};
    if (_inVeh && {(driver objectParent player) isEqualTo player}) exitWith {};
};

"progressBar" cutText ["", "PLAIN"];
if !(_inVeh) then {
    terminate _animator;
    player switchMove "";
};

if (!alive player) exitWith {};
if (life_isDowned || {life_interrupted}) exitWith {};
if (player getVariable ["restrained", false]) exitWith {};
if (player distance _target > 5) exitWith {};
if !(alive _unit) exitWith {};
if (_inVeh && {(driver objectParent player) isEqualTo player}) exitWith {};
if !([false, "bloodbag", 1] call life_fnc_handleInv) exitWith {};

_unit setDamage 0;
life_action_inUse = false;

if (_unit isEqualTo player) then {
    titleText ["You gave yourself a blood transfusion", "PLAIN"];
} else {
    titleText [format ["You gave %1 a blood transfusion.", _unit getVariable ["realname", ""]], "PLAIN"];
    [2, format ["%1 has given you a blood transfusion.", profileName]] remoteExecCall ["life_fnc_broadcast", _unit];
};
