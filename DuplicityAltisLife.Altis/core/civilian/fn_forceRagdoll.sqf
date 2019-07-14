/*
    File: fn_forceRagdoll.sqf
    Author: Repentz

    Description:
    ragdoll
*/

if (!isNull objectParent player) exitWith {};

private _obj = "Land_Can_V3_F" createVehicleLocal [0,0,0];

_obj setMass 1e10;
_obj attachTo [player, [0,0,0], "Spine3"];
_obj setVelocity [0,0,6];

detach _obj;

[_obj] spawn {
	deleteVehicle _this;
};
