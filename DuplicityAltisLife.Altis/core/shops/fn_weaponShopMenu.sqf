#include "..\..\script_macros.hpp"
/*
    File: fn_weaponShopPopulate.sqf
    Author: Erik
    Purpose: Open and populate the weapon shop menu
*/

private _shop = param [3, "", [""]];

disableSerialization;
if !(createDialog "life_weapon_shop") exitWith {};
if !(call compile getText(missionConfigFile >> "WeaponShops" >> _shop >> "conditions")) exitWith {
    closeDialog 0;
    systemChat "You are not permitted to access this shop.";
};
if !(str(side player) isEqualTo getText(missionConfigFile >> "WeaponShops" >> _shop >> "side")) exitWith {
    closeDialog 0;
    systemChat "You are not permitted to access this shop.";
};
_display = findDisplay 38400;

for [{_i = 0}, {_i < 50}, {_i = _i + 1}] do {
    (_display displayCtrl(100 + _i)) ctrlShow false;
    (_display displayCtrl(2000 + _i)) ctrlShow false;
};

ctrlSetText [1, (getText(missionConfigFile >> "WeaponShops" >> _shop >> "name"))];

private _index = 0;
{
    if (call compile getText(_x >> "condition")) then {
        _className = configName(_x);
        _displayName = getText(_x >> "displayName");
        _price = getNumber(_x >> "price");

        if (_displayName isEqualTo "") then {
            _displayName = getText(configFile >> "CfgWeapons" >> _className >> "displayName");
        };

        _group = ((_display displayCtrl (100 + _index)));
        _group ctrlShow true;

        private ["_xCoord", "_yCoord"];

        if ((_index % 2) isEqualTo 0) then {
            _xCoord = 0.00625;
        } else {
            _xCoord = 0.49375;
        };

        _yCoord = 0.01 + (0.37 * floor(_index / 2));

        _group ctrlSetPosition [_xCoord, _yCoord];
        _group ctrlCommit 0;

        ctrlSetText [(200 + _index), getText(configFile >> "CfgWeapons" >> _className >> "picture")];

        buttonSetAction [(300 + _index), format ["[%1, %2, %3] spawn life_fnc_weaponShopBuy;", str(_className), _price, str(_shop)]];

        _color = "";
        if ((CASH + BANK) >= _price) then {
            _color = "#00FF00";
        } else {
            _color = "#FF0000";
        };

        (_display displayCtrl (400 + _index)) ctrlSetStructuredText parseText format["<t>%1</t><br/><t>Price: </t><t color='%2'>$%3</t>", _displayName, _color, _price];

        _mags = getArray(_x >> "mags");

        if ((count _mags) > 0) then {
            if (call compile ((_mags select 0) select 3)) then {
                ctrlSetText [(500 + _index), getText(configFile >> "CfgMagazines" >> ((_mags select 0) select 0) >> "picture")];
                _displayName = ((_mags select 0) select 1);
                if (_displayName isEqualTo "") then {
                    _displayName = getText(configFile >> "CfgMagazines" >> ((_mags select 0) select 0) >> "displayName");
                };
                _price = ((_mags select 0) select 2);
                buttonSetAction [(600 + _index), format ["[%1, %2, %3] spawn life_fnc_weaponShopBuy;", str(((_mags select 0) select 0)), _price, str(_shop)]];
                if ((CASH + BANK) >= _price) then {
                    _color = "#00FF00";
                } else {
                    _color = "#FF0000";
                };
                (_display displayCtrl (700 + _index)) ctrlSetStructuredText parseText format["<t>%1</t><br/><t>Price: </t><t color='%2'>$%3</t>", _displayName, _color, _price];
            };
        };

        (_display displayCtrl (1100 + _index)) ctrlShow false;
        (_display displayCtrl (900 + _index)) ctrlShow false;
        if ((count _mags) > 1) then {
            if (call compile ((_mags select 1) select 3)) then {
                (_display displayCtrl (1100 + _index)) ctrlShow true;
                (_display displayCtrl (900 + _index)) ctrlShow true;
                ctrlSetText [(800 + _index), getText(configFile >> "CfgMagazines" >> ((_mags select 1) select 0) >> "picture")];
                _displayName = ((_mags select 1) select 1);
                if (_displayName isEqualTo "") then {
                    _displayName = getText(configFile >> "CfgMagazines" >> ((_mags select 1) select 0) >> "displayName");
                };
                _price = ((_mags select 1) select 2);
                buttonSetAction [(900 + _index), format ["[%1, %2, %3] spawn life_fnc_weaponShopBuy;", str(((_mags select 1) select 0)), _price, str(_shop)]];
                if ((CASH + BANK) >= _price) then {
                    _color = "#00FF00";
                } else {
                    _color = "#FF0000";
                };
                (_display displayCtrl (1000 + _index)) ctrlSetStructuredText parseText format["<t>%1</t><br/><t>Price: </t><t color='%2'>$%3</t>", _displayName, _color, _price];
            };
        };

        _index = _index + 1;
    };
} forEach ("true" configClasses (missionConfigFile >> "WeaponShops" >> _shop >> "items"));

private _accs = getArray(missionConfigFile >> "WeaponShops" >> _shop >> "accs");
_index = 0;

{
    if (call compile (_x select 3)) then {
        _className = _x select 0;

        _section = "";
        if (isClass(configFile >> "CfgWeapons" >> _className)) then {
            _section = "CfgWeapons";
        } else {
            _section = "CfgMagazines";
        };

        _displayName = _x select 1;
        if (_displayName isEqualTo "") then {
            _displayName = getText(configFile >> _section >> _className >> "displayName");
        };
        _price = _x select 2;

        (_display displayCtrl (2000 + _index)) ctrlShow true;
        (_display displayCtrl (2000 + _index)) ctrlSetPosition [0.00625, (0.01 + (_index * 0.14))];
        (_display displayCtrl (2000 + _index)) ctrlCommit 0;
        ctrlSetText [(2100 + _index), getText(configFile >> _section >> _className >> "picture")];
        buttonSetAction [(2200 + _index), format ["[%1, %2, %3] spawn life_fnc_weaponShopBuy;", str(_className), _price, str(_shop)]];
        _color = "";
        if ((CASH + BANK) >= _price) then {
            _color = "#00FF00";
        } else {
            _color = "#FF0000";
        };
        (_display displayCtrl (2300 + _index)) ctrlSetStructuredText parseText format["<t>%1</t><br/><t>Price: </t><t color='%2'>$%3</t>", _displayName, _color, _price];


        _index = _index + 1;
    };
} forEach _accs;
