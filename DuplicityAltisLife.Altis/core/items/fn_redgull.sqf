/*
    File : fn_redgull.sqf
    Author: Erik
*/
if ((life_thirst + 10) > 100) then {
	life_thirst = 100;
} else {
	life_thirst = life_thirst + 10;
};

life_redgull_effect = time;
titleText["You can now run faster for three minutes.","PLAIN"];
player enableFatigue false;
player setAnimSpeedCoef 1.1;

[] spawn {
	waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};
	player enableFatigue true;
	player setAnimSpeedCoef 1;
};
