#include "..\..\script_macros.hpp"
/*
    File: fn_weaponShopBuy.sqf
    Author: Erik
    Purpose: Buy a weapon
*/

params [
    ["_className", "", [""]],
    ["_price", 0, [0]],
    ["_shop", "", [""]]
];

private _itemInfo = [_className] call life_fnc_fetchCfgDetails;

if (!(player canAdd _className) && ((_itemInfo select 6) != "CfgVehicles") && ((_itemInfo select 4) in [4096,131072])) exitWith {
    hint "You don't have enough room for that item.";
};

if (_price > (CASH + BANK)) exitWith {
    hint "You do not have sufficient funds to complete this transaction.";
};

if (CASH > 0) then {
    if (CASH >= _price) then {
        CASH = CASH - _price;
        systemChat format ["You purchased a %1 with $%2 in cash.", _itemInfo select 1, str _price];
    } else {
        private _oldCash = CASH;
        _price = _price - CASH;
        CASH = 0;
        BANK = BANK - _price;
        systemChat format ["You purchased a %1 with $%2 in cash and $%3 using your debit card.", _itemInfo select 1, str _oldCash, str _price];
    };
} else {
    BANK = BANK - _price;
    systemChat format ["You purcahsed a %1 for $%2 using your debit card.", _itemInfo select 1, str _price];
};

[_className, true] call life_fnc_handleItem;

[6] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
