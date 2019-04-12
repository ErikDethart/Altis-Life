/*
    File: fn_updateRequest.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Updates ALL player information in the database.
    Information gets passed here from the client side file: core\session\fn_updateRequest.sqf
*/
private "_query";

params[
    ["_unit", objNull, [objNull]],
    ["_cash", 0, [0]],
    ["_bank", 0, [0]],
    ["_hunger", 0, [0]],
    ["_thirst", 0, [0]],
    ["_arrested", false, [true]],
    ["_alive", true, [true]],
    ["_vItems", [], [[]]]
];

private _uid = getPlayerUID _unit;
private _name = name _unit;
private _side = side group _unit;
private _stats = [_hunger, _thirst, (damage _unit)];
private _gear = [(getUnitLoadout _unit)] call DB_fnc_mresArray;
private _position = getPosATL _unit;

//Error Checks
if ((_uid isEqualTo "") || (_name isEqualTo "")) exitWith {};

//Parse and setup some data.
_name = [_name] call DB_fnc_mresString;
_vItems = [_vItems] call DB_fnc_mresArray;
_stats = [_stats] call DB_fnc_mresArray;
_cash = [_cash] call DB_fnc_numberSafe;
_bank = [_bank] call DB_fnc_numberSafe;
_alive = [_alive] call DB_fnc_bool;
_position = if (_side isEqualTo civilian) then {[_position] call DB_fnc_mresArray} else {[]};

switch (_side) do {
    case west: {_query = format ["UPDATE players SET name='%1', cash='%2', bankacc='%3', cop_gear='%4', cop_vitems='%5', cop_stats='%6', cop_alive='%7' WHERE pid='%8'",_name,_cash,_bank,_gear,_vItems,_stats, _alive,_uid];};
    case civilian: {_query = format ["UPDATE players SET name='%1', cash='%2', bankacc='%3', civ_vitems='%4', civ_gear='%5', arrested='%6', civ_stats='%7', civ_alive='%8', civ_position='%9' WHERE pid='%10'",_name,_cash,_bank,_vItems,_gear,[_arrested] call DB_fnc_bool,_stats,_alive,_position,_uid];};
    case independent: {_query = format ["UPDATE players SET name='%1', cash='%2', bankacc='%3', med_vitems='%4', med_gear='%5', med_stats='%6', med_alive='%7' WHERE pid='%8'",_name,_cash,_bank,_vItems,_gear,_stats, _alive, _uid];};
};

_queryResult = [_query,1] call DB_fnc_asyncCall;