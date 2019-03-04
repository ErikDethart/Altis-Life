#include "..\..\script_macros.hpp"
/*
    File: fn_depositAll.sqf
    Author: CodyGoogles (Google)

    Description:
    Deposits all money you have on hand into ATM
*/

BANK = BANK + CASH;
CASH = 0;


hint format [localize "STR_ATM_DepositSuccessAll",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;


if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        money_log = format ["%1 was deposited using deposit all! New Bank balance: %2",_value, [BANK] call life_fnc_numberText];
    } else {
        money_log = format ["%1 - %2 deposited $%3 into their bank. New Bank Balance: $%4",profileName,(getPlayerUID player),_value,[BANK] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};