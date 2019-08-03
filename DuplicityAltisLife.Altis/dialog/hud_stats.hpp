/*
    Author: Daniel Stuart & Erik

    File: hud_stats.hpp
*/

class LIFE_RscProgress_HUDCommon: Life_RscProgress {
    colorFrame[] = {0, 0, 0, 1};
    x = 1.45;
    w = 0.25;
    h = 0.04;
};

class Life_RscStructuredText_HUDCommon: Life_RscStructuredText {
    x = 1.45;
    w = 0.25;
    h = 0.04;
};

class playerHUD {
    idd = -1;
    duration = 10e10;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    name = "playerHUD";
    onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
    objects[] = {};

    class controls {
        /* Progress Bars */
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

        class Life_RscProgress_HUDWanted: LIFE_RscProgress_HUDCommon {
            idc = 2203;
            colorBar[] = {1,0.84,0,0.7};
            y = 1.15;
        };

        /* Texts */
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

        class Life_RscStructuredText_HUDWanted: Life_RscStructuredText_HUDCommon {
            idc = 1203;
            y = 1.15;
        };

        /* Sync Notification */
        class Life_RscPicture_SaveBackground: Life_RscPicture {
            idc = 1300;
            text = "#(argb,8,8,3)color(0.1,0.1,0.1,0.6)";
            x = (-0.7125 - 0.25);
            y = 0;
            w = 0.25;
            h = 0.08;
        };

        class Life_RscPicture_DBIcon: Life_RscPicture {
            idc = 1301;
            text = "icons\ico_saveNOTF.paa";
            x = (-0.5125 - 0.25);
            y = 0;
            w = 0.05;
            h = 0.08;
        };

        class Life_RscStructuredText_SaveText: Life_RscStructuredText {
            idc = 1302;
            text = "Player info synced to database.";
            x = (-0.7125 - 0.25);
            y = 0;
            w = 0.2;
            h = 0.08;
        };

        /* Bank Timer */
        class Life_RscStructuredText_BankTime: Life_RscStructuredText {
            idc = 500;
            text = "";
            color[] = {"profileNamespace getVariable ['IGUI_TEXT_RGB_R', 1]", "profileNamespace getVariable ['IGUI_TEXT_RGB_G', 1]", "profileNamespace getVariable ['IGUI_TEXT_RGB_B', 1]", "profileNamespace getVariable ['IGUI_TEXT_RGB_A', 1]"};
            x = 1.025;
            y = -0.405;
            w = 0.3;
            h = 0.08;
        };
    };
};
