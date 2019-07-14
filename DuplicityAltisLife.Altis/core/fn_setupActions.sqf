/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

life_actions = [];

switch (playerSide) do {

    //Civilian
    case civilian: {
        //Drop fishing net
        life_actions pushBack (player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']);

        //Rob person
        life_actions pushBack (player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']);
    };
    
    //Cops
    case west: {

    };
    
    //EMS
    case independent: {

    };

};

//All Sides

//ATM
life_actions pushBack (player addAction[
    "<t color='#ADFF2F'>ATM</t>",
    life_fnc_atmMenu,
    nil,
    1.5,
    false,
    true,
    "",
    "call life_fnc_nearATM"
]);

//Defibrillator
life_actions pushBack (player addAction[
    "<t color='#FF0000'><img image='a3\ui_f\data\map\MapControl\hospital_ca.paa'/> Use Defibrillator</t>",
    life_fnc_revivePlayer,
    "",
    0,
    false,
    false,
    "",
    '(life_inv_defibrillator > 0) && ((player distance cursorObject) < 5) && !(cursorObject getVariable ["Revive", true])'
]);