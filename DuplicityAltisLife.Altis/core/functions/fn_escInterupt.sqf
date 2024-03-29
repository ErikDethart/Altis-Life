#include "..\..\script_macros.hpp"

/*
    File: fn_escInterupt.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Monitors when the ESC menu is pulled up and blocks off
    certain controls when conditions meet.
*/
disableSerialization;

private _escTimer = {
    disableSerialization;
    private _abortButton = ((findDisplay 49) displayCtrl 104);
    private _suicideButton = ((findDisplay 49) displayCtrl 1010);
    private _timeStamp = time + 15;

    waitUntil {
        _abortButton ctrlSetText format ["Quit (%1)",[(_timeStamp - time),"SS.MS"] call BIS_fnc_secondsToString];
        if !(life_is_arrested) then {
            _suicideButton ctrlSetText format ["Suicide (%1)",[(_timeStamp - time),"SS.MS"] call BIS_fnc_secondsToString];
        };
        if (dialog && {isNull (findDisplay 7300)}) then {closeDialog 0;};

        (round(_timeStamp - time) <= 0 || {isNull (findDisplay 49)})
    };

    _abortButton ctrlSetText "Quit";
    _abortButton ctrlEnable true;
    if !(life_is_arrested) then {
        _suicideButton ctrlSetText "Suicide";
        _suicideButton ctrlEnable true;
    };
};

private _canUseControls = {
    (!(player getVariable ["restrained", false]) && {!(player getVariable ["playerSurrender", false])} && {!life_isDowned})
};

for "_i" from 0 to 1 step 0 do {
    waitUntil {!isNull (findDisplay 49)};
    private _abortButton = CONTROL(49,104);
    _abortButton buttonSetAction "call SOCK_fnc_updateRequest; [player] remoteExec [""TON_fnc_cleanupRequest"",2];";
    private _respawnButton = CONTROL(49,1010);
    private _fieldManual = CONTROL(49,122);
    private _saveButton = CONTROL(49,103);
    _saveButton ctrlSetText "";

    private _topButton = CONTROL(49,2);
    _topButton ctrlEnable false;
    _topButton ctrlSetText "\WEBSITE PLACEHOLDER\";
    _saveButton ctrlEnable false;
    _saveButton ctrlSetText format ["Player ID: %1",getPlayerUID player];

    //Block off our buttons first.
    _abortButton ctrlEnable false;
    _respawnButton ctrlEnable false;
    _respawnButton ctrlSetText "Cannot Suicide";
    _fieldManual ctrlEnable false; //Never re-enable, blocks an old script executor.
    _fieldManual ctrlShow false;

    if (call _canUseControls) then {
        [] spawn _escTimer;
    } else {
        _abortButton ctrlSetText "Cannot Quit";
    };

    waitUntil {isNull (findDisplay 49) || {!alive player}};
    if (!isNull (findDisplay 49) && {!alive player}) then {
        (findDisplay 49) closeDisplay 2;
    };
};
