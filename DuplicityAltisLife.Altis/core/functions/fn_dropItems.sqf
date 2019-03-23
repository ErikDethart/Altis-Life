#include "..\..\script_macros.hpp"
/*
    File: fn_dropItems.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called on death, player drops any 'virtual' items they may be carrying.
*/
private ["_obj","_unit","_item","_value"];
_unit = _this select 0;

{
    _item = configName _x;
    _value = ITEM_VALUE(_item);
    _itemName = ITEM_VARNAME(_item);

    if (_value > 0) then {
        _pos = _unit modelToWorld[0,3,0];
        _pos = [(_pos select 0),(_pos select 1),0];
        _obj = (ITEM_MODEL(_item)) createVehicle _pos;
        [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
        _obj setPos _pos;
        _obj setVariable ["item",[_item,_value],true];
        missionNamespace setVariable [_itemName,0];
    };
} forEach (("true" configClasses (missionConfigFile >> "VirtualItems")));

if (CASH > 0) then {
    _pos = _unit modelToWorld[0,3,0];
    _pos = [(_pos select 0),(_pos select 1),0];
    _obj = "Land_Money_F" createVehicle _pos;
    _obj setVariable ["item",["money",missionNamespace getVariable ["life_cash",0]],true];
    _obj setPos _pos;
    [_obj] remoteExecCall ["life_fnc_simDisable",RANY];
    missionNamespace setVariable ["CASH",0];
};