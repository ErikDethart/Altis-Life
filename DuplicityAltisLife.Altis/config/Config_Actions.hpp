class Actions {
	class Person {
		class restrain {
			text = "Restrain";
			condition = "(playerSide isEqualTo west && {!isNull life_pInact_curTarget} && {life_pInact_curTarget isKindOf 'CAManBase'} && {(isPlayer life_pInact_curTarget)} && {(side life_pInact_curTarget in [civilian,independent])} && {alive life_pInact_curTarget} && {life_pInact_curTarget distance player < 3.5} && {!(life_pInact_curTarget getVariable 'Escorting')} && {!(life_pInact_curTarget getVariable 'restrained')} && {speed life_pInact_curTarget < 1})";
			action = "[] call life_fnc_restrainAction;";
		};
	};

	class Vehicle {
		class repair {
			text = "Repair Vehicle";
			condition = "true";
			action = "systemChat 'repair!';";
		};
	};
};
