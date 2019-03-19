/*
    Author: Daniel Stuart & Erik

    File: hud_stats.hpp
*/

class playerHUD {
    idd = -1;
    duration = 10e10;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    name = "playerHUD";
    onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
    objects[] = {};
    controls[] = {
        Life_RscProgress_HUDFood,
        Life_RscProgress_HUDHealth,
        Life_RscProgress_HUDWater,
        Life_RscStructuredText_HUDFood,
        Life_RscStructuredText_HUDHealth,
        Life_RscStructuredText_HUDWater
    };

    /* Progress Bars */
    class LIFE_RscProgress_HUDCommon: Life_RscProgress {
        colorFrame[] = {0, 0, 0, 1};
        x = 1.45;
        w = 0.25;
        h = 0.04;
    };

    class Life_RscProgress_HUDHealth: LIFE_RscProgress_HUDCommon {
        idc = 2200;
        colorBar[] = {1,1,1,0.7};
        y = 1;
    };

    class Life_RscProgress_HUDFood: LIFE_RscProgress_HUDCommon {
        idc = 2201;
        colorBar[] = {0.85,0.52,0.25,0.7};
        y = 1.05;
    };

    class Life_RscProgress_HUDWater: LIFE_RscProgress_HUDCommon {
        idc = 2202;
        colorBar[] = {0,0.25,0.65,0.7};
        y = 1.1;
    };

    /* Texts */
    class Life_RscStructuredText_HUDCommon: Life_RscStructuredText {
        //SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        //style = ST_CENTER;
        x = 1.45;
        w = 0.25;
        h = 0.04;
    };

    class Life_RscStructuredText_HUDHealth: Life_RscStructuredText_HUDCommon {
        idc = 1200;
        y = 1;
    };

    class Life_RscStructuredText_HUDFood: Life_RscStructuredText_HUDCommon {
        idc = 1201;
        y = 1.05;
    };

    class Life_RscStructuredText_HUDWater: Life_RscStructuredText_HUDCommon {
        idc = 1202;
        y = 1.1;
    };
};
