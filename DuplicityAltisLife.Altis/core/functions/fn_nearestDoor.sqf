/*
    File: fn_nearestDoor.sqf
    Author: Erik

    Description:
    Fetches the nearest door of the building the player is looking
    at.
*/

//Vars
params [
    ["_house", objNull, [objNull]]
];
private ["_door", "_doorCount", "_bestIndex", "_bestDistance"];

//Error Handling
if (isNull _house) exitWith {0};
if (!(_house isKindOf "House_F")) exitWith {0};

//Logic
_door = 0;
_doorCount = getNumber(configFile >> "CfgVehicles" >> (typeOf _house) >> "numberOfDoors");
_bestIndex = 0;
_bestDistance = 3;

for "_i" from 1 to _doorCount do {
    _modelPos = _house selectionPosition format ["Door_%1_trigger", _i];
    _worldPos = _house modelToWorld _modelPos;
    _distance = player distance _worldPos;
    if (_distance < _bestDistance) then {
        _bestDistance = _distance;
        _bestIndex = _i;
    };
};

_bestIndex;
