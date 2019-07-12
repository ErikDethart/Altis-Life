/*
    File: fn_startBank.sqf
    Author: Erik

    Description:
    A civ started a bank robbery. Let the server know.
*/

if (player distance [14785.1,10732.5,1.1708] > 3) exitWith {hint "You are too far away from the vault door!"};
if (life_bankState isEqualTo 1) exitWith {hint "There is already a robbery in progress!"};
if (life_bankState isEqualTo 2) exitWith {hint "The bank is under elevated security! Try again later."};
if !(alive player) exitWith {};
if !(side player isEqualTo civilian) exitWith {};
if (player getVariable ["restrained",false]) exitWith {};
if (life_is_arrested) exitWith {};
if (life_istazed) exitWith {};

private _copCount = 0;
private _requiredCops = getNumber(missionConfigFile >> "Life_Settings" >> "bank_minimum_cops");

{
	if (side _x isEqualTo west) then {
		_copCount = _copCount + 1;
	};
}forEach playableUnits;

if (_copCount < _requiredCops) exitWith {
	hint format ["There are not enough officers on duty to start a bank robbery at this time.  At least %1 officers must be online.", _requiredCops];
};

[player] remoteExec ["life_fnc_bankRobbery", 2];
