/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
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
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 35000, 7500 },
			{ "srifle_LRR_LRPS_F", "", 500000, 7500 },
			{ "LMG_Mk200_F", "", 400000, 7500 },
			{ "arifle_MXM_Hamr_pointer_F", "", 450000, 7500 },
			{ "arifle_TRG20_Holo_F", "", 25000, 7500 },
			{ "SMG_01_Holo_pointer_snds_F", "", 45000, 7500 },
			{ "arifle_Mk20C_plain_F", "", 67000, 7500 }			
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "7Rnd_408_Mag", "", 125 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 125 },
			{ "30Rnd_556x45_Stanag_green", "", 125 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 125 },
			{ "30Rnd_556x45_Stanag", "", 125 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

	class cop_SWAT {
        name = "Altis SWAT Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a SWAT Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
			{ "arifle_TRG21_MRCO_F", "", 2750, -1 },
			{ "arifle_MX_SW_Black_Hamr_pointer_F", "", 2750, -1 },
			{ "arifle_MXM_Black_F", "", 2750, -1 },
			{ "arifle_MX_RCO_pointer_snds_F", "", 2750, -1 },
			{ "srifle_GM6_LRPS_F", "", 2750, -1 },
			{ "hgun_P07_F", "", 2750, -1 },
			{ "arifle_Mk20C_plain_F", "", 2750, -1 },
			{ "arifle_Mk20_GL_F", "", 2750, -1 },
			{ "LMG_Mk200_BI_F", "", 2750, -1 },
			{ "arifle_AK12_F", "", 2750, -1 }
			
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 250 },
			{ "100Rnd_65x39_caseless_mag", "", 250 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "5Rnd_127x108_Mag", "", 250 },
			{ "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 250 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 250 },
			{ "30Rnd_762x39_Mag_F", "", 250 }			
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_State {
        name = "Altis State Command Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a State Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
			{ "srifle_EBR_Hamr_pointer_F", "", 2750, -1 },
			{ "LMG_Mk200_MRCO_F", "", 2750, -1 },
			{ "hgun_ACPC2_snds_F", "", 2750, -1 },
			{ "arifle_Katiba_C_F", "", 2750, -1 },
			{ "arifle_Katiba_GL_F", "", 2750, -1 },
			{ "arifle_MXM_F", "", 2750, -1 },
			{ "arifle_MX_RCO_pointer_snds_F", "", 2750, -1 },
			{ "arifle_MXM_DMS_F", "", 2750, -1 },
			{ "SMG_01_Holo_pointer_snds_F", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "20Rnd_762x51_Mag", "", 250 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 250 },
			{ "9Rnd_45ACP_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_green", "", 250 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 250 },
			{ "30Rnd_65x39_caseless_green", "", 250 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 250 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_Marshals {
        name = "Altis Marshals Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Marshals Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
			{ "arifle_MX_GL_khk_F", "", 2750, -1 },
			{ "arifle_MXM_RCO_pointer_snds_F", "", 2750, -1 },
			{ "arifle_MXM_Hamr_pointer_F", "", 2750, -1 },
			{ "hgun_PDW2000_Holo_snds_F", "", 2750, -1 },
			{ "SMG_02_ARCO_pointg_F", "", 2750, -1 },
			{ "arifle_MX_ACO_pointer_snds_F", "", 2750, -1 }			
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "30Rnd_65x39_caseless_green", "", 250 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 250 },
			{ "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 250 },
			{ "30Rnd_9x21_Mag_SMG_02_Tracer_Red", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 },
			{ "20Rnd_762x51_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 100 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 100 },
			{ "1Rnd_SmokeGreen_Grenade_shell", "", 100 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 100 }
			
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

	 class cop_Admin{
        name = "Altis SMT ONLY";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a SMTs ONLY Rank!" };
        items[] = {
            { "arifle_MX_F", "", 12, 7500 },
            { "SMG_02_ACO_F", "", 12, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 12, 275 },
            { "optic_Arco", "", 12, -1 },
            { "muzzle_snds_H", "", 12, -1 },
			{ "arifle_MXM_RCO_pointer_snds_F", "", 0, -1 },
			{ "arifle_AKM_FL_F", "", 12, -1 },
			{ "arifle_CTAR_blk_ACO_Pointer_F", "", 12, -1 },
			{ "arifle_MXM_RCO_pointer_snds_F", "", 0, -1 },
			{ "arifle_MX_GL_Holo_pointer_snds_F", "", 0, -1 },
			{ "hgun_ACPC2_snds_F", "", 12, -1 },
			{ "LMG_Mk200_MRCO_F", "", 12, -1 },
			{ "LMG_Zafir_pointer_F", "", 12, -1 },
			{ "srifle_LRR_LRPS_F", "", 12, -1 },
			{ "launch_NLAW_F", "", 12, -1 },
			{ "hgun_Rook40_snds_F", "", 30, -1 },
			{ "arifle_MX_SW_Black_Hamr_pointer_F", "", 0, -1 },
			{ "srifle_DMR_05_DMS_F", "", 12, -1 },
            { "1Rnd_Smoke_Grenade_shell", "", 12, -1 },
            { "1Rnd_SmokeOrange_Grenade_shell", "", 12, -1 }			
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "30Rnd_762x39_Mag_Tracer_Green_F", "", 250 },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 250 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "30Rnd_65x39_caseless_mag", "", 250 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "9Rnd_45ACP_Mag", "", 250 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 250 },
			{ "150Rnd_762x54_Box_Tracer", "", 250 },
			{ "7Rnd_408_Mag", "", 250 },
			{ "NLAW_F", "", 250 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 250 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 250 }						
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
