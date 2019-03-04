#include "..\..\script_macros.hpp"
/*
    File: fn_depositAll.sqf
    Author: CodyGoogles (Google)

    Description:
    Deposits all money you have on hand into ATM
*/

private ["_value"];
_value = parseNumber(ctrlText 2702);




if (_value < 0) exitWith {};
if (!([str(_value)] call TON_fnc_isnumber)) exitWith {hint localize "STR_ATM_notnumeric"};


CASH = CASH - _value;
BANK = BANK + _value;


hint format [localize "STR_ATM_DepositSuccessAll",[_value] call life_fnc_numberText];


if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        money_log = format ["%1 was deposited using deposit all! New Bank balance: %2",_value, [BANK] call life_fnc_numberText];
    } else {
        money_log = format ["%1 - %2 deposited $%3 into their bank. New Bank Balance: $%4",profileName,(getPlayerUID player),_value,[BANK] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};