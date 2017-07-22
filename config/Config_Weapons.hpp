class WeaponShops {  
    //Weapon Shops
    class basic {
        name = "Gear Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "Rangefinder", "", 2, 1, "" },
			{ "Laserdesignator", "", 2, 1, "" },
			{ "Laserbatteries", "", 2, 1, "" },
			{ "ACE_VectorDay", "", 2, 1, "" },
			{ "O_NVGoggles_hex_F", "", 5000, 2500, "" },
			{ "O_NVGoggles_urb_F", "", 5000, 2500, "" },
			{ "O_NVGoggles_ghex_F", "", 5000, 2500, "" },
            { "rhs_1PN138", "", 800, 400, "" },
            { "rhsusf_ANPVS_14", "", 800, 400, "" },
			{ "B_UavTerminal", "", 2, 1, "" },
			{ "TFAR_microdagr", "", 2, 1, "" },
			{ "ItemWatch", "", 2, 1, "" },
			{ "TFAR_anprc152", "", 2, 1, "" }
        
		};
	};   
    	class GL {
        name = "GL Ammo";
        side = "cop";
        conditions = "";
        items[] = {
			{ "1Rnd_HE_Grenade_shell", "Universal 40mm", 50, 50, "" },
			{ "3Rnd_HE_Grenade_shell", "MX Series 3Rnd 40mm", 50, 50, "" },
			{ "1Rnd_Smoke_Grenade_shell", "Universal White Smoke", 50, 50, "" },
			{ "1Rnd_SmokeBlue_Grenade_shell", "Universal Blue Smoke", 50, 50, "" },
			{ "1Rnd_SmokeGreen_Grenade_shell", "Universal Green Smoke", 50, 50, "" },
			{ "1Rnd_SmokeRed_Grenade_shell", "Universal Red Smoke", 50, 50, "" },
			{ "rhs_VOG25", "AK GP-25 HE", 50, 50, "" },
			{ "rhs_VOG25P", "AK GP-25 Bouncing HE", 50, 50, "" },
			{ "rhs_VG40OP_white", "AK GP-25 White Smoke", 50, 50, "" },
			{ "rhs_VG40OP_green", "AK GP-25 Green Smoke", 50, 50, "" },
			{ "rhs_VG40OP_red", "AK GP-25 Red Smoke", 50, 50, "" },
			{ "rhs_mag_M441_HE", "RHS M4s M203 HE", 50, 50, "" },
			{ "rhs_mag_m576", "RHS M4s M203 Buckshot", 50, 50, "" },
			{ "rhs_mag_f1", "F1 Frag Grenade", 2, 1, "" },
			{ "HandGrenade", "M67 Frag Grenade", 2, 1, "" },
			{ "rhs_mag_m67", "M67 Frag Grenade Alternate", 2, 1, "" },
			{ "rhsgref_mag_rkg3em", "RKG Grenade", 2, 1, "" }
		};
	};
	    class optics {
        name = "Optics Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "optic_ACO_grn", "", 100, 50, "" },
            { "optic_Aco", "", 100, 50, "" },
            { "optic_Arco", "", 300, 150, "" },
            { "ACE_optic_Arco_2D", "", 500, 250, "" },
            { "optic_Arco_blk_F", "", 200, 100, "" },
            { "SMA_ELCAN_SPECTER_RDS", "", 500, 250, "" },
            { "SMA_ELCAN_SPECTER_TAN_RDS", "", 500, 250, "" },
            { "SMA_eotech552", "", 100, 50, "" },
            { "SMA_eotech552_3XDOWN", "", 150, 75, "" },
            { "optic_ERCO_blk_F", "", 350, 175, "" },
            { "optic_ERCO_snd_F", "", 350, 175, "" },
            { "rhsusf_acc_compm4", "", 150, 75, "" },
            { "SMA_MICRO_T2", "", 150, 75, "" },
            { "optic_MRCO", "", 150, 75, "" },
            { "ACE_optic_MRCO_2D", "", 150, 75, "" },
            { "optic_Hamr", "", 500, 250, "" },
            { "ACE_optic_Hamr_2D", "", 550, 275, "" },
            { "SMA_BARSKA", "", 300, 150, "" },
            { "SMA_AIMPOINT", "", 300, 150, "" },
            { "rhsusf_acc_SpecterDr", "", 300, 150, "" },
            { "rhsusf_acc_SpecterDr_OD", "", 300, 150, "" },
            { "rhsusf_acc_SpecterDr_D", "", 300, 150, "" },
            { "rhsusf_acc_ACOG_MDO", "", 300, 150, "" },
            { "rhsusf_acc_ACOG_RMR", "", 750, 375, "" },
            { "rhsusf_acc_ACOG_d", "", 750, 375, "" },
            { "rhsusf_acc_ACOG", "", 750, 375, "" },
            { "sma_spitfire_03_black", "", 800, 400, "" },
            { "sma_spitfire_03_rds_black", "", 850, 425, "" }
        
		};
	};
		 class Soptics {
        name = "Sniper Accessories Shop";
        side = "cop";
        conditions = "call life_coplevel >= 3";
        items[] = {
            { "ACE_optic_Arco_PIP", "", 500, 50, "" },
            { "optic_AMS", "", 1000, 500, "" },
            { "optic_AMS_snd", "", 1000, 500, "" },
            { "optic_AMS_khk", "", 1000, 500, "" },
            { "optic_DMS", "", 900, 450, "" },
            { "optic_KHS_blk", "", 1200, 600, "" },
            { "optic_KHS_tan", "", 1200, 600, "" },
            { "optic_LRPS", "", 1500, 750, "" },
            { "ACE_optic_LRPS_2D", "", 1500, 750, "" },
            { "rhsusf_acc_M8541", "", 900, 450, "" },
            { "rhsusf_acc_M8541_low_wd", "", 900, 450, "" },
			{ "bipod_01_F_snd", "", 100, 50, "" },
			{ "bipod_01_F_blk", "", 100, 50, "" },
			{ "bipod_01_F_mtp", "", 100, 50, "" },
			{ "bipod_02_F_blk", "", 100, 50, "" },
			{ "bipod_02_F_tan", "", 100, 50, "" },
			{ "bipod_02_F_hex", "", 100, 50, "" },
			{ "bipod_03_F_blk", "", 100, 50, "" },
			{ "bipod_03_F_oli", "", 100, 50, "" },
			{ "bipod_01_F_khk", "", 100, 50, "" },
			{ "muzzle_snds_93mmg", "", 500, 250, "" },
			{ "muzzle_snds_338_black", "", 500, 250, "" },
			{ "rhsusf_acc_harris_swivel", "M24/M40 Bipod", 200, 100, "" },
        
		};
	};
	    class accessories {
        name = "Accessories Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "SMA_Gripod_01", "", 100, 50, "" },
			{ "acc_pointer_IR", "", 54, 22, "" },
			{ "acc_flashlight", "", 40, 20, "" },
			{ "SMA_ANPEQ15_TAN", "AN PEQ TAN", 40, 20, "" },
			{ "SMA_ANPEQ15_BLK", "AN PEQ BLACK", 40, 20, "" },
			{ "muzzle_snds_L", "", 300, 150, "" },
			{ "muzzle_snds_M", "", 500, 250, "" },
			{ "muzzle_snds_B", "", 500, 250, "" },
			{ "muzzle_snds_H_khk_F", "", 500, 250, "" },
			{ "muzzle_snds_H_snd_F", "", 500, 250, "" },
			{ "muzzle_snds_m_khk_F", "", 500, 250, "" },
			{ "muzzle_snds_m_snd_F", "", 500, 250, "" },
			{ "muzzle_snds_58_blk_F", "", 500, 250, "" },
			{ "muzzle_snds_58_wdm_F", "", 500, 250, "" },
			{ "muzzle_snds_58_ghex_F", "", 500, 250, "" },
			{ "muzzle_snds_58_hex_F", "", 500, 250, "" },
			{ "muzzle_snds_B_khk_F", "", 500, 250, "" },
			{ "muzzle_snds_B_snd_F", "", 500, 250, "" },
			{ "muzzle_snds_65_TI_blk_F", "", 500, 250, "" },
			{ "muzzle_snds_65_TI_hex_F", "", 500, 250, "" },
			{ "muzzle_snds_65_TI_ghex_F", "", 500, 250, "" },
			{ "SMA_supp1b_556", "SMA 5.56 BLACK", 400, 200, "" },
			{ "SMA_supp2btan_556", "SMA 5.56 TAN", 400, 200, "" },
			{ "SMA_supp2BW_556", "SMA 5.56 GREY", 400, 200, "" },
			{ "SMA_supp2smaB_556", "SMA 5.56 BLACK Suppressor", 400, 200, "" },
			{ "SMA_supp2smaT_556", "SMA 5.56 TAN Suppressor", 400, 200, "" },
			{ "sma_gemtech_one_blk", "SMA 7.62 BLACK Suppressor", 400, 200, "" },
			{ "SMA_supptan_762", "SMA 7.62 TAN Suppressor", 400, 200, "" },
			{ "SMA_SFPEQ_HKTOP_BLK", "Laser/Light Combo BLACK", 200, 100, "" },
			{ "SMA_SFPEQ_HKTOP_TAN", "Laser/Light Combo TAN", 200, 100, "" },
			{ "rhs_acc_dtk4short", "RHS 5.45 AK Suppressor", 200, 100, "" },
			{ "rhs_acc_pbs1", "RHS 7.62 AK Suppressor", 200, 100, "" },
			{ "rhs_acc_dtk3", "RHS AK Muzzle", 400, 200, "" }
        
		};
	};
		class rifle {
        name = "Rifle Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "SMA_AAC_MPW_16_Black", "", 6000, 3000, "" },
			{ "SMA_AAC_MPW_16_Tan", "", 6000, 3000, "" },		
			{ "SMA_ACRREM", "", 6000, 3000, "" },
			{ "SMA_ACRREMGL", "", 6500, 3250, "" },
			{ "SMA_ACRREMblk", "", 6000, 3000, "" },
			{ "SMA_ACRREMGL_B", "", 6500, 3250, "" },
			{ "rhs_weap_ak103_zenitco01_b33", "", 7500, 3850, "" },	
			{ "rhs_weap_ak103_2_npz", "", 7000, 3500, "" },
			{ "rhs_weap_ak103_gp25_npz", "", 7500, 3850, "" },
			{ "rhs_weap_ak105_npz", "", 6500, 3250, "" },
			{ "rhs_weap_ak105_zenitco01_b33", "", 6500, 3250, "" },
			{ "arifle_AK12_F", "", 7000, 3500, "" },
			{ "arifle_AK12_GL_F", "", 7500, 3750, "" },
			{ "arifle_AKM_F", "", 2500, 1250, "" },
			{ "rhs_weap_aks74n_npz", "", 4000, 2000, "" },
			{ "rhs_weap_ak74mr", "", 6000, 3000, "" },
			{ "rhs_weap_ak74mr_gp25", "", 6500, 3250, "" },
			{ "rhs_weap_ak74mr_grip1", "", 4000, 2000, "" },
			{ "rhs_weap_ak74m_gp25", "", 5500, 2750, "" },
			{ "rhs_weap_ak74m_npz", "", 5000, 2500, "" },
			{ "rhs_weap_ak74m", "", 2000, 1000, "" },
			{ "arifle_AKS_F", "", 2000, 1000, "" },
			{ "rhs_weap_asval_grip_npz", "", 4000, 2000, "" },
			{ "SMA_Steyr_AUG_F", "", 5000, 2500, "" },
			{ "SMA_Steyr_AUG_BLACK_F", "", 5000, 2500, "" },
			{ "SMA_AUG_A3_F", "", 5000, 2500, "" },
			{ "SMA_AUG_EGLM", "", 5500, 2750, "" },		
			{ "arifle_Mk20_F", "", 5000, 2500, "" },
			{ "arifle_Mk20_plain_F", "", 5000, 2500, "" },
			{ "arifle_Mk20_GL_F", "", 5500, 2750, "" },
			{ "arifle_Mk20_GL_plain_F", "", 5500, 2750, "" },
			{ "rhs_weap_g36c", "", 7000, 3500, "" },
			{ "rhs_weap_g36kv", "", 7200, 3600, "" },
			{ "rhs_weap_g36kv_ag36", "", 7700, 3650, "" },
			{ "arifle_SPAR_01_blk_F", "", 5000, 2500, "" },
			{ "arifle_SPAR_01_khk_F", "", 5000, 2500, "" },
			{ "arifle_SPAR_01_snd_F", "", 5000, 2500, "" },
		    { "arifle_SPAR_01_GL_blk_F", "", 5500, 2750, "" },
		    { "arifle_SPAR_01_GL_khk_F", "", 5500, 2750, "" },
			{ "arifle_SPAR_01_GL_snd_F", "", 5500, 2750, "" },
			{ "SMA_HK416vfg", "", 5000, 2500, "" },
			{ "SMA_HK416GL", "", 5500, 2750, "" },
			{ "arifle_Katiba_F", "", 6000, 3000, "" },
			{ "arifle_Katiba_C_F", "", 6000, 3000, "" },
			{ "arifle_Katiba_GL_F", "", 6500, 3750, "" },	
			{ "rhs_weap_m16a4", "", 6500, 3250, "" },
			{ "rhs_weap_m16a4_carryhandle", "", 6500, 3250, "" },
			{ "SMA_MK18afgTANBLK", "", 5000, 2500, "" },
			{ "SMA_MK18TANBLK_GL", "", 5500, 2750, "" },
			{ "SMA_MK18MOEBLK", "", 5000, 2500, "" },
			{ "SMA_MK18BLK_GL", "", 5500, 2750, "" },			
			{ "SMA_M4MOE_SM", "", 5000, 2500, "" },
			{ "SMA_M4_GL", "", 5500, 2750, "" },
            { "SMA_ACR", "", 5000, 2500, "" },			
			{ "SMA_ACRGL", "", 5500, 2750, "" },
			{ "SMA_ACRblk", "", 5000, 2500, "" },
			{ "SMA_ACRGL_B", "", 5500, 2750, "" },
			{ "SMA_STG_E4_F", "", 5000, 2500, "" },
			{ "SMA_STG_E4_BLACK_F", "", 5000, 2500, "" },
			{ "arifle_MXC_F", "", 6000, 3000, "" },
			{ "arifle_MXC_Black_F", "", 6000, 3000, "" },
			{ "arifle_MX_F", "", 6000, 3000, "" },
	        { "arifle_MX_Black_F", "", 6000, 3000, "" },
		    { "arifle_MX_GL_F", "", 6500, 3250, "" },
			{ "arifle_MX_GL_Black_F", "" , 6500, 3250, "" },
			{ "arifle_CTAR_blk_F", "", 5500, 2750, "" },
			{ "arifle_CTAR_hex_F", "", 5500, 2750, "" },
			{ "arifle_CTAR_ghex_F", "", 5500, 2750, "" },
			{ "arifle_CTAR_GL_blk_F", "", 6000, 3000, "" },
			{ "arifle_CTAR_GL_hex_F", "", 6000, 3000, "" },
			{ "arifle_CTAR_GL_ghex_F", "", 6000, 3000, "" },
			{ "SMA_SAR21_F", "", 5000, 2500, "" },
			{ "SMA_Mk16QCB", "", 5000, 2500, "" },
			{ "SMA_Mk16_blackQCB", "", 5000, 2500, "" },
			{ "SMA_MK16", "", 5000, 2500, "" },
			{ "SMA_Mk16_EGLM", "", 5500, 2750, "" },
			{ "SMA_Mk16_black", "", 5000, 2500, "" },
			{ "SMA_MK16_EGLM_black", "", 5500, 2750, "" },
			{ "SMA_TavorBLK_F", "", 5000, 2500, "" },
			{ "SMA_TavorOD_F", "", 5000, 2500, "" },
			{ "arifle_ARX_blk_F", "", 8000, 4000, "" },
			{ "arifle_ARX_ghex_F", "", 8000, 4000, "" },
			{ "arifle_ARX_hex_F",  "", 8000, 4000, "" }			
		   };
        mags[] = {
            { "30Rnd_65x39_caseless_green", "", 12, 6, "" },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 14, 8, "" },
            { "30Rnd_556x45_Stanag", "", 10, 4, "" },  
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 14, 14, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 14, 14, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 14, 14, "" },
			{ "30Rnd_556x45_Stanag_red", "", 10, 10, "" },
			{ "30Rnd_556x45_Stanag_green", "", 10, 10, "" },
			{ "30Rnd_65x39_caseless_mag", "", 12, 12, "" },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 14, 14, "" },
			{ "30Rnd_762x39_Mag_F", "", 14, 14, "" },
			{ "30Rnd_762x39_Mag_Green_F", "", 14, 14, "" },
			{ "30Rnd_762x39_Mag_Tracer_F", "", 20, 20, "" },
			{ "30Rnd_762x39_Mag_Tracer_Green_F", "", 20, 20, "" },
			{ "30Rnd_545x39_Mag_F", "", 6, 6, "" },
			{ "30Rnd_545x39_Mag_Green_F", "", 8, 4, "" },
			{ "30Rnd_545x39_Mag_Tracer_F", "", 6, 6, "" },
			{ "30Rnd_545x39_Mag_Tracer_Green_F", "", 6, 6, "" },
			{ "10Rnd_50BW_Mag_F", "", 44, 44, "" },
			{ "30Rnd_580x42_Mag_F", "", 10, 10, "" },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 14, 10, "" },
			{ "rhssaf_30rnd_556x45_EPR_G36", "", 10, 10, "" },
			{ "rhssaf_30rnd_556x45_Tracers_G36", "", 10, 10, "" },
			{ "rhs_mag_30Rnd_556x45_Mk318_Stanag", "", 10, 10, "" },
			{ "rhs_30Rnd_545x39_AK", "", 6, 6, "" },
			{ "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "", 10, 10, "" },
			{ "SMA_30Rnd_68x43_SPC_FMJ", "", 10, 10, "" },
			{ "SMA_30Rnd_68x43_SPC_FMJ_Tracer", "", 10, 10, "" },
			{ "SMA_30Rnd_556x45_M855A1", "", 10, 10, "" },
			{ "SMA_20Rnd_762x51mm_M80A1_EPR", "", 10, 10, "" },
			{ "SMA_30Rnd_762x35_BLK_EPR", "", 10, 10, "" },
			{ "rhs_20rnd_9x39mm_SP5", "", 10, 10, "" },
			{ "rhs_30Rnd_762x39mm", "", 10, 10, "" }
        };
        accs[] = {
			
        };
        };
	    class secondary {
        name = "Secondary Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "hgun_Pistol_heavy_02_F", "", 2000, 1000, "" },
			{ "hgun_ACPC2_F", "", 1400, 700, "" },
			{ "hgun_Pistol_heavy_01_F", "", 2200, 1100, "" },
			{ "rhsusf_weap_glock17g4", "", 1000, 500, "" },
			{ "rhsusf_weap_m9", "", 1000, 500, "" },
			{ "rhs_weap_m320", "", 3500, 1750, "" },
			{ "rhsusf_weap_m1911a1", "", 2000, 1000, "" },
			{ "hgun_Pistol_01_F", "", 1500, 750, "" },
			{ "hgun_Rook40_F", "", 1700, 850, "" },
			{ "rhs_weap_rsp30_white", "", 50, 24, "" },
			{ "rhs_weap_rsp30_green", "", 50, 24, "" },
			{ "rhs_weap_rsp30_red", "", 50, 24, "" },
			{ "rhs_weap_tr8", "", 500, 250, "" }
		};
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 4, 2, "" },
			{ "16Rnd_9x21_Mag", "", 3, 1, "" },
			{ "11Rnd_45ACP_Mag", "", 4, 2, "" },
			{ "6Rnd_45ACP_Cylinder", "", 4, 2, "" },
			{ "10Rnd_9x21_Mag", "", 3, 1, "" },
			{ "rhsusf_mag_7x45acp_MHP", "", 3, 1, "" },
			{ "rhsusf_mag_17Rnd_9x19_JHP", "", 3, 1, "" },
			{ "rhsusf_mag_17Rnd_9x19_FMJ", "", 3, 1, "" },
			{ "rhsusf_mag_15Rnd_9x19_JHP", "", 3, 1, "" },
			{ "rhsusf_mag_15Rnd_9x19_FMJ", "", 3, 1, "" },
			{ "rhs_mag_M441_HE", "", 3, 1, "" },
			{ "rhs_mag_M433_HEDP", "", 3, 1, "" },
			{ "rhs_mag_M397_HET", "", 3, 1, "" },
			{ "rhs_mag_m576", "", 3, 1, "" }
        };
        accs[] = {
            { "muzzle_snds_acp", "", 300, 150, "" },
			{ "muzzle_snds_L", "", 300, 150, "" }
        };
        };
		class lmg {
        name = "LMG Shop";
        side = "cop";
        conditions = "call life_coplevel >= 2";
        items[] = {	
	        { "arifle_SPAR_02_blk_F", "", 10000, 5000, "" },
	        { "arifle_SPAR_02_khk_F", "", 10000, 5000, "" },
	        { "arifle_SPAR_02_snd_F", "", 10000, 5000, "" },
	        { "MMG_01_hex_F", "", 9500, 4750, "" },
	        { "MMG_01_tan_F", "", 9500, 4750, "" },
	        { "MMG_02_camo_F", "", 12000, 6000, "" },
	        { "MMG_02_black_F", "", 12000, 6000, "" },
	        { "MMG_02_sand_F", "", 12000, 6000, "" },
			{ "rhs_weap_m240b", "", 10000, 5000, "" },	
			{ "rhs_weap_m240b_CAP", "", 10000, 5000, "" },	
			{ "rhs_weap_m249_pip_L", "", 11500, 5750, "" },	
			{ "rhs_weap_m249_pip_S", "", 11500, 5750, "" },
	        { "arifle_MX_SW_F", "", 9000, 4500, "" },
	        { "arifle_MX_SW_Black_F", "", 9000, 4500, "" },			
			{ "LMG_Mk200_F", "", 8500, 4250, "" },			
		};
	mags[] = {
            { "200Rnd_65x39_cased_Box", "", 12, 6, "" },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 14, 8, "" },
			{ "150Rnd_762x54_Box", "", 14, 8, "" },
			{ "150Rnd_762x54_Box_Tracer", "", 20, 10, "" },
			{ "150Rnd_556x45_Drum_Mag_F", "", 10, 4, "" },
			{ "100Rnd_65x39_caseless_mag", "", 12, 6, "" },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 14, 8, "" },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 14, 4, "" },
			{ "SMA_150Rnd_762_M80A1", "", 14, 4, "" },
			{ "SMA_150Rnd_762_M80A1_Tracer", "", 20, 10, "" },
			{ "SMA_150Rnd_762_M80A1_Mixed", "", 20, 10, "" },
			{ "130Rnd_338_Mag", "", 12, 6, "" },
			{ "150Rnd_93x64_Mag", "", 14, 4, "" },
			{ "200Rnd_556x45_Box_F", "", 10, 4, "" },
			{ "200Rnd_556x45_Box_Red_F", "", 10, 4, "" },
			{ "200Rnd_556x45_Box_Tracer_F", "", 14, 8, "" },
			{ "rhsusf_100Rnd_762x51", "", 14, 8, "" },
			{ "rhs_200rnd_556x45_M_SAW", "", 14, 8, "" },
			{ "200Rnd_556x45_Box_Tracer_Red_F", "", 14, 8, "" }
        };
        accs[] = {
		
        };
		};
		class snipers{
        name = "Snipers Shop";
        side = "cop";
        conditions = "call life_coplevel >= 3";
        items[] = {	
		    { "srifle_DMR_04_F", "", 6000, 3000, "" }, 
         	{ "srifle_DMR_04_Tan_F", "", 6000, 3000, "" },
        	{ "srifle_DMR_05_blk_F", "", 7000, 3500, "" }, 
         	{ "srifle_DMR_05_hex_F", "", 7000, 3500, "" },
        	{ "srifle_DMR_05_tan_f", "", 7000, 3500, "" },
			{ "srifle_GM6_F", "", 15000, 7500, "" },
			{ "arifle_SPAR_03_blk_F", "", 9500, 4750, "" }, 
	        { "arifle_SPAR_03_khk_F", "", 9500, 4750, "" }, 
	        { "arifle_SPAR_03_snd_F", "", 9500, 4750, "" },
			{ "srifle_DMR_06_camo_F", "", 6500, 3250, "" },
	        { "srifle_DMR_06_olive_F", "", 6500, 3250, "" },
			{ "srifle_EBR_F", "", 7500, 3750, "" },	
	        { "srifle_LRR_F", "", 10500, 5250, "" },			
			{ "rhs_weap_XM2010", "", 11500, 5750, "" },	
			{ "rhs_weap_XM2010_wd", "", 11500, 5750, "" },
			{ "rhs_weap_XM2010_d", "", 11500, 5750, "" },	
			{ "rhs_weap_XM2010_sa", "", 11500, 5750, "" },
			{ "rhs_weap_m24sws_blk", "", 4500, 2250, "" },
			{ "rhs_weap_m24sws", "", 4500, 2250, "" },
			{ "rhs_weap_m40a5", "", 6500, 3250, "" },
			{ "rhs_weap_m40a5_d", "", 6500, 3250, "" },
			{ "rhs_weap_m40a5_wd", "", 6500, 3250, "" },
	        { "arifle_MXM_F", "", 7000, 3500, "" },
	        { "arifle_MXM_Black_F", "", 7000, 3500, "" },
	        { "srifle_DMR_02_F", "", 9000, 4500, "" }, 
	        { "srifle_DMR_02_camo_F", "", 9000, 4500, "" },
	        { "srifle_DMR_02_sniper_F", "", 9000, 4500, "" }, 		
	        { "srifle_DMR_03_F", "", 7000, 3500, "" }, 
	        { "srifle_DMR_03_khaki_F", "", 7000, 3500, "" },
         	{ "srifle_DMR_03_tan_F", "", 7000, 3500, "" }, 
	        { "srifle_DMR_03_multicam_F", "", 7000, 3500, "" },
	        { "srifle_DMR_03_woodland_F", "", 7000, 3500, "" },
			{ "rhs_weap_svdp_npz", "", 4500, 2250, "" },			
			{ "rhs_weap_svdp_wd_npz", "", 4500, 2250, "" },
			{ "SMA_Mk17", "", 7000, 3500, "" },
			{ "SMA_Mk17_black", "", 7000, 3500, "" },
			{ "SMA_Mk17_16", "", 7000, 3500, "" },
			{ "SMA_Mk17_16_black", "", 7000, 3500, "" }			
	
		};
        mags[] = {
            { "10Rnd_762x54_Mag", "", 14, 4, "" },
			{ "20Rnd_762x51_Mag", "", 14, 4, "" },
			{ "5Rnd_127x108_Mag", "", 18, 9, "" },
			{ "5Rnd_127X108_APDS_Mag", "", 28, 14, "" },
			{ "7Rnd_408_Mag", "", 18, 9, "" },
			{ "10Rnd_338_Mag", "", 12, 6, "" },
			{ "10Rnd_127x54_Mag", "", 18, 9, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 14, 4, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 12, 6, "" },
			{ "SMA_30Rnd_762x35_BLK_EPR", "", 10, 10, "" },
			{ "rhsusf_5Rnd_300winmag_xm2010", "", 12, 6, "" },
			{ "rhsusf_10Rnd_762x51_m118_special_Mag", "", 14, 4, "" },
			{ "rhsusf_10Rnd_762x51_m62_Mag", "", 14, 4, "" },
			{ "rhsusf_5Rnd_762x51_m118_special_Mag", "", 14, 4, "" },
			{ "rhs_10Rnd_762x54mmR_7N1", "", 14, 4, "" }
        };
        accs[] = {
			
        };
        };
		class launchers {
        name = "Launchers Shop";
        side = "cop";
        conditions = "";
        items[] = {	
	        { "rhs_weap_m72a7", "", 7500, , 3750, "" },
	        { "rhs_weap_m136", "", 7500, , 3750, "" },
	        { "rhs_weap_m136_hedp", "", 7500, 3750, "" },
	        { "rhs_weap_m136_hp", "", 7500, 3750, "" },
	        { "rhs_weap_smaw", "", 13000, , 6500, "" },
	        { "rhs_weap_smaw_green", "", 13000, 6500, "" },
		    { "launch_RPG7_F", "", 2500, 1250, "" }, // RPG-7
			{ "launch_RPG32_F", "", 4000, 2000, "" }, // RPG - 42 ALAMUT
	        { "rhs_weap_igla", "", 45000, 22500, "" },
	        { "rhs_weap_fgm148", "", 75000, 37500, "" },
	        { "rhs_weap_fim92", "", 50000, 25000, "" },
	        { "rhs_weap_rpg26", "", 3200, 1600, "" },
			{ "launch_B_Titan_F", "", 250000, 125000, "" }, // TITAN MPRL (SAND)
			{ "launch_I_Titan_F", "", 250000, 125000, "" }, // TITAN MPRL (DIGITAL)
			{ "launch_O_Titan_F", "", 250000, 125000, "" }, // TITAN MPRL (HEX)
			{ "launch_Titan_F", "", 250000, 125000, "" }, // TITAN MPRL
	        { "launch_B_Titan_short_F", "", 325000, 162500, "" }, // TITAN COMPACT [SAND]
	        { "launch_I_Titan_short_F", "", 325000, 162500, "" }, // TITAN COMPACT [DIGITAL]
	        { "launch_O_Titan_short_F", "", 325000, 162500, "" }, // TITAN COMPACT [HEX]
	        { "launch_Titan_short_F", "", 325000, 162500, "" } // TITAN COMPACT			
		
		};
        mags[] = {	
			{ "RPG7_F", "", 500, 250, "" },
			{ "RPG32_F", "", 500, 250, "" },
            { "RPG32_HE_F", "", 500, 250, "" },
			{ "Titan_AA", "", 5000, 2500, "" },
			{ "Titan_AT", "", 5000, 2500, "" },
			{ "rhs_mag_9k38_rocket", "", 5000, 2500, "" },
			{ "rhs_fgm148_magazine_AT", "", 5000, 2500, "" },
			{ "rhs_fim92_mag", "", 5000, 2500, "" },
			{ "rhs_mag_smaw_HEAA", "", 5000, 2500, "" },
			{ "rhs_mag_smaw_HEDP", "", 5000, 2500, "" },
			{ "Titan_AP", "", 5000, 2500, "" }
        };
        accs[] = {
        };
       };
    };
