/*
*    Format:
*        level: STRING
*            0: FETCH_CONST(var) >= 1
*            You can call any variable and check if its above a certain level
*           e.g
*			 FETCH_CONST(life_donatorlvl) >= 1
*			 call life_coplevel >= 3
*			 FETCH_CONST(life_mediclevel) >= 1
*
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Jimbo's Guns";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Pistol_Signal_F", "", 0, 0, "" },//Starter Pistol
            { "hgun_Pistol_01_F", 0, 0, "" },//PM 9 mm
            { "hgun_Rook40_F", "", 0, 0, "" },//Rook-40 9 mm
            { "hgun_ACPC2_F", "", 0, 0, "" },//ACP-C2 .45 ACP
            { "SMG_01_F", "", 0, 0, "" },//Vermin SMG .45 ACP
            { "hgun_PDW2000_F", "", 0, 0, "" },//PDW2000 9 mm
            { "SMG_02_F", "", 0, 0, "" },//Sting 9 mm
            { "SMG_05_F", "", 0, 0, "" },//Protector 9 mm
            { "arifle_Mk20_F", "", 0, 0 },//Mk20 5.56 mm (Camo)
            { "arifle_Mk20C_F", "", 0, 0, "" },//Mk20C 5.56 mm (Camo)
            { "arifle_TRG20_F", "", 0, 0, "" },//TRG-20 5.56 mm
            { "arifle_TRG21_F", "", 0, 0, "" }//TRG-21 5.56 mm
        };
        mags[] = {
            { "10Rnd_9x21_Mag", "", 0, 0, "" },//
            { "16Rnd_9x21_Mag", "", 0, 0, "" },//
            { "30Rnd_9x21_Mag", "", 0, 0, "" },//
            { "9Rnd_45ACP_Mag", "", 0, 0, "" },//
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, 0, "" },//
            { "30Rnd_556x45_Stanag", "", 0, 0, "" },//
            { "6Rnd_GreenSignal_F", "", 0, 0, "" },//
            { "6Rnd_RedSignal_F", "", 0, 0, "" }//
        };
        accs[] = {
            { "optic_Aco", "", 0, 0, "" },//ACO (Red)
            { "optic_ACO_grn", "", 0, 0, "" },//ACO (Green)
            { "optic_Holosight", "", 0, 0, "" },//Mk17 Holosight
            { "acc_flashlight", 0 , 0, "" }//Flashlight
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "Binocular", "", 150, -1, "" },//
            { "ItemGPS", "", 100, 45, "" },//
            { "ItemMap", "", 50, 35, "" },//
            { "ItemCompass", "", 50, 25, "" },//
            { "ItemWatch", "", 50, -1, "" },//
            { "NVGoggles", "", 2000, 980, "" },//
            { "hgun_Pistol_01_F", 0, 0, "" },//PM 9 mm
            { "hgun_Rook40_F", "", 0, 0, "" },//Rook-40 9 mm
            { "hgun_ACPC2_F", "", 0, 0, "" },//ACP-C2 .45 ACP
            { "hgun_Pistol_heavy_01_F", "", 0, 0, "" },//4-five .45 ACP
            { "hgun_Pistol_heavy_02_F", "", 0, 0, "" },//Zubr .45 ACP
            { "SMG_01_F", "", 0, 0, "" },//Vermin SMG .45 ACP
            { "hgun_PDW2000_F", "", 0, 0, "" },//PDW2000 9 mm
            { "SMG_02_F", "", 0, 0, "" },//Sting 9 mm
            { "SMG_05_F", "", 0, 0, "" },//Protector 9 mm
            { "arifle_Mk20_F", "", 0, 0, "" },//Mk20 5.56 mm (Camo)
            { "arifle_Mk20C_F", "", 0, 0, "" },//Mk20C 5.56 mm (Camo)
            { "arifle_Mk20_plain_F", "", 0, 0, "" },//Mk20 5.56 mm
            { "arifle_Mk20C_plain_F", "", 0, 0, "" },//Mk20C 5.56 mm
            { "arifle_TRG20_F", "", 0, 0, "" },//TRG-20 5.56 mm
            { "arifle_TRG21_F", "", 0, 0, "" },//TRG-21 5.56 mm
            { "arifle_AKS_F", "", 0, 0, "" },//AKS-74U 5.45 mm
            { "arifle_SDAR_F", "", 0, 0, "" },//SDAR 5.56 mm
            { "arifle_SPAR_01_khk_F", "", 0, 0, "" },//SPAR-16 5.56 mm (Khaki)
            { "arifle_SPAR_01_snd_F", "", 0, 0, "" },//SPAR-16 5.56 mm (Sand)
            { "LMG_03_F", "", 0, 0, "" },//LIM-85 5.56 mm
            //{ "arifle_CTAR_blk_F", "", 0, 0, "" },//CAR-95 5.8 mm (Black)
            { "arifle_CTAR_hex_F", "", 0, 0, "" },//CAR-95 5.8 mm (Hex)
            { "arifle_CTAR_ghex_F", "", 0, 0, "" },//CAR-95 5.8 mm (Green Hex)
            /*{ "arifle_CTARS_blk_F", "", 0, 0, "" },//CAR-95-1 5.8mm (Black)*/
            /*{ "arifle_CTARS_hex_F", "", 0, 0, "" },//CAR-95-1 5.8mm (Hex)*/
            /*{ "arifle_CTARS_ghex_F", "", 0, 0, "" },//CAR-95-1 5.8mm (Green Hex)*/
            { "arifle_Katiba_F", "", 0, 0, "" },//Katiba 6.5 mm
            { "arifle_Katiba_C_F", "", 0, 0, "" },//Katiba Carbine 6.5 mm
            //{ "srifle_DMR_07_blk_F", "", 0, 0, "" },//CMR-76 6.5 mm (Black)
            { "srifle_DMR_07_hex_F", "", 0, 0, "" },//CMR-76 6.5 mm (Hex)
            { "srifle_DMR_07_ghex_F", "", 0, 0, "" },//CMR-76 6.5 mm (Green Hex)
            { "LMG_Mk200_F", "", 0, 0, "" },//Mk200 6.5 mm
            //{ "arifle_ARX_blk_F", "", 0, 0, "" },//Type 115 6.5 mm (Black)
            { "arifle_ARX_ghex_F", "", 0, 0, "" },//Type 115 6.5 mm (Green Hex)
            { "arifle_ARX_hex_F", "", 0, 0, "" },//Type 115 6.5 mm (Hex)
            { "srifle_DMR_01_F", "", 0, 0, "" },//Rahim 7.62 mm
            { "arifle_SPAR_03_khk_F", "", 0, 0, "" },//SPAR-17 7.62 mm (Khaki)
            { "arifle_SPAR_03_snd_F", "", 0, 0, "" },//SPAR-17 7.62 mm (Sand)
            { "arifle_AKM_F", "", 0, 0, "" },//AKM 7.62 mm
            { "arifle_AK12_F", "", 0, 0, "" },//AK-12 7.62 mm
            { "srifle_EBR_F", "", 0, 0, "" },//Mk18 ABR 7.62 mm
            { "srifle_DMR_03_khaki_F", "", 0, 0, "" },//Mk-I EMR 7.62 mm (Khaki)
            { "srifle_DMR_03_tan_F", "", 0, 0, "" },//Mk-I EMR 7.62 mm (Sand)
            { "srifle_DMR_03_multicam_F", "", 0, 0, "" },//Mk-I EMR 7.62 mm (Camo)
            { "srifle_DMR_03_woodland_F", "", 0, 0, "" },//Mk-I EMR 7.62 mm (Woodland)
            { "launch_RPG7_F", "", 0, 0, "" }//RPG-7
        };
        mags[] = {
            { "10Rnd_9x21_Mag", "", 0, 0, "" },//
            { "16Rnd_9x21_Mag", "", 0, 0, "" },//
            { "30Rnd_9x21_Mag", "", 0, 0, "" },//
            { "9Rnd_45ACP_Mag", "", 0, 0, "" },//
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, 0, "" },//
            { "30Rnd_556x45_Stanag", "", 0, 0, "" },//
            { "11Rnd_45ACP_Mag", "", 0, 0, "" },//
            { "6Rnd_45ACP_Cylinder", "", 0, 0, "" },//
            { "30Rnd_545x39_Mag_F", "", 0, 0, "" },//
            { "20Rnd_556x45_UW_mag", "", 0, 0, "" },//
            { "30Rnd_556x45_Stanag_red", "", 0, 0, "" },//
            { "200Rnd_556x45_Box_Red_F", "", 0, 0, "" },//
            { "30Rnd_580x42_Mag_F", "", 0, 0, "" },//
            /*{ "100Rnd_580x42_Mag_F", "", 0, 0, "" },//*/
            { "30Rnd_65x39_caseless_green", "", 0, 0, "" },//
            { "20Rnd_650x39_Cased_Mag_F", "", 0, 0, "" },//
            { "200Rnd_65x39_cased_Box", "", 0, 0, "" },//
            { "10Rnd_50BW_Mag_F", "", 0, 0, "" },//.50 Cal, make expensive!
            { "10Rnd_762x54_Mag", "", 0, 0, "" },//
            { "20Rnd_762x51_Mag", "", 0, 0, "" },//
            { "30Rnd_762x39_Mag_F", "", 0, 0, "" },//
            { "RPG7_F", "", 0, 0, "" }//
        };
        accs[] = {
             { "optic_Arco", "", 0, 0, "" }//ARCO
            ,{ "optic_Hamr", "", 0, 0, "" }//RCO
            ,{ "optic_MRCO", "", 0, 0, "" }//MRCO
            ,{ "optic_Yorris", "", 0, 0, "" }//Yorris J2
            ,{ "optic_MRD", "", 0, 0, "" }//MRD
            ,{ "optic_Aco", "", 0, 0, "" , ""}//ACO (Red)
            ,{ "optic_ACO_grn", "", 0, 0, "" }//ACO (Green)
            ,{ "optic_Holosight", "", 0, 0, "" }//Mk17 Holosight
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" }//
            ,{ "ItemGPS", "", 100, 45, "" }//
            ,{ "ItemMap", "", 50, 35, "" }//
            ,{ "ItemCompass", "", 50, 25, "" }//
            ,{ "ItemWatch", "", 50, -1, "" }//
            ,{ "NVGoggles", "", 2000, 980, "" }//
            ,{ "Chemlight_red", "", 300, -1, "" }//
            ,{ "Chemlight_yellow", "", 300, 50, "" }//
            ,{ "Chemlight_green", "", 300, 50, "" }//
            ,{ "Chemlight_blue", "", 300, 50, "" }//
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" }//
            ,{ "ItemGPS", "", 500, 45, "" }//
            ,{ "ItemMap", "", 250, 35, "" }//
            ,{ "ItemCompass", "", 250, 25, "" }//
            ,{ "ItemWatch", "", 250, -1, "" }//
            ,{ "NVGoggles", "", 10000, 980, "" }//
            ,{ "Chemlight_red", "", 1500, -1, "" }//
            ,{ "Chemlight_yellow", "", 1500, 50, "" }//
            ,{ "Chemlight_green", "", 1500, 50, "" }//
            ,{ "Chemlight_blue", "", 1500, 50, "" }//
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "APD Armory";
        side = "cop";
        conditions = "";
        items[] = {
            { "NVGoggles_OPFOR", "", 100, "" }//NV Goggles (Black)
    	    ,{ "ItemGPS", "", 50, "" }//GPS
    	    ,{ "ItemWatch", "", 20, "" }//Watch
    	    ,{ "ItemCompass", "", 20, "" }//Compass
    	    ,{ "ItemRadio", "", 50, "" }//Radio
    	    ,{ "ItemMap", "", 10, ""}//Map
    	    ,{ "Binocular", "", 100, "" }//Binoculars
    	    ,{ "B_UavTerminal", "", 300, "call life_coplevel >= 5"}//UAV Terminal [NATO]
    	    ,{ "Chemlight_blue", "", 50, "" }//Chemlight (Blue)
    	    ,{ "Chemlight_red", "", 50, "" }//Chemlight (Red)
            ,{ "hgun_P07_F", "", 400, "" }//P07 9 mm
            ,{ "hgun_Pistol_heavy_01_F", "", 500, "call life_coplevel >= 4" }//4-five .45 ACP
            ,{ "SMG_02_F", "", 1000, "" }//Sting 9mm
            ,{ "SMG_05_F", "", 1000, "" }//Protector 9 mm
            ,{ "SMG_01_F", "", 1000, "" }//Vermin SMG .45 ACP
            ,{ "arifle_SPAR_01_blk_F", "", 1500, "call life_coplevel >= 2" }//SPAR-16 5.56 mm (Black)
            ,{ "arifle_MXC_Black_F", "", 2250, "call life_coplevel >= 3" }//MXC 6.5 mm (Black)
            ,{ "arifle_MX_Black_F", "", 2250, "call life_coplevel >= 3" }//MX 6.5 mm (Black)
            ,{ "arifle_MXM_Black_F", "", 2250, "call life_coplevel >= 3" }//MXM 6.5 mm (Black)
            ,{ "arifle_SPAR_03_blk_F", "", 2500, "call life_coplevel >= 4" }//SPAR-17 7.62 mm (Black)
            ,{ "srifle_DMR_03_F", "", 3000, "call life_coplevel >= 4" }//Mk-1 EMR 7.62 mm (Black)
        };
        mags[] = {
            { "30Rnd_9x21_Green_Mag", "9 mm 30Rnd Rubber Mag", 0, "" }//
            ,{ "30Rnd_9x21_Red_Mag", "9 mm 30Rnd Lethal Mag", 0, "call life_coplevel >= 2" }//
            ,{ "11Rnd_45ACP_Mag", "", 0, "call life_coplevel >= 4" }//
            ,{ "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "9 mm 30Rnd Rubber Mag (SMG)", 0, "" }//
            ,{ "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "9 mm 30Rnd Lethal Mag (SMG)", 0, "call life_coplevel >= 2" }//
            ,{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 ACP 30Rnd Vermin Rubber Mag", 0, "" }//
            ,{ "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", ".45 ACP 30Rnd Vermin Lethal Mag", 0, "call life_coplevel >= 2" }//
            ,{ "30Rnd_556x45_Stanag_green", "5.56 mm 30Rnd STANAG Rubber Mag", 0, "call life_coplevel >= 2" }//
            ,{ "30Rnd_556x45_Stanag_red", "5.56 mm 30Rnd STANAG Lethal Mag", 0, "call life_coplevel >= 2" }//
            ,{ "30Rnd_65x39_caseless_mag", "6.5 mm 30Rnd STANAG Rubber Mag", 0, "call life_coplevel >= 3" }//
            ,{ "30Rnd_65x39_caseless_mag_Tracer", "6.5 mm 30Rnd STANAG Lethal Mag", 0, "call life_coplevel >= 3" }//
            ,{ "20Rnd_762x51_Mag", "", 0, "call life_coplevel >= 4" }//
        };
        accs[] = {
            { "muzzle_snds_L", "", 200, "call life_coplevel >= 3" }//Sound Suppressor (9 mm)
            ,{ "optic_Aco", "", 300, "" }//ACO (Red)
            ,{ "optic_ACO_grn", "", 300, "" }//ACO (Green)
            ,{ "optic_Holosight_blk_F", "", 300, "" }//Mk17 Holosight (Black)
            ,{ "optic_Hamr", "", 300, "" }//RCO
            ,{ "optic_Arco_blk_F", "", 300, "" }//ARCO (Black)
            ,{ "optic_MRCO", "", 300, "" }//MRCO
            ,{ "optic_ERCO_blk_F", "", 300, "" }//ERCO (Black)
            ,{ "optic_MRD", "", 300, "call life_coplevel >= 4" }//MRD
            ,{ "acc_flashlight", "", 300, "" }//Flashlight
            ,{ "acc_pointer_IR", "", 300, "" }//IR Laser Pointer
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
             { "ItemGPS", "", 100, 45, "" }//
            ,{ "Binocular", "", 150, -1, "" }//
            ,{ "FirstAidKit", "", 150, 65, "" }//
            ,{ "NVGoggles", "", 1200, 980, "" }//
        };
        mags[] = {};
        accs[] = {};
    };
};