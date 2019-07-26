class WeaponShops {
    //Civilian Gun Store
    class gun {
        name = "Jimbo's Guns";
        side = "CIV";
        conditions = "license_civ_gun";
        class items {
            class hgun_Rook40_F { //Rook
                displayName = "";
                price = 1500;
                condition = "true";
                mags[] = {
                    {"30Rnd_9x21_Mag", "", 100, "true"},
                    {"16Rnd_9x21_Mag", "", 50, "true"}
                };
            };

            class hgun_Pistol_01_F { //PM9
                displayName = "PM 9 mm (Apex DLC)";
                price = 1000;
                condition = "true";
                mags[] = {
                    {"10Rnd_9x21_Mag", "", 25, "true"}
                };
            };

            class hgun_ACPC2_F { //ACPC2
                displayName = "";
                price = 2000;
                condition = "true";
                mags[] = {
                    {"9Rnd_45ACP_Mag", "", 100, "true"}
                };
            };

            class hgun_PDW2000_F { //PDW
                displayName = "";
                price = 4000;
                condition = "true";
                mags[] = {
                    {"30Rnd_9x21_Mag", "", 100, "true"}
                };
            };

            class SMG_05_F { //Protector
                displayName = "Protector 9 mm (Apex DLC)";
                price = 4500;
                condition = "true";
                mags[] = {
                    {"30Rnd_9x21_Mag_SMG_02", "", 150, "true"}
                };
            };

            class SMG_01_F { //Vermin
                displayName = "";
                price = 4500;
                condition = "true";
                mags[] = {
                    {"30Rnd_45ACP_Mag_SMG_01", "", 200, "true"}
                };
            };

            class arifle_SDAR_F { //SDAR
                displayName = "SDAR 5.56 mm (Illegal)";
                price = 5000;
                condition = "true";
                mags[] = {
                    {"20Rnd_556x45_UW_mag", "5.56 mm 20Rnd Underwater Mag", 200, "true"},
                    {"30Rnd_556x45_Stanag_Tracer_Red", "", 200, "true"}
                };
            };

            class hgun_Pistol_Signal_F { //Flaregun
                displayName = "Starter Pistol (Karts DLC)";
                price = 500;
                condition = "true";
                mags[] = {
                    {"6Rnd_GreenSignal_F", "", 25, "true"},
                    {"6Rnd_RedSignal_F", "", 25, "true"}
                };
            };
        };
        accs[] = {
            { "optic_Aco", "", 250, "true" },//ACO (Red)
            { "optic_ACO_grn", "", 250, "true" },//ACO (Green)
            { "optic_Holosight", "", 250, "true" },//Mk17 Holosight
            { "acc_flashlight", "", 100, "true" }//Flashlight
        };
    };

    //Police Shop
    class cop_basic {
        name = "APD Armory";
        side = "WEST";
        conditions = "true";
        class items {
            class hgun_P07_F { //P07
                displayName = "";
                price = 250;
                condition = "true";
                mags[] = {
                    { "30Rnd_9x21_Green_Mag", "9 mm 30Rnd Rubber Mag", 50, "true" },
                    { "30Rnd_9x21_Red_Mag", "9 mm 30Rnd Lethal Mag", 50, "true" }
                };
            };

            class hgun_Pistol_heavy_01_F { //4five
                displayName = "";
                price = 500;
                condition = "true";
                mags[] = {
                    { "11Rnd_45ACP_Mag", "", 75, "true" }
                };
            };

            class SMG_02_F { //Sting
                displayName = "";
                price = 1000;
                condition = "true";
                mags[] = {
                    { "30Rnd_9x21_Green_Mag", "9 mm 30Rnd Rubber Mag", 50, "true" },
                    { "30Rnd_9x21_Red_Mag", "9 mm 30Rnd Lethal Mag", 50, "true" }
                };
            };

            class SMG_05_F { //Protector
                displayName = "Protector 9 mm (Apex DLC)";
                price = 1000;
                condition = "true";
                mags[] = {
                    { "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "9 mm 30Rnd Rubber Mag (SMG)", 50, "true" },
                    { "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "9 mm 30Rnd Lethal Mag (SMG)", 50, "true" }
                };
            };

            class SMG_01_F { //Vermin
                displayName = "";
                price = 1000;
                condition = "true";
                mags[] = {
                    { "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", ".45 ACP 30Rnd Vermin Rubber Mag", 50, "true" },
                    { "30Rnd_45ACP_Mag_SMG_01_Tracer_Red", ".45 ACP 30Rnd Vermin Lethal Mag", 50, "true" }
                };
            };

            class arifle_SPAR_01_blk_F { //Spar16
                displayName = "SPAR-16 5.56 mm (Apex DLC)";
                price = 1500;
                condition = "true";
                mags[] = {
                    { "30Rnd_556x45_Stanag_Tracer_Green", "5.56 mm 30Rnd Rubber Mag", 100, "true" },
                    { "30Rnd_556x45_Stanag_Tracer_Red", "5.56 mm 30Rnd Lethal Mag", 100, "true" }
                };
            };

            class arifle_SDAR_F { //SDAR
                displayName = "";
                price = 1250;
                condition = "true";
                mags[] = {
                    {"30Rnd_556x45_Stanag_Tracer_Green", "5.56 mm 30Rnd Rubber Mag", 100, "true"},
                    {"20Rnd_556x45_UW_mag", "5.56 mm 20Rnd Underwater Mag", 100, "true"}
                };
            };

            class arifle_MXC_Black_F { //MXC
                displayName = "";
                price = 2000;
                condition = "true";
                mags[] = {
                    { "30Rnd_65x39_caseless_mag_Tracer", "6.5 mm 30Rnd Rubber Mag", 125, "true" },
                    { "30Rnd_65x39_caseless_mag", "6.5 mm 30Rnd Lethal Mag", 125, "true" }
                };
            };

            class arifle_MX_Black_F { //MX
                displayName = "";
                price = 2500;
                condition = "true";
                mags[] = {
                    { "30Rnd_65x39_caseless_mag_Tracer", "6.5 mm 30Rnd Rubber Mag", 125, "true" },
                    { "30Rnd_65x39_caseless_mag", "6.5 mm 30Rnd Lethal Mag", 125, "true" }
                };
            };

            class arifle_MXM_Black_F { //MXM
                displayName = "";
                price = 3000;
                condition = "true";
                mags[] = {
                    { "30Rnd_65x39_caseless_mag_Tracer", "6.5 mm 30Rnd Rubber Mag", 125, "true" },
                    { "30Rnd_65x39_caseless_mag", "6.5 mm 30Rnd Lethal Mag", 125, "true" }
                };
            };

            class arifle_ARX_blk_F { //Type 115
                displayName = "";
                price = 4000;
                condition = "true";
                mags[] = {
                    { "30Rnd_65x39_caseless_green_mag_Tracer", "6.5 mm 30Rnd Rubber Mag", 125, "true" },
                    { "30Rnd_65x39_caseless_green", "6.5 mm 30Rnd Lethal Mag", 125, "true" }
                };
            };

            class arifle_SPAR_03_blk_F { //Spar 17
                displayName = "SPAR-17 7.62 mm (Apex DLC)";
                price = 3500;
                condition = "true";
                mags[] = {
                    { "20Rnd_762x51_Mag", "", 150, "true" }
                };
            };

            class srifle_DMR_03_F { //Mk 1
                displayName = "Mk-I EMR 7.62 mm (Marksman DLC)";
                price = 4000;
                condition = "true";
                mags[] = {
                    { "20Rnd_762x51_Mag", "", 150, "true" }
                };
            };

            class arifle_MX_GL_Black_F { //MX GL
                displayName = "";
                price = 4000;
                condition = "true";
                mags[] = {
                    { "30Rnd_556x45_Stanag_Tracer_Green", "6.5 mm 30Rnd Rubber Mag", 100, "true" },
                    { "1Rnd_SmokeBlue_Grenade_shell", "", 150, "true" }
                };
            };

            class arifle_SPAR_01_GL_blk_F { //Spar 16 gl
                displayName = "SPAR-16 GL 5.56 mm (Apex DLC)";
                price = 4000;
                condition = "true";
                mags[] = {
                    { "30Rnd_556x45_Stanag_Tracer_Green", "5.56 mm 30Rnd Rubber Mag", 100, "true" },
                    { "1Rnd_SmokeBlue_Grenade_shell", "", 150, "true" }
                };
            };

            class arifle_MX_SW_Black_F { //MX SW
                displayName = "";
                price = 4000;
                condition = "true";
                mags[] = {
                    { "100Rnd_65x39_caseless_mag_Tracer", "6.5 mm 100Rnd Rubber Mag", 1000, "true" },
                    { "100Rnd_65x39_caseless_mag", "6.5 mm 100Rnd Lethal Mag", 1000, "true" }
                };
            };

            class arifle_SPAR_02_blk_F { //SPAR-16S
                displayName = "SPAR-16S 5.56 mm (Apex DLC)";
                price = 4000;
                condition = "true";
                mags[] = {
                    { "150Rnd_556x45_Drum_Mag_Tracer_F", "5.56 mm 150Rnd Rubber Mag", 750, "true" },
                    { "150Rnd_556x45_Drum_Mag_F", "5.56 mm 150Rnd Lethal Mag", 750, "true" }
                };
            };
        };
        accs[] = {
            {"optic_Arco_blk_F", "", 300, "true"},
            {"optic_MRCO", "", 300, "true"},
            {"optic_Hamr", "", 300, "true"},
            {"optic_ERCO_blk_F", "", 300, "true"},
            {"optic_Holosight_blk_F", "", 200, "true"},
            {"optic_Aco", "", 200, "true"},
            {"optic_ACO_grn", "", 200, "true"},
            {"optic_MRD", "", 200, "true"},
            {"FirstAidKit", "", 50, "true"},
            {"MiniGrenade", "Flashbang Grenade", 1000, "true"},
            {"SmokeShellBlue", "", 75, "true"},
            {"Chemlight_blue", "", 50, "true"},
            {"muzzle_snds_L", "9 mm Supressor", 500, "true"},
            {"muzzle_snds_acp", ".45 ACP Supressor", 500, "true"},
            {"acc_pointer_IR", "", 250, "true"},
            {"Binocular", "", 150, "true"},
            {"Rangefinder", "", 500, "true"},
            {"B_UavTerminal", "", 1000, "true"}
        };
    };

    class rebel {
        name = "Rebel Outpost";
        side = "CIV";
        conditions = "license_civ_rebel";
        class items {
            class hgun_Rook40_F { //ROOK
                displayName = "";
                price = 1500;
                condition = "true";
                mags[] = {
                    { "30Rnd_9x21_Mag", "", 100, "true" },
                    {"16Rnd_9x21_Mag", "", 50, "true"}
                };
            };

            class hgun_ACPC2_F { //ACPC2
                displayName = "";
                price = 2000;
                condition = "true";
                mags[] = {
                    {"9Rnd_45ACP_Mag", "", 100, "true"}
                };
            };

            class hgun_Pistol_heavy_02_F { //Zubr
                displayName = "";
                price = 2250;
                condition = "true";
                mags[] = {
                    {"6Rnd_45ACP_Cylinder", "", 75, "true"}
                };
            };

            class hgun_PDW2000_F { //PDW
                displayName = "";
                price = 4000;
                condition = "true";
                mags[] = {
                    {"30Rnd_9x21_Mag", "", 100, "true"}
                };
            };

            class SMG_05_F { //Protector
                displayName = "Protector 9 mm (Apex DLC)";
                price = 4500;
                condition = "true";
                mags[] = {
                    {"30Rnd_9x21_Mag_SMG_02", "", 150, "true"}
                };
            };

            class SMG_01_F { //Vermin
                displayName = "";
                price = 4500;
                condition = "true";
                mags[] = {
                    {"30Rnd_45ACP_Mag_SMG_01", "", 200, "true"}
                };
            };

            class arifle_SDAR_F { //SDAR
                displayName = "SDAR 5.56 mm (Illegal)";
                price = 5000;
                condition = "true";
                mags[] = {
                    {"20Rnd_556x45_UW_mag", "5.56 mm 20Rnd Underwater Mag", 200, "true"},
                    {"30Rnd_556x45_Stanag_Tracer_Red", "", 200, "true"}
                };
            };

            class arifle_Mk20_plain_F { //MK20
                displayName = "";
                price = 5000;
                condition = "true";
                mags[] = {
                    {"30Rnd_556x45_Stanag_Tracer_Red", "", 200, "true"}
                };
            };

            class arifle_AKS_F { //AKS
                displayName = "";
                price = 5000;
                condition = "true";
                mags[] = {
                    { "30Rnd_545x39_Mag_F", "", 150, "true" }
                };
            };

            class arifle_SPAR_01_khk_F { //SPAR 16
                displayName = "";
                price = 5500;
                condition = "true";
                mags[] = {
                    {"30Rnd_556x45_Stanag_Tracer_Red", "", 200, "true"}
                };
            };

            class LMG_03_F { //LIM
                displayName = "";
                price = 20000;
                condition = "true";
                mags[] = {
                    { "200Rnd_556x45_Box_Red_F", "", 4000, "true" }
                };
            };

            class arifle_CTAR_blk_F { //car95
                displayName = "";
                price = 6000;
                condition = "true";
                mags[] = {
                    { "30Rnd_580x42_Mag_F", "", 200, "true" }
                };
            };

            class arifle_Katiba_C_F { //Katiba Carbine
                displayName = "";
                price = 6500;
                condition = "true";
                mags[] = {
                    { "30Rnd_65x39_caseless_green", "", 125, "true" }
                };
            };

            class arifle_Katiba_F { //Katiba
                displayName = "";
                price = 7000;
                condition = "true";
                mags[] = {
                    { "30Rnd_65x39_caseless_green", "", 125, "true" }
                };
            };

            class arifle_Katiba_GL_F { //Katiba GL
                displayName = "";
                price = "7500";
                condition = "true";
                mags[] = {
                    { "30Rnd_65x39_caseless_green", "", 125, "true" },
                    { "1Rnd_Smoke_Grenade_shell", "", 150, "true" }
                };
            };

            class LMG_Mk200_F { //MK200
                displayName = "";
                price = 25000;
                condition = "true";
                mags[] = {
                    { "200Rnd_65x39_cased_Box_Tracer", "", 5000, "true" }
                };
            };

            class arifle_ARX_hex_F { //Type 115
                displayName = "";
                price = 7500;
                condition = "true";
                mags[] = {
                    { "30Rnd_65x39_caseless_green", "", 125, "true" }
                };
            };

            class SMG_03_TR_black { //P90 (adr97)
                displayName = "";
                price = 7500;
                condition = "true";
                mags[] = {
                    {"50Rnd_570x28_SMG_03", "", 150, "true"}
                };
            };

            class srifle_DMR_01_F { //Rahim
                displayName = "";
                price = 7500;
                condition = "true";
                mags[] = {
                    { "10Rnd_762x54_Mag", "", 125, "true" }
                };
            };

            class arifle_SPAR_03_snd_F { //SPAR 17
                displayName = "";
                price = 8000;
                condition = "true";
                mags[] = {
                    { "20Rnd_762x51_Mag", "", 125, "true" }
                };
            };

            class arifle_AKM_F { //AKM
                displayName = "";
                price = 7500;
                condition = "true";
                mags[] = {
                    { "30Rnd_762x39_Mag_Tracer_Green_F", "", 125, "true" }
                };
            };

            class arifle_AK12_F { //ak 12
                displayName = "";
                price = 3000;
                condition = "true";
                mags[] = {
                    { "30Rnd_762x39_Mag_Tracer_Green_F", "", 125, "true" }
                };
            };

            class srifle_EBR_F { //MK18
                displayName = "";
                price = 9000;
                condition = "true";
                mags[] = {
                    { "20Rnd_762x51_Mag", "", 125, "true" }
                };
            };

            class srifle_DMR_03_tan_F { //mk 1
                displayName = "";
                price = 10000;
                condition = "true";
                mags[] = {
                    { "20Rnd_762x51_Mag", "", 125, "true" }
                };
            };

            class launch_RPG7_F { //RPG
                displayName = "";
                price = 7500;
                condition = "true";
                mags[] = {
                    { "RPG7_F", "", 50000, "true" }
                };
            };
        };
        accs[] = {
            {"FirstAidKit", "", 50, "true"},
            {"Binocular", "", 250, "true"},
            {"Rangefinder", "", 1000, "true"},
            {"ItemGPS", "", 100, "true"},
            {"SmokeShell", "", 75, "true"},
            {"HandGrenade", "", 4500, "true"},
            {"optic_ARCO", "ARCO (Sand)", 750, "true"},
            {"optic_Arco_blk_F", "", 750, "true"},
            {"optic_Arco_ghex_F", "", 750, "true"},
            {"optic_Hamr", "RCO (Black)", 750, "true"},
            {"optic_Hamr_khk_F", "", 750, "true"},
            {"optic_MRCO", "", 750, "true"},
            {"optic_ERCO_blk_F", "", 750, "true"},
            {"optic_ERCO_khk_F", "", 750, "true"},
            {"optic_ERCO_snd_F", "", 750, "true"},
            {"optic_Aco", "", 250, "true"},
            {"optic_ACO_grn", "", 250, "true"},
            {"optic_Holosight", "", 250, "true"},
            {"optic_Holosight_blk_F", "", 250, "true"},
            {"optic_Holosight_khk_F", "", 250, "true"},
            {"acc_flashlight", "", 100, "true"}
        };
    };
};
