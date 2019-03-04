#include "..\..\script_macros.hpp"

/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine
    Description:
    Handles Rubber Bullets
*/

//Vars And Stuff
params [
  ["_unit",objNull,[objNull]],
  ["_part","",[""]],
  ["_damage",0,[0]],
  ["_source",objNull,[objNull]],
  ["_projectile","",[""]],
  ["_index",0,[0]]
];

//Check Our Projectile
if (isNull _source || _source isEqualTo _unit || _unit getVariable["Revive",false]) exitWith {};

//Handle The 7.62's
if (_projectile in ["B_762x51_Ball","762x54_Ball"] && "acc_pointer_IR" in (primaryWeaponItems _source)) then {
  if (life_isknocked || (_unit getVariable ["restrained",false])) exitWith {
    [] spawn life_fnc_hudUpdate;
    _damage = 0;
    _damage;
  };
  if ((((getDammage _unit) + _damage) >= 0.90)) then {
    _damage = 0;
    if (typeOf (vehicle player) == "B_Quadbike_01_F") then { player action ["Eject",vehicle player]; };
    [_unit,_source] spawn life_fnc_tazed;
  };
};

//Handle The MX
if (currentMagazine _source == "30Rnd_65x39_caseless_mag") then {
  if (life_isknocked || (_unit getVariable ["restrained",false])) exitWith {
    [] spawn life_fnc_hudUpdate;
    _damage = 0;
    _damage;
  };
  if ((((getDammage _unit) + _damage) >= 0.90)) then {
    _damage = 0;
    if (typeOf (vehicle player) == "B_Quadbike_01_F") then { player action ["Eject",vehicle player]; };
    [_unit,_source] spawn life_fnc_tazed;
  };
};

//Handle Other Rubbers
if (_projectile in LIFE_SETTINGS(getArray,"rubber_whitelist")) then {
  if (life_isknocked || (_unit getVariable ["restrained",false])) exitWith {
    [] spawn life_fnc_hudUpdate;
    _damage = 0;
    _damage;
  };
  if ((((getDammage _unit) + _damage) >= 0.90)) then {
    _damage = 0;
    if (typeOf (vehicle player) == "B_Quadbike_01_F") then { player action ["Eject",vehicle player]; };
    [_unit,_source] spawn life_fnc_tazed;
  };
};

[] spawn life_fnc_hudUpdate;
_damage;