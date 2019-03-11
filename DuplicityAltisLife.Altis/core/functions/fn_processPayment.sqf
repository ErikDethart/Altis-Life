#include "..\..\script_macros.hpp"

//File: fn_processPayment.sqf
//Author: Erik
//Description: Handle a transaction with or without a debit card
//Paramaters:
	//Amount (number)
	//Allow Debit (bool)
//Return: (bool) was the transaction successful

private _return = false;
private _oldCash = CASH;

params [
	["_amount", 0],
	["_allowDebit", true]
];

if ([_amount, _allowDebit] call life_fnc_checkFunds) then {
	if (_allowDebit && life_inv_debitCard > 0) then {
		if (CASH > 0) then {
			if (CASH >= _amount) then {
				CASH = CASH - _amount;
				systemChat format ["You paid $%1 in cash.", _amount];
				_return = true;
			} else {
				_amount = _amount - CASH;
				CASH = 0;
				BANK = BANK - _amount;
				systemChat format ["You paid $%1 in cash and %2 using your debit card.", _oldCash, _amount];
				_return = true;
			};
		} else {
			BANK = BANK - _amount;
			systemChat format ["You paid $%1 using your debit card.", _amount];
			_return = true;
		};
	} else {
		CASH = CASH - _amount;
		systemChat format ["You paid $%1 in cash.", _amount];
		_return = true;
	};
} else {
	systemChat "You do not have enough money!";
};

_return;