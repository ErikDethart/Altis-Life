/*
    File: fn_stopBank.sqf
    Author: Erik

    Description:
    A cop is diabling the drill.
*/


//Settings
private _disableTime = 45;

if (player distance [14785.1,10732.5,1.1708] > 3) exitWith {hint "You are too far away from the vault door!"};
if !(life_bankState isEqualTo 1) exitWith {hint "There is not a robbery in progress.";};
if !(alive player) exitWith {};
if !(side player isEqualTo west) exitWith {};
if (life_action_inUse) exitWith {};
if (player getVariable ["restrained",false]) exitWith {};
if (life_istazed) exitWith {};

life_interrupted = false;
life_action_inUse = true;

private _success = false;

private _title = "Diabling Drill";

disableSerialization;
"progressBar" cutRsc ["life_progress", "PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format ["%2 (1%1)...","%",_title];
_progress progressSetPosition 0.01;
_cp = 0.01;

while {true} do {
	if !(animationState player isEqualTo "Acts_carFixingWheel") then {
		player playMoveNow "Acts_carFixingWheel";
	};

	uiSleep (_disableTime / 100);

	_cp = _cp + 0.01;
	_progress progressSetPosition _cp;
	_pgText ctrlSetText format ["%3 (%1%2)...",(_cp * 100),"%",_title];
	if (_cp >= 1) exitWith {_success = true;};
	if !(alive player) exitWith {};
	if (life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"];};
};

life_action_inUse = false;
"progressBar" cutText ["","PLAIN"];
player switchMove "";

[player] remoteExecCall ["life_fnc_stopBankServer", 2];
