/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/

player setUnitLoadout [[],[],[],[],[],[],"","",[],["","","","","",""]];

//Load player with default cop gear.
player addUniform "U_Rangemaster";
player addVest "V_TacVest_blk_POLICE";
player addBackpack "B_Messenger_Black_F";
player addHeadgear "H_Cap_police";
player addGoggles "G_Aviator";

player addWeapon "Binocular";
player addMagazine "30Rnd_9x21_Green_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "30Rnd_9x21_Green_Mag";
player addMagazine "30Rnd_9x21_Green_Mag";
player addMagazine "30Rnd_9x21_Green_Mag";
player addMagazine "30Rnd_9x21_Green_Mag";
player addMagazine "30Rnd_9x21_Green_Mag";

/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
//player linkItem "ItemRadio";
player linkItem "ItemGPS";

[] call life_fnc_playerSkins;
