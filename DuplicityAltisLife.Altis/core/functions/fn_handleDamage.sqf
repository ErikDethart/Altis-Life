#include "..\..\script_macros.hpp"

/*
    File: fn_handleDamage.sqf
    Author: Erik
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

//Error Checks
if (isNull _source || _source isEqualTo _unit || _unit getVariable["Revive",false]) exitWith {};

if !(_unit isEqualTo player) exitWith {};



//Handle Downing ================================================================================================
    private _downing = false;

    //7.62's
    if ((_projectile isEqualTo "B_762x51_Ball") && ("acc_pointer_IR" in (primaryWeaponItems _source))) then {
        _downing = true;
    };

    //Other
    if (currentMagazine _source in  ["30Rnd_65x39_caseless_mag_Tracer", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "150Rnd_556x45_Drum_Mag_Tracer_F", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "100Rnd_65x39_caseless_mag_Tracer", "30Rnd_9x21_Green_Mag"]) then {
        _downing = true;
    };

    //Handle
    if (_downing) then {
        if (_unit getVariable ["restrained",false] || life_isDowned) then {
            _damage = 0;
        } else {
            if (((damage _unit) + _damage) >= 0.90) then {
                _damage = 0;

                if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                    player action ["Eject",vehicle player];
                };

                [_unit,_source] spawn life_fnc_downed;
            };
        };
    };
//Downing Script End ==============================================================================================


[] call life_fnc_hudUpdate;
_damage;
