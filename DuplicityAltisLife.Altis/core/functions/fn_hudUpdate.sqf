#include "..\..\script_macros.hpp"
/*
    File: fn_hudUpdate.sqf
    Author: Daniel Stuart

    Description:
    Updates the HUD when it needs to.
*/
disableSerialization;

if (isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
LIFEctrl(2200) progressSetPosition (1 - (damage player));
LIFEctrl(2201) progressSetPosition (life_hunger / 100);
LIFEctrl(2202) progressSetPosition (life_thirst / 100);

LIFEctrl(2200) ctrlSetTextColor [(damage player), (1 - (damage player)), 0, 0.7];

LIFEctrl(1200) ctrlSetStructuredText parseText format ["<t align='left'></t>%1<img image='icons\ico_health.paa' align='right'/>", floor(100 * (1 - (damage player)))];
LIFEctrl(1201) ctrlSetStructuredText parseText format ["<t align='left'></t>%1<img image='icons\ico_food.paa' align='right'/>", life_hunger];
LIFEctrl(1202) ctrlSetStructuredText parseText format ["<t align='left'></t>%1<img image='icons\ico_water.paa' align='right'/>", life_thirst];

if !(life_is_alive) then {
    LIFEctrl(1200) ctrlSetStructuredText parseText "<t align='left'></t>DEAD<img image='icons\ico_health.paa' align='right'/>";
    LIFEctrl(2200) ctrlSetTextColor [1, 0, 0, 0.7];
    LIFEctrl(2200) progressSetPosition (1);
};

if (life_wanted > 0) then {
    LIFEctrl(1203) ctrlShow true;
    LIFEctrl(2203) ctrlShow true;
    LIFEctrl(1203) ctrlSetStructuredText parseText format ["<t align='left'></t>$%1<img image='icons\ico_cop.paa' align='right'/>", life_wanted];
    LIFEctrl(2203) progressSetPosition (1);
} else {
    LIFEctrl(1203) ctrlShow false;
    LIFEctrl(2203) ctrlShow false;
};
