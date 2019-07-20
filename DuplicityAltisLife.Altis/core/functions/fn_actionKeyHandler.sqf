#include "..\..\script_macros.hpp"
/*
    File: fn_actionKeyHandler.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Master action key handler, handles requests for picking up various items and
    interacting with other players (Cops = Cop Menu for unrestrain,escort,stop escort, arrest (if near cop hq), etc).
*/
private ["_whatIsIt","_handle"];
private _curObject = cursorObject;

if (life_action_inUse) exitWith {};
if (life_interrupted) exitWith {life_interrupted = false;};
if (dialog) exitWith {};
if !(alive player) exitWith {};
if (player getVariable ["restrained", false]) exitWith {};
if (player getVariable ["playerSurrender",false]) exitWith {};
if (life_isDowned) exitWith {};
if !(isNull objectParent player) exitWith {};

if (player getVariable ["isEscorting", false]) exitWith {
    _curObject = player getVariable ["escortingPlayer", objNull];
    [_curObject, "Person", (_curObject getVariable ["realname", ""])] call life_fnc_interactionMenu;
};

if (isNull _curObject) exitWith {
    if (surfaceIsWater (visiblePositionASL player)) then {
        _fish = (nearestObjects[player,(LIFE_SETTINGS(getArray,"animaltypes_fish")),3]) select 0;
        if (!isNil "_fish") then {
            if (!alive _fish) then {
                [_fish] call life_fnc_catchFish;
            };
        };
    } else {
        _animal = (nearestObjects[player,(LIFE_SETTINGS(getArray,"animaltypes_hunting")),3]) select 0;
        if (!isNil "_animal") then {
            if (!alive _animal) then {
                [_animal] call life_fnc_gutAnimal;
            };
        } else {
            if (playerSide isEqualTo civilian && !life_action_gathering) then {
                _whatIsIt = [] call life_fnc_whereAmI;
                if (life_action_gathering) exitWith {};
                switch (_whatIsIt) do {
                    case "mine" : { _handle = [] spawn life_fnc_mine };
                    default { _handle = [] spawn life_fnc_gather };
                };
                life_action_gathering = true;
                waitUntil {scriptDone _handle};
                life_action_gathering = false;
            };
        };
    };
};

if (_curObject isKindOf "CAManBase") exitWith {
    if (player distance _curObject < 5) then {
        if (isPlayer _curObject && alive _curObject) then {
            [_curObject, "Person", (_curObject getVariable ["realname", ""])] call life_fnc_interactionMenu;
        } else {
            if !(alive _curObject) then {
                [_curObject, "DeadBody", (_curObject getVariable ["name", ""])] call life_fnc_interactionMenu;
            };
        };
    };
};

if ((_curObject isKindOf "B_supplyCrate_F" || _curObject isKindOf "Box_IND_Grenades_F") && {player distance _curObject < 3} ) exitWith {
    if (alive _curObject) then {
        [_curObject, "Container", "Container"] call life_fnc_interactionMenu;
    };
};

if (_curObject isKindOf "House_F" && {player distance _curObject < 12} || ((nearestObject [[16019.5,16952.9,0],"Land_Dome_Big_F"]) isEqualTo _curObject || (nearestObject [[16019.5,16952.9,0],"Land_Research_house_V1_F"]) isEqualTo _curObject)) exitWith {
    [_curObject, "House", "House"] call life_fnc_interactionMenu;
};

if (_curObject isKindOf "landVehicle" || _curObject isKindOf "Ship" || _curObject isKindOf "Air") exitWith {
    if (player distance _curObject < ((boundingBox _curObject select 2) + 2) && (!(player getVariable ["restrained",false])) && (!(player getVariable ["playerSurrender",false])) && !life_isDowned) then {
        [_curObject, "Vehicle", getText (configFile >> "CfgVehicles" >> typeOf _curObject >> "displayName")] call life_fnc_interactionMenu;
    };
};

if ((typeOf _curObject) in life_itemModels) exitWith {
    [_curObject,player,false] remoteExecCall ["TON_fnc_pickupAction",RSERV];
};

if ((typeOf _curObject) isEqualTo "Land_Money_F" && {!(_curObject getVariable ["inUse",false])}) exitWith {
    [_curObject,player,true] remoteExecCall ["TON_fnc_pickupAction",RSERV];
};
