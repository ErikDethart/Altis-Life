#include "..\..\script_macros.hpp"

//File: fn_checkFunds.sqf
//Author: Erik
//Description: Determine if the player has enough money to complete a transaction
//Paramaters:
	//Amount (number)
	//Allow Debit (bool)
//Return: (bool) will the transaction be successful
private _return;
params [
	[_amount, 0],
	[_allowDebit, true]
];

if (_allowDebit && life_inv_debitCard > 0) then {
	_return = (_amount <= (BANK + CASH));
} else {
	_return = (_amount <= CASH);
};

_return;