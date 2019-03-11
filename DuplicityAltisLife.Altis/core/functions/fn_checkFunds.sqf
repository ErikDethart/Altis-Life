#include "..\..\script_macros.hpp"

//File: fn_checkFunds.sqf
//Author: Erik
//Description: Determine if the player has enough money to complete a transaction
//Paramaters:
	//Amount (number)
	//Allow Debit (bool)
//Return: (bool) will the transaction be successful
private _return = false;
params [
	["_amount", 0],
	["_allowDebit", true]
];

systemchat format ["Amount: %1", str(_amount)];
systemchat format ["Allow Debit: %1", str(_allowDebit)];

if (_allowDebit && life_inv_debitCard > 0) then {
	if ((BANK + CASH) >= _amount) then {
		_return = true;
	};
} else {
	if (CASH >= _amount) then {
		_return = true;
	};
};

systemchat format ["Return: %1", str(_return)];

_return;