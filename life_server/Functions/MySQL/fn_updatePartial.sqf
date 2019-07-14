/*
    File: fn_updatePartial.sqf
    Author: Bryan "Tonic" Boardwine
    Modified: Erik

    Description:
    Takes partial data of a player and updates it, this is meant to be
    less network intensive towards data flowing through it for updates.
*/
params [
    ["_unit", objNull, [objNull]],
    ["_mode", -1, [0]],
    ["_data", nil, ["", [], 0, true]]
];

private _uid = getPlayerUID _unit;
private _side = side group _unit;
private "_query";

if (_uid isEqualTo "" || _side isEqualTo sideUnknown) exitWith {};

switch (_mode) do {
    case 0: {
        _data = [_data] call DB_fnc_numberSafe;
        _query = format ["UPDATE players SET cash='%1' WHERE pid='%2'", _data, _uid];
    };

    case 1: {
        _data = [_data] call DB_fnc_numberSafe;
        _query = format ["UPDATE players SET bank='%1' WHERE pid='%2'", _data, _uid];
    };

    case 2: {
        for "_i" from 0 to (count(_data) - 1) do {
            private _bool = [(_data select _i) select 1] call DB_fnc_bool;
            _data set[_i,[(_data select _i) select 0,_bool]];
        };

        _data = [_data] call DB_fnc_mresArray;

        switch (_side) do {
            case west: {_query = format ["UPDATE players SET cop_licenses='%1' WHERE pid='%2'", _data, _uid];};
            case civilian: {_query = format ["UPDATE players SET civ_licenses='%1' WHERE pid='%2'", _data, _uid];};
            case independent: {_query = format ["UPDATE players SET med_licenses='%1' WHERE pid='%2'", _data, _uid];};
        };
    };

    case 3: {
        _data = [(getUnitLoadout _unit), _data];
        _data = [_data] call DB_fnc_mresArray;

        switch (_side) do {
            case west: {_query = format ["UPDATE players SET cop_gear='%1' WHERE pid='%2'", _data, _uid];};
            case civilian: {_query = format ["UPDATE players SET civ_gear='%1' WHERE pid='%2'", _data, _uid];};
            case independent: {_query = format ["UPDATE players SET med_gear='%1' WHERE pid='%2'", _data, _uid];};
        };
    };

    case 4: {
        _data = [_data] call DB_fnc_bool;
        private _pos = [(getPosATL _unit)] call DB_fnc_mresArray;
        _query = format ["UPDATE players SET civ_alive='%1', civ_position='%2' WHERE pid='%3'", _data, _pos, _uid];
    };

    case 5: {
        _data = [_data] call DB_fnc_bool;
        _query = format ["UPDATE players SET arrested='%1' WHERE pid='%2'", _data, _uid];
    };

    case 6: {
        _cash = [(_data select 0)] call DB_fnc_numberSafe;
        _bank = [(_data select 1)] call DB_fnc_numberSafe;

        _query = format ["UPDATE players SET cash='%1', bank='%2' WHERE pid='%3'", _cash, _bank, _uid];
    };
};

if (_query isEqualTo "") exitWith {};

[_query,1] call DB_fnc_asyncCall;
