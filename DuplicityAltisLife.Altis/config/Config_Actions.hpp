class Actions {
    class Person {
        class bloodbag {
            text = "Give Blood Transfusion";
            condition = "(damage life_interactionTarget) > 0 && {life_inv_bloodbag > 0}";
            action = "[life_interactionTarget] spawn life_fnc_bloodbag;";
        };

        class restrain {
            text = "Restrain";
            condition = "playerSide isEqualTo west && {(side life_interactionTarget in [civilian,independent])} && {!(life_interactionTarget getVariable ['Escorting', false])} && {!(life_interactionTarget getVariable ['restrained', false])} && {speed life_interactionTarget < 1} && {life_interactionTarget getVariable ['Downed', false] || life_interactionTarget getVariable ['playerSurrender', false]}";
            action = "[] call life_fnc_restrainAction; closeDialog 0;";
        };

        class unrestrain {
            text = "Unrestrain";
            condition = "playerSide isEqualTo west && {!(life_interactionTarget getVariable ['Escorting', false])} && {life_interactionTarget getVariable ['restrained', false]} && {speed life_interactionTarget < 1}";
            action = "[life_interactionTarget] call life_fnc_unrestrain; closeDialog 0;" ;
        };

        class escort {
            text = "Escort";
            condition = "!(currentWeapon player isEqualTo '') && {life_interactionTarget getVariable ['restrained', false]} && {!(life_interactionTarget getVariable ['Escorting', false])} && {!(player getVariable ['isEscorting', false])}";
            action = "[] call life_fnc_escortAction; closeDialog 0;";
        };

        class stopEscorting {
            text = "Stop Escorting"
            condition = "player getVariable ['isEscorting', false] && {life_interactionTarget isEqualTo (player getVariable ['escortingPlayer', objNull])} && {life_interactionTarget getVariable ['Escorting', false]}";
            action = "[] call life_fnc_stopEscorting; closeDialog 0;";
        };

        class checkLicenses {
            text = "Check Licesnes";
            condition = "playerSide isEqualTo west && {life_interactionTarget getVariable ['restrained', false]} && {!(life_interactionTarget getVariable ['Escorting', false])} && {!(player getVariable ['isEscorting', false])}";
            action = "[player] remoteExecCall ['life_fnc_licenseCheck',life_interactionTarget]; closeDialog 0;";
        };

        class search {
            text = "Search";
            condition = "playerSide isEqualTo west && {life_interactionTarget getVariable ['restrained', false]} && {!(life_interactionTarget getVariable ['Escorting', false])} && {!(player getVariable ['isEscorting', false])}";
            action = "[] spawn life_fnc_searchAction; closeDialog 0;";
        };

        class ticket {
            text = "Give Ticket";
            condition = "playerSide isEqualTo west && {life_interactionTarget getVariable ['restrained', false]} && {!(life_interactionTarget getVariable ['Escorting', false])} && {!(player getVariable ['isEscorting', false])}";
            action = "[] call life_fnc_ticketAction;";
        };

        class CopArrest {
            text = "Send to Jail";
            condition = "playerSide isEqualTo west && {life_interactionTarget getVariable ['restrained', false]} && {[] call life_fnc_nearHQ}";
            action = "[life_interactionTarget] call life_fnc_arrestAction; closeDialog 0;";
        };

        class putInCar {
            text = "Put In Vehicle";
            condition = "(life_interactionTarget getVariable ['restrained', false]) && {!((nearestObjects [player, ['landVehicle', 'Ship', 'Air'], 5]) isEqualTo [])}";
            action = "[life_interactionTarget] call life_fnc_putInCar; closeDialog 0;";
        };

        class seize {
            text = "Seize Illegal Items";
            condition = "playerSide isEqualTo west && {life_interactionTarget getVariable ['restrained', false]} && {!(life_interactionTarget getVariable ['Escorting', false])} && {!(player getVariable ['isEscorting', false])}";
            action = "[life_interactionTarget] spawn life_fnc_seizePlayerAction; closeDialog 0;";
        };
    };

    class DeadBody {
        class revive {
            text = "Use Defibrillator";
            condition = "life_inv_defibrillator > 0 && {!(life_interactionTarget getVariable ['revive', true])}";
            action = "[] spawn life_fnc_revivePlayer; closeDialog 0;";
        }
    };

    class Vehicle {
        class repair {
            text = "Repair Vehicle";
            condition = "true";
            action = "[] spawn life_fnc_repairTruck; closeDialog 0;";
        };

        class unflip {
            text = "Unflip Vehicle";
            condition = "life_interactionTarget in life_vehicles || local life_interactionTarget";
            action = "life_interactionTarget setPos [getPos life_interactionTarget select 0, getPos life_interactionTarget select 1, (getPos life_interactionTarget select 2)+0.5]; closeDialog 0;";
        };

        class registration {
            text = "View Registration";
            condition = "playerSide isEqualTo west";
            action = "[life_interactionTarget] spawn life_fnc_searchVehAction; closeDialog 0;";
        };

        class search {
            text = "Search Vehicle";
            condition = "playerSide isEqualTo west";
            action = "[life_interactionTarget] spawn life_fnc_vehInvSearch; closeDialog 0;";
        };

        class pullOut {
            text = "Pull Out Players";
            condition = "[] call life_fnc_canPullOut";
            action = "[life_interactionTarget] spawn life_fnc_pulloutAction; closeDialog 0;";
        };

        class impound {
            text = "Impound Vehicle";
            condition = "playerSide isEqualTo west";
            action = "[life_interactionTarget] spawn life_fnc_impoundAction; closeDialog 0;";
        };

        class pushBoat {
            text = "Push Boat";
            condition = "life_interactionTarget isKindOf 'Ship' && {life_interactionTarget in life_vehicles} && {local life_interactionTarget}";
            action = "[] spawn life_fnc_pushObject; closeDialog 0;";
        };

        class mineDevice {
            text = "Mine With Device";
            condition = "(typeOf life_interactionTarget) isEqualTo 'O_Truck_03_device_F' && {life_interactionTarget in life_vehicles} && {isNil (life_interactionTarget getVariable 'mining')}";
            action = "[life_interactionTarget] spawn life_fnc_deviceMine";
        };
    };
};


//Todo: fuel truck

/*
_Btn3 ctrlShow false;
if (typeOf (_curTarget) in ["C_Van_01_fuel_F","I_Truck_02_fuel_F","B_Truck_01_fuel_F"] && _curTarget in life_vehicles) then {
    if (!isNil {_curTarget getVariable "fuelTankWork"}) then {
        _Btn3 ctrlSetText localize "STR_FuelTank_Stop";
        _Btn3 buttonSetAction "life_interactionTarget setVariable [""fuelTankWork"",nil,true]; closeDialog 0;";
        _Btn3 ctrlShow true;
    } else {
        if (count (nearestObjects [_curTarget, ["Land_FuelStation_Feed_F","Land_fs_feed_F"], 15]) > 0) then {
            _Btn3 ctrlSetText localize "STR_FuelTank_Supply";
            _Btn3 buttonSetAction "[life_interactionTarget] spawn life_fnc_fuelSupply";
            _Btn3 ctrlShow true;
        }else{
            {
                if (player distance (getMarkerPos _x) < 20) exitWith {
                    _Btn3 ctrlSetText localize "STR_FuelTank_Store";
                    _Btn3 buttonSetAction "[life_interactionTarget] spawn life_fnc_fuelStore";
                    _Btn3 ctrlShow true;
                };
            } forEach ["fuel_storage_1","fuel_storage_2"];
        };
    };
};
*/
