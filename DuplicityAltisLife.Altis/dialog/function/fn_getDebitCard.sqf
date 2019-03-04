if (life_inv_debitCard == 0) then {
	if ([true, "debitCard", 1] call life_fnc_handleInv) then {
		hint "The Bank of Altis has issued you a new debit card.  It will allow you to make purchases at most shops without having cash on hand."
	}
} else {
	hint "You already have a debit card."
}