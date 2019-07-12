//File: fn_bankStopReward.sqf

params [
	["_cop", objNull, [objNull]]
];

if (isNull _cop) exitWith {};
if !((side _cop) isEqualTo west) exitWith {};

_rank = switch ((_cop getVariable "rank")) do {
	case 1: {"Cadet"};
	case 2: {"Constable"};
	case 3: {"Corporal"};
	case 4: {"Sergeant"};
	case 5: {"Lieutenant"};
	case 6: {"Captain"};
	default {""};
};

_name = _cop getVariable ["realname", ""];

hint parseText format ["<t align='center' color='#00FF00'size='1.5'>Drill Stopped!</t><br/>Police %1 %2 has stopped the drill! For preventing the bank robbery, all officers have received a bonus of <t color='#00FF00'>$25,000</t> and <t color='#4040FF'>150 XP</t>", _rank, _name];

life_atmbank = life_atmbank + 25000;
[6] call life_fnc_updatePartial;
