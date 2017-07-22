class CarShops {
    class cop_car {
        side = "cop";
        conditions = "call life_coplevel >= 1";
        vehicles[] = {
            { "C_SUV_01_F", "" },
            { "O_LSV_02_unarmed_F", "" },
            { "B_LSV_01_unarmed_F", "" },
            { "B_Quadbike_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_Offroad_02_unarmed_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Van_01_fuel_F", "" },
            { "B_MRAP_01_F", "" },
            { "B_MRAP_01_hmg_F", "" },
            { "B_MRAP_01_gmg_F", "" },
            { "O_MRAP_02_F", "" },
            { "O_MRAP_02_hmg_F", "" },
            { "O_MRAP_02_gmg_F", "" },
            { "I_MRAP_03_F", "" },
            { "I_MRAP_03_hmg_F", "" },
            { "I_MRAP_03_gmg_F", "" },
            { "rhsusf_m1025_w", "" },
            { "rhsusf_m1025_w_m2", "" },
            { "rhsusf_m1025_w_mk19", "" },
            { "B_Truck_01_covered_F", "" },
            { "B_Truck_01_Repair_F", "" },
            { "B_Truck_01_fuel_F", "" },
            { "B_Truck_01_ammo_F", "" },
            { "B_APC_Wheeled_01_cannon_F", "" },
            { "B_APC_Tracked_01_CRV_F", "" },
            { "I_APC_Wheeled_03_cannon_F", "" },
            { "O_APC_Tracked_02_cannon_F", "" },
            { "B_MBT_01_TUSK_F", "" },
            { "rhsusf_m1a2sep1tuskiiwd_usarmy", "" },
            { "O_MBT_02_cannon_F", "" },
            { "I_MBT_03_cannon_F", "" },
            { "rhs_t90a_tv", "" },
            { "B_MBT_01_arty_F", "" },
            { "O_MBT_02_arty_F", "" },
            { "RHS_BM21_VV_01", "" },
            { "rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy", "" },
            { "rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd", "" },
            { "rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd", "" },
            { "rhsusf_M1232_usarmy_wd", "" },
            { "rhsusf_M1232_M2_usarmy_wd", "" },
            { "rhsusf_M1232_MK19_usarmy_wd", "" },
            { "B_APC_Tracked_01_AA_F", "" },
            { "O_APC_Tracked_02_AA_F", "" }

        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 4";
        vehicles[] = {
            { "B_UGV_01_rcws_F", "" },
            { "B_UAV_02_F", "" },
            { "B_UAV_02_CAS_F", "" },
            { "B_T_UAV_03_dynamicLoadout_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "B_Heli_Light_01_dynamicLoadout_F", "" },
            { "RHS_MELB_H6M", "" },
            { "RHS_MELB_AH6M_M", "" },
            { "RHS_MELB_AH6M_L", "" },
            { "RHS_MELB_AH6M_H", "" },
            { "B_Heli_Transport_03_F", "" },
            { "B_Heli_Transport_01_F", "" },
            { "RHS_UH60M_d", "" },
            { "RHS_AH64D", "" },
            { "B_Heli_Attack_01_dynamicLoadout_F", "" },
            { "O_Heli_Transport_04_F", "" },
            { "O_Heli_Light_02_dynamicLoadout_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "O_Heli_Attack_02_dynamicLoadout_F", "" },
            { "I_Heli_Transport_02_F", "" },
            { "I_Heli_light_03_unarmed_F", "" },
            { "I_Heli_light_03_dynamicLoadout_F", "" },
            { "C_Plane_Civil_01_F", "" },
            { "C_Plane_Civil_01_racing_F", "" },
            { "O_T_VTOL_02_infantry_dynamicLoadout_F", "" },
            { "O_T_VTOL_02_vehicle_dynamicLoadout_F", "" },
            { "B_T_VTOL_01_infantry_F", "" },
            { "B_T_VTOL_01_vehicle_F", "" },
            { "B_T_VTOL_01_armed_F", "" },
            { "B_Plane_CAS_01_dynamicLoadout_F", "" },
            { "I_Plane_Fighter_03_CAS_F", "" },
            { "RHS_AN2", "" },
            { "O_Plane_CAS_02_dynamicLoadout_F", "" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "call life_coplevel >= 1";
        vehicles[] = {
            { "C_Scooter_Transport_01_F", "" },
            { "B_Boat_Transport_01_F", "" },
            { "B_Lifeboat", "" },
            { "C_Boat_Transport_02_F", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_Boat_Armed_01_minigun_F", "" },
            { "rhsusf_mkvsoc", "" }
			
        };
    };
};

class LifeCfgVehicles {
    
	class C_SUV_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 12000;
        textures[] = {};

		};
			class O_LSV_02_unarmed_F {
        vItemSpace = 1;
        conditions = "";
        price = 50000;
        textures[] = {};

		};
		
	class B_LSV_01_unarmed_F {
        vItemSpace = 1;
        conditions = "";
        price = 50000;
        textures[] = {};

		};
		
	class B_Quadbike_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 500;
        textures[] = {};

		};
		
	class C_Offroad_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 12000;
        textures[] = {};

		};
		
	class C_Offroad_02_unarmed_F {
        vItemSpace = 1;
        conditions = "";
        price = 10000;
        textures[] = {};

		};
		
	class C_Hatchback_01_sport_F {
        vItemSpace = 1;
        conditions = "";
        price = 12000;
        textures[] = {};

		};
		
	class C_Hatchback_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 8000;
        textures[] = {};

		};
		
	class C_Van_01_fuel_F {
        vItemSpace = 1;
        conditions = "";
        price = 8000;
        textures[] = {};

		};
		
	class B_MRAP_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 150000;
        textures[] = {};

		};
		
	class B_MRAP_01_hmg_F {
        vItemSpace = 1;
        conditions = "";
        price = 175000;
        textures[] = {};

		};
		
	class B_MRAP_01_gmg_F {
        vItemSpace = 1;
        conditions = "";
        price = 200000;
        textures[] = {};

		};
		
	class O_MRAP_02_F {
        vItemSpace = 1;
        conditions = "";
        price = 125000;
        textures[] = {};

		};
		
	class O_MRAP_02_hmg_F {
        vItemSpace = 1;
        conditions = "";
        price = 150000;
        textures[] = {};

		};
		
	class O_MRAP_02_gmg_F {
        vItemSpace = 1;
        conditions = "";
        price = 175000;
        textures[] = {};

		};
		
	class I_MRAP_03_F {
        vItemSpace = 1;
        conditions = "";
        price = 175000;
        textures[] = {};

		};
		
	class I_MRAP_03_hmg_F {
        vItemSpace = 1;
        conditions = "";
        price = 200000;
        textures[] = {};

		};
		
	class I_MRAP_03_gmg_F {
        vItemSpace = 1;
        conditions = "";
        price = 225000;
        textures[] = {};

		};
		
	class rhsusf_m1025_w {
        vItemSpace = 1;
        conditions = "";
        price = 90000;
        textures[] = {
			{ "Black", "cop", {
                "daggers_shit\textures\M1025A2\daggers_hmmvee_v2.paa",
				"daggers_shit\textures\Untitled.paa",
				"daggers_shit\textures\Untitled.paa",
				"",
				"",
				"",
				"daggers_shit\textures\M1025A2\daggers_hmmvee_2_logo_on_back_v3.paa",
				"daggers_shit\textures\Untitled.paa"
            }, "" },
			
			{ "Camo", "cop", {
                "daggers_shit\textures\M1025A2\daggers_hmmvee_camo_extv1.paa",
				"daggers_shit\textures\Untitled.paa",
				"daggers_shit\textures\Untitled.paa",
				"",
				"",
				"",
				"daggers_shit\textures\M1025A2\daggers_hmmvee_camo_extv1.paa",
				"daggers_shit\textures\Untitled.paa"
            }, "" }
		};
	};
		
	class rhsusf_m1025_w_m2 {
        vItemSpace = 1;
        conditions = "";
        price = 110000;
        textures[] = {
                "daggers_shit\textures\M1025A2\daggers_hmmvee_v2.paa",
				"daggers_shit\textures\Untitled.paa",
				"daggers_shit\textures\Untitled.paa",
				"",
				"",
				"",
				"daggers_shit\textures\M1025A2\daggers_hmmvee_2_logo_on_back_v3.paa",
				"daggers_shit\textures\Untitled.paa"
            }, "" },
			
			{ "Camo", "cop", {
                "daggers_shit\textures\M1025A2\daggers_hmmvee_camo_extv1.paa",
				"daggers_shit\textures\Untitled.paa",
				"daggers_shit\textures\Untitled.paa",
				"",
				"",
				"",
				"daggers_shit\textures\M1025A2\daggers_hmmvee_camo_extv1.paa",
				"daggers_shit\textures\Untitled.paa"
            }, "" },
			
			
			
		};

		};
		
	class rhsusf_m1025_w_mk19 {
        vItemSpace = 1;
        conditions = "";
        price = 125000;
        textures[] = {
			{ "Black", "cop", {
                "daggers_shit\textures\M1025A2\daggers_hmmvee_v2.paa",
				"daggers_shit\textures\Untitled.paa",
				"daggers_shit\textures\Untitled.paa",
				"",
				"",
				"",
				"daggers_shit\textures\M1025A2\daggers_hmmvee_2_logo_on_back_v3.paa",
				"daggers_shit\textures\Untitled.paa"
            }, "" },
			
			{ "Camo", "cop", {
                "daggers_shit\textures\M1025A2\daggers_hmmvee_camo_extv1.paa",
				"daggers_shit\textures\Untitled.paa",
				"daggers_shit\textures\Untitled.paa",
				"",
				"",
				"",
				"daggers_shit\textures\M1025A2\daggers_hmmvee_camo_extv1.paa",
				"daggers_shit\textures\Untitled.paa"
            }, "" }
			
		};
		};
		
	class B_Truck_01_covered_F {
        vItemSpace = 1;
        conditions = "";
        price = 100000;
        textures[] = {};

		};
		
	class B_Truck_01_Repair_F {
        vItemSpace = 1;
        conditions = "";
        price = 100000;
        textures[] = {};

		};
		
	class B_Truck_01_fuel_F {
        vItemSpace = 1;
        conditions = "";
        price = 100000;
        textures[] = {};

		};
		
	class B_Truck_01_ammo_F {
        vItemSpace = 1;
        conditions = "";
        price = 100000;
        textures[] = {};

		};
		
	class B_APC_Wheeled_01_cannon_F {
        vItemSpace = 1;
        conditions = "";
        price = 850000;
        textures[] = {};

		};
		
	class B_APC_Tracked_01_CRV_F {
        vItemSpace = 1;
        conditions = "";
        price = 1000000;
        textures[] = {};

		};
		
	class I_APC_Wheeled_03_cannon_F {
        vItemSpace = 1;
        conditions = "";
        price = 850000;
        textures[] = {};

		};
		
	class O_APC_Tracked_02_cannon_F {
        vItemSpace = 1;
        conditions = "";
        price = 900000;
        textures[] = {};

		};
		
	class B_MBT_01_TUSK_F {
        vItemSpace = 1;
        conditions = "";
        price = 4500000;
        textures[] = {};

		};
		
	class rhsusf_m1a2sep1tuskiiwd_usarmy {
        vItemSpace = 1;
        conditions = "";
        price = 4500000;
        textures[] = {};

		};
		
	class O_MBT_02_cannon_F {
        vItemSpace = 1;
        conditions = "";
        price = 3750000;
        textures[] = {};

		};
		
	class I_MBT_03_cannon_F {
        vItemSpace = 1;
        conditions = "";
        price = 3900000;
        textures[] = {};

		};
		
	class rhs_t90a_tv {
        vItemSpace = 1;
        conditions = "";
        price = 3500000;
        textures[] = {};

		};
		
	class rhsusf_m1a1aim_tuski_wd {
        vItemSpace = 1;
        conditions = "";
        price = 4000000;
        textures[] = {};

		};
		
	class B_MBT_01_arty_F {
        vItemSpace = 1;
        conditions = "";
        price = 2500000;
        textures[] = {};

		};
		
	class O_MBT_02_arty_F {
        vItemSpace = 1;
        conditions = "";
        price = 2500000;
        textures[] = {};

		};
		
		class RHS_BM21_VV_01 {
        vItemSpace = 1;
        conditions = "";
        price = 500000;
        textures[] = {};

		};
				
		class rhsusf_M1083A1P2_B_M2_wd_fmtv_usarmy {
        vItemSpace = 1;
        conditions = "";
        price = 1000000;
        textures[] = {};

		};
						
		class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd {
        vItemSpace = 1;
        conditions = "";
        price = 1350000;
        textures[] = {};

		};
								
		class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd {
        vItemSpace = 1;
        conditions = "";
        price = 1250000;
        textures[] = {};

		};
										
		class rhsusf_M1232_usarmy_wd {
        vItemSpace = 1;
        conditions = "";
        price = 850000;
        textures[] = {};

		};
										
		class rhsusf_M1232_M2_usarmy_wd {
        vItemSpace = 1;
        conditions = "";
        price = 925000;
        textures[] = {};

		};
										
		class rhsusf_M1232_MK19_usarmy_wd {
        vItemSpace = 1;
        conditions = "";
        price = 1250000;
        textures[] = {};

		};
												
		class B_APC_Tracked_01_AA_F {
        vItemSpace = 1;
        conditions = "";
        price = 2250000;
        textures[] = {};

		};
														
		class O_APC_Tracked_02_AA_F {
        vItemSpace = 1;
        conditions = "";
        price = 2250000;
        textures[] = {};

		};
		
	    class B_UGV_01_rcws_F {
        vItemSpace = 1;
        conditions = "";
        price = 500000;
        textures[] = {};

		};
		class B_UAV_02_F {
        vItemSpace = 1;
        conditions = "";
        price = 2500000;
        textures[] = {};

		};
		class B_UAV_02_CAS_F {
        vItemSpace = 1;
        conditions = "";
        price = 3000000;
        textures[] = {};

		};
		class B_T_UAV_03_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 1500000;
        textures[] = {};

		};
			class B_Heli_Light_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 250000;
        textures[] = {};

		};
		
	class B_Heli_Light_01_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 450000;
        textures[] = {};

		};	
		class RHS_MELB_H6M {
        vItemSpace = 1;
        conditions = "";
        price = 50000;
        textures[] = {};

		};
		class RHS_MELB_AH6M_M {
        vItemSpace = 1;
        conditions = "";
        price = 460000;
        textures[] = {};

		};
		class RHS_MELB_AH6M_L {
        vItemSpace = 1;
        conditions = "";
        price = 475000;
        textures[] = {};

		};
		class RHS_MELB_AH6M_H {
        vItemSpace = 1;
        conditions = "";
        price = 500000;
        textures[] = {};

		};
		
	class B_Heli_Transport_03_F {
        vItemSpace = 1;
        conditions = "";
        price = 650000;
        textures[] = {};

		};
		
	class B_Heli_Transport_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 600000;
        textures[] = {};

		};
		
	class RHS_UH60M_d {
        vItemSpace = 1;
        conditions = "";
        price = 600000;
        textures[] = {};

		};
		
	class RHS_AH64D {
        vItemSpace = 1;
        conditions = "";
        price = 2250000;
        textures[] = {};

		};
		
	class B_Heli_Attack_01_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 2500000;
        textures[] = {};

		};
		
	class O_Heli_Transport_04_F {
        vItemSpace = 1;
        conditions = "";
        price = 250000;
        textures[] = {};

		};
		
	class O_Heli_Light_02_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 1250000;
        textures[] = {};

		};
		
	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 1;
        conditions = "";
        price = 900000;
        textures[] = {};

		};
		
	class O_Heli_Attack_02_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 3250000;
        textures[] = {};

		};
		
	class I_Heli_Transport_02_F {
        vItemSpace = 1;
        conditions = "";
        price = 850000;
        textures[] = {};

		};
		
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 1;
        conditions = "";
        price = 525000;
        textures[] = {};

		};
		
	class I_Heli_light_03_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 1600000;
        textures[] = {};

		};
		
	class C_Plane_Civil_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 50000;
        textures[] = {};

		};
		
	class C_Plane_Civil_01_racing_F {
        vItemSpace = 1;
        conditions = "";
        price = 60000;
        textures[] = {};

		};
		
	class O_T_VTOL_02_infantry_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 4600000;
        textures[] = {};

		};
		
	class O_T_VTOL_02_vehicle_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 4600000;
        textures[] = {};

		};
		
	class B_T_VTOL_01_infantry_F {
        vItemSpace = 1;
        conditions = "";
        price = 3000000;
        textures[] = {};

		};
		
	class B_T_VTOL_01_vehicle_F {
        vItemSpace = 1;
        conditions = "";
        price = 3000000;
        textures[] = {};

		};
	
	class B_T_VTOL_01_armed_F {
        vItemSpace = 1;
        conditions = "";
        price = 6000000;
        textures[] = {};

		};
		
	class B_Plane_CAS_01_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 7500000;
        textures[] = {};

		};
		
	class I_Plane_Fighter_03_CAS_F {
        vItemSpace = 1;
        conditions = "";
        price = 5500000;
        textures[] = {};

		};
		
		class RHS_AN2 {
        vItemSpace = 1;
        conditions = "";
        price = 60000;
        textures[] = {};

		};
		
	class O_Plane_CAS_02_dynamicLoadout_F {
        vItemSpace = 1;
        conditions = "";
        price = 6500000;
        textures[] = {};

		};
		
	class C_Scooter_Transport_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 400;
        textures[] = {};

		};
		
	class B_Boat_Transport_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 600;
        textures[] = {};

		};
		
	class B_Lifeboat {
        vItemSpace = 1;
        conditions = "";
        price = 600;
        textures[] = {};


		};
		
	class C_Boat_Transport_02_F {
        vItemSpace = 1;
        conditions = "";
        price = 1200;
        textures[] = {};
		
		};
		
	class C_Boat_Civil_01_F {
        vItemSpace = 1;
        conditions = "";
        price = 2500;
        textures[] = {};
		
		};
		
	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 1;
        conditions = "";
        price = 350000;
        textures[] = {};
		
		};
		
	class rhsusf_mkvsoc {
        vItemSpace = 1;
        conditions = "";
        price = 1250000;
        textures[] = {};
		
		};
};