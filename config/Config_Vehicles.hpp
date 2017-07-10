class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_APC_Tracked_01_AA_F", "" },
			{ "O_APC_Tracked_02_AA_F", "" },
			{ "B_APC_Wheeled_01_cannon_F", "" },
			{ "O_APC_Tracked_02_cannon_F", "" },
			{ "I_APC_tracked_03_cannon_F", "" },
			{ "B_APC_Tracked_01_rcws_F", "" },
			{ "B_APC_Tracked_01_CRV_F", "" },
			{ "I_APC_Wheeled_03_cannon_F", "" },
			{ "O_MBT_02_arty_F", "" },
			{ "B_MBT_01_mlrs_F", "" },
			{ "B_MBT_01_arty_F", "" },
			{ "I_MRAP_03_F", "" },
			{ "I_MRAP_03_hmg_F", "" },
			{ "I_MRAP_03_gmg_F", "" },
			{ "C_Van_01_fuel_F", "" },
			{ "C_Hatchback_01_F", "" },
			{ "C_Hatchback_01_sport_F", "" },
			{ "B_Truck_01_covered_F", "" },
			{ "C_Offroad_02_unarmed_F_black", "" },
			{ "C_Truck_02_covered_F", "" },
			{ "B_MRAP_01_F", "" },
			{ "B_MRAP_01_hmg_F", "" },
			{ "B_MRAP_01_gmg_F", "" },
			{ "B_G_Offroad_01_F", "" },
			{ "B_G_Offroad_01_armed_F", "" },
			{ "B_T_LSV_01_unarmed_F", "" },
			{ "B_T_LSV_01_armed_F", "" },
			{ "O_MRAP_02_F", "" },
			{ "O_MRAP_02_hmg_F", "" },
			{ "O_MRAP_02_gmg_F", "" },
			{ "O_T_LSV_02_unarmed_F", "" },
			{ "B_Quadbike_01_F", "" },
			{ "C_SUV_01_F", "" },
			{ "O_Truck_03_covered_F", "" },
			{ "C_Van_01_transport_F", "" },
			{ "B_MBT_01_TUSK_F", "" },
			{ "B_MBT_01_cannon_F", "" },
			{ "rhs_cdf_b_t72bb_tv", "" },
			{ " rhsgref_cdf_b_t80bv_tv", "" },
			{ "rhsusf_m1a1aimd_usarmy", "" },
			{ "rhsusf_m1a1fep_d", "" },
			{ "rhsusf_m1a1hc_wd", "" },
			{ "rhsusf_m1a1fep_od", "" },
			{ "rhs_t90a_tv", "" },
			{ "rhsusf_m1025_w_s_m2", "" },
			{ "rhsusf_m1025_w_s_mk19", "" },
			{ "rhsusf_m1025_w_s", "" },
			{ "rhsusf_m1025_d_s", "" },
			{ "rhsusf_m1025_d_s_mk19", "" },
			{ "rhsgref_cdf_b_reg_BM2", "" },
			{ "rhsusf_m977a4_repair_bkit_m2_usarmy_d", "" },
			{ "rhsusf_m977a4_ammo_bkit_m2_usarmy_d", "" },
			{ "rhsusf_M1083A1P2_B_M2_d_fmtv_usarmy", "" },
			{ "rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy", "" },
			{ "rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd", "" },
			{ "rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd", "" },
			{ "rhsusf_rg33_m2_usmc_d", "" },
			{ "rhsusf_rg33_usmc_d", "" },
			{ "rhsusf_M1232_usarmy_d", "" },
			{ "rhsusf_M1232_MK19_usarmy_d", "" },
			{ "rhsusf_M1232_M2_usarmy_d", "" },
			{ "rhsusf_M1232_M2_usarmy_wd", "" },
			{ "rhsusf_M1232_usarmy_wd", "" },
			{ "rhsusf_rg33_usmc_wd", "" },
			{ "rhsusf_rg33_m2_usmc_wd", "" },

        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "I_Heli_Transport_02_F", "" },
			{ "I_Heli_light_03_unarmed_F", "" },
			{ "I_Plane_Fighter_03_dynamicLoadout_F", "" },
			{ "C_Plane_Civil_01_F", "" },
			{ "C_Plane_Civil_01_racing_F", "" },
			{ "O_Heli_Light_02_dynamicLoadout_F", "" },
			{ "O_Heli_Light_02_unarmed_F", "" },
			{ "O_T_VTOL_02_infantry_dynamicLoadout_F", "" },
			{ "O_T_VTOL_02_vehicle_dynamicLoadout_F", "" },
			{ "B_T_VTOL_01_infantry_F", "" },
			{ "B_T_VTOL_01_vehicle_F", "" },
			{ "B_T_VTOL_01_armed_F", "" },
			{ "B_Plane_CAS_01_F", "" },
			{ "B_Heli_Light_01_armed_F", "" },
			{ "B_Heli_Light_01_F", "" },
			{ "B_Heli_Transport_01_F", "" },
			{ "B_Heli_Transport_03_F", "" },
			{ "B_Heli_Attack_01_dynamicLoadout_F", "" },
			{ "C_Heli_Light_01_civil_F", "" },
			{ "I_C_Plane_Civil_01_F", "" },
			{ "B_UAV_01_F", "" },
			{ "B_UGV_01_rcws_F", "" },
			{ "B_UAV_02_dynamicLoadout_F", "" },
			{ "O_T_UAV_04_CAS_F", "" },
			{ "B_T_UAV_03_F", "" },
			{ "rhsusf_CHE53E_USMC", "" }, 
			{ "RHS_AH1Z", "" }, 
			{ "RHS_AH64D", "" }, 
			{ "RHS_UH60M_MEV_d", "" }, 
			{ "rhsgref_cdf_b_reg_Mi8amt", "" }, 
			{ "rhsusf_f22", "" }, 
			{ "rhsgref_cdf_b_su25", "" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
			{ "B_Lifeboat", "" },
			{ "B_Boat_Armed_01_minigun_F", "" },
			{ "B_SDV_01_F", "" },
			{ "C_Boat_Civil_01_F", "" },
			{ "C_Boat_Transport_02_F", "" },
			{ "C_Scooter_Transport_01_F", "" },
			{ "rhsusf_mkvsoc", "" }
			
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class B_APC_Tracked_01_AA_F {
        vItemSpace = 100;
        conditions = "";
        price = 1600000;
        textures[] = {};

    };
	 class O_APC_Tracked_02_AA_F {
     vItemSpace = 100;
     conditions = "";
     price = 1850000;
     textures[] = {};

    };
     class B_APC_Wheeled_01_cannon_F {
     vItemSpace = 100;
     conditions = "";
     price = 1875000;
     textures[] = {};

    };
	 class O_APC_Tracked_02_cannon_F {
     vItemSpace = 100;
     conditions = "";
     price = 1750000;
     textures[] = {};

    };
     class I_APC_tracked_03_cannon_F {
     vItemSpace = 100;
     conditions = "";
     price = 2405000;
     textures[] = {};

    };     
	 class B_APC_Tracked_01_rcws_F {
     vItemSpace = 100;
     conditions = "";
     price = 3000000;
     textures[] = {};

    };	 
	class B_APC_Tracked_01_CRV_F {
     vItemSpace = 100;
     conditions = "";
     price = 3500000;
     textures[] = {};

    };
   	class I_APC_Wheeled_03_cannon_F {
     vItemSpace = 100;
     conditions = "";
     price = 1350000;
     textures[] = {};

    };
   	class O_MBT_02_arty_F {
     vItemSpace = 100;
     conditions = "";
     price = 1300000;
     textures[] = {};

    };
	 class B_MBT_01_mlrs_F {
     vItemSpace = 100;
     conditions = "";
     price = 2500000;
     textures[] = {};

    };
	 class B_MBT_01_arty_F {
     vItemSpace = 100;
     conditions = "";
     price = 2215000;
     textures[] = {};

    };
	class I_MRAP_03_F {
     vItemSpace = 100;
     conditions = "";
     price = 220000;
     textures[] = {};

    };
	class I_MRAP_03_hmg_F {
     vItemSpace = 100;
     conditions = "";
     price = 260000;
     textures[] = {};

    };
	class I_MRAP_03_gmg_F {
     vItemSpace = 100;
     conditions = "";
     price = 290000;
     textures[] = {};

    };
	class C_Van_01_fuel_F {
     vItemSpace = 100;
     conditions = "";
     price = 10000;
     textures[] = {};

    };
	class C_Hatchback_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 10000;
     textures[] = {};

    };	
	class C_Hatchback_01_sport_F {
     vItemSpace = 100;
     conditions = "";
     price = 12500;
     textures[] = {};

    };	
	class B_Truck_01_covered_F {
     vItemSpace = 100;
     conditions = "";
     price = 125000;
     textures[] = {};

    };
	class C_Offroad_02_unarmed_F_black {
     vItemSpace = 100;
     conditions = "";
     price = 15000;
     textures[] = {};

    };
	class C_Truck_02_covered_F {
     vItemSpace = 100;
     conditions = "";
     price = 125000;
     textures[] = {};

    };
	class B_MRAP_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 380000;
     textures[] = {};

    };
	class B_MRAP_01_hmg_F {
     vItemSpace = 100;
     conditions = "";
     price = 390000;
     textures[] = {};

    };
	class B_MRAP_01_gmg_F {
     vItemSpace = 100;
     conditions = "";
     price = 400000;
     textures[] = {};

    };
	class B_G_Offroad_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 15000;
     textures[] = {};

    };
	class B_G_Offroad_01_armed_F {
     vItemSpace = 100;
     conditions = "";
     price = 25000;
     textures[] = {};

    };
	class B_T_LSV_01_unarmed_F {
     vItemSpace = 100;
     conditions = "";
     price = 60000;
     textures[] = {};

    };
	class B_T_LSV_01_armed_F {
     vItemSpace = 100;
     conditions = "";
     price = 100000;
     textures[] = {};

    };
	class O_MRAP_02_F {
     vItemSpace = 100;
     conditions = "";
     price = 250000;
     textures[] = {};

    };
	class O_MRAP_02_hmg_F {
     vItemSpace = 100;
     conditions = "";
     price = 275000;
     textures[] = {};

    };
	class O_MRAP_02_gmg_F {
     vItemSpace = 100;
     conditions = "";
     price = 300000;
     textures[] = {};

    };
	class O_T_LSV_02_unarmed_F {
     vItemSpace = 100;
     conditions = "";
     price = 65000;
     textures[] = {};

    };
	class B_Quadbike_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 1500;
     textures[] = {};

    };
	class C_SUV_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 22000;
     textures[] = {};

    };
	class O_Truck_03_covered_F {
     vItemSpace = 100;
     conditions = "";
     price = 125000;
     textures[] = {};

    };
	class C_Van_01_transport_F {
     vItemSpace = 100;
     conditions = "";
     price = 8000;
     textures[] = {};

    };
	class B_MBT_01_TUSK_F {
     vItemSpace = 100;
     conditions = "";
     price = 4000000;
     textures[] = {};

    };
	class B_MBT_01_cannon_F {
     vItemSpace = 100;
     conditions = "";
     price = 4000000;
     textures[] = {};

    };
	class rhs_cdf_b_t72bb_tv {
     vItemSpace = 100;
     conditions = "";
     price = 1500000;
     textures[] = {};

    };
	class rhsgref_cdf_b_t80bv_tv {
     vItemSpace = 100;
     conditions = "";
     price = 2200000;
     textures[] = {};

    };
	class rhsusf_m1a1aimd_usarmy {
     vItemSpace = 100;
     conditions = "";
     price = 4000000;
     textures[] = {};

    };
	class rhsusf_m1a1fep_d {
     vItemSpace = 100;
     conditions = "";
     price = 4000000;
     textures[] = {};

    };
	class rhsusf_m1a1hc_wd {
     vItemSpace = 100;
     conditions = "";
     price = 4000000;
     textures[] = {};

    };
	class rhsusf_m1a1fep_od {
     vItemSpace = 100;
     conditions = "";
     price = 4000000;
     textures[] = {};

    };
	class rhs_t90a_tv {
     vItemSpace = 100;
     conditions = "";
     price = 2500000;
     textures[] = {};

    };
	class rhsusf_m1025_w_s_m2 {
     vItemSpace = 100;
     conditions = "";
     price = 125000;
     textures[] = {};

    };
	class rhsusf_m1025_w_s_mk19 {
     vItemSpace = 100;
     conditions = "";
     price = 150000;
     textures[] = {};

    };
	class rhsusf_m1025_w_s {
     vItemSpace = 100;
     conditions = "";
     price = 100000;
     textures[] = {};

    };
	class rhsusf_m1025_d_s {
     vItemSpace = 100;
     conditions = "";
     price = 100000;
     textures[] = {};

    };
	class rhsusf_m1025_d_s_mk19 {
     vItemSpace = 100;
     conditions = "";
     price = 150000;
     textures[] = {};

    };
	class rhsgref_cdf_b_reg_BM2 {
     vItemSpace = 100;
     conditions = "";
     price = 550000;
     textures[] = {};

    };
	class rhsusf_m977a4_repair_bkit_m2_usarmy_d {
     vItemSpace = 100;
     conditions = "";
     price = 225000;
     textures[] = {};

    };
	class rhsusf_m977a4_ammo_bkit_m2_usarmy_d {
     vItemSpace = 100;
     conditions = "";
     price = 225000;
     textures[] = {};

    };
	class rhsusf_M1083A1P2_B_M2_d_fmtv_usarmy {
     vItemSpace = 100;
     conditions = "";
     price = 225000;
     textures[] = {};

    };
	class rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy {
     vItemSpace = 100;
     conditions = "";
     price = 225000;
     textures[] = {};

    };
	class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd {
     vItemSpace = 100;
     conditions = "";
     price = 225000;
     textures[] = {};

    };
	class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd {
     vItemSpace = 100;
     conditions = "";
     price = 225000;
     textures[] = {};

    };
	class rhsusf_rg33_m2_usmc_d {
     vItemSpace = 100;
     conditions = "";
     price = 200000;
     textures[] = {};

    };
	class rhsusf_rg33_usmc_d {
     vItemSpace = 100;
     conditions = "";
     price = 175000;
     textures[] = {};

    };
	class rhsusf_M1232_usarmy_d {
     vItemSpace = 100;
     conditions = "";
     price = 100000;
     textures[] = {};

    };
	class rhsusf_M1232_MK19_usarmy_d {
     vItemSpace = 100;
     conditions = "";
     price = 150000;
     textures[] = {};

    };
	class rhsusf_M1232_M2_usarmy_d {
     vItemSpace = 100;
     conditions = "";
     price = 125000;
     textures[] = {};

    };
	class rhsusf_M1232_M2_usarmy_wd {
     vItemSpace = 100;
     conditions = "";
     price = 125000;
     textures[] = {};

    };
	class rhsusf_M1232_usarmy_wd {
     vItemSpace = 100;
     conditions = "";
     price = 100000;
     textures[] = {};

    };
	class rhsusf_rg33_usmc_wd {
     vItemSpace = 100;
     conditions = "";
     price = 200000;
     textures[] = {};

    };
	class rhsusf_rg33_m2_usmc_wd {
     vItemSpace = 100;
     conditions = "";
     price = 200000;
     textures[] = {};

    };
	
	class I_Heli_Transport_02_F {
     vItemSpace = 100;
     conditions = "";
     price = 1250000;
     textures[] = {};

    };
	class I_Heli_light_03_unarmed_F {
     vItemSpace = 100;
     conditions = "";
     price = 1500000;
     textures[] = {};

    };
	class I_Plane_Fighter_03_dynamicLoadout_F {
     vItemSpace = 100;
     conditions = "";
     price = 1600000;
     textures[] = {};

    };
	class C_Plane_Civil_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 150000;
     textures[] = {};

    };
	class C_Plane_Civil_01_racing_F {
     vItemSpace = 100;
     conditions = "";
     price = 175000;
     textures[] = {};

    };
	class O_Heli_Light_02_dynamicLoadout_F {
     vItemSpace = 100;
     conditions = "";
     price = 5000000;
     textures[] = {};

    };
	class O_Heli_Light_02_unarmed_F {
     vItemSpace = 100;
     conditions = "";
     price = 2500000;
     textures[] = {};

    };
	class O_T_VTOL_02_infantry_dynamicLoadout_F {
     vItemSpace = 100;
     conditions = "";
     price = 62000000;
     textures[] = {};

    };
	class O_T_VTOL_02_vehicle_dynamicLoadout_F {
     vItemSpace = 100;
     conditions = "";
     price = 67000000;
     textures[] = {};

    };
	class B_T_VTOL_01_infantry_F {
     vItemSpace = 100;
     conditions = "";
     price = 50000000;
     textures[] = {};

    };
	class B_T_VTOL_01_vehicle_F {
     vItemSpace = 100;
     conditions = "";
     price = 55000000;
     textures[] = {};

    };
	class B_T_VTOL_01_armed_F {
     vItemSpace = 100;
     conditions = "";
     price = 60000000;
     textures[] = {};

    };
	class B_Plane_CAS_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 20000000;
     textures[] = {};

    };
	class B_Heli_Light_01_armed_F {
     vItemSpace = 100;
     conditions = "";
     price = 1260000;
     textures[] = {};

    };
	class B_Heli_Light_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 1250000;
     textures[] = {};

    };
	class B_Heli_Transport_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 15000000;
     textures[] = {};

    };
	class B_Heli_Transport_03_F {
     vItemSpace = 100;
     conditions = "";
     price = 40000000;
     textures[] = {};

    };
	class B_Heli_Attack_01_dynamicLoadout_F {
     vItemSpace = 100;
     conditions = "";
     price = 30000000;
     textures[] = {};

    };
	class C_Heli_Light_01_civil_F {
     vItemSpace = 100;
     conditions = "";
     price = 1500000;
     textures[] = {};

    };
	class I_C_Plane_Civil_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 310000;
     textures[] = {};

    };
	class B_UAV_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 1500;
     textures[] = {};

    };
	class B_UGV_01_rcws_F {
     vItemSpace = 100;
     conditions = "";
     price = 250000;
     textures[] = {};

    };
	class B_UAV_02_dynamicLoadout_F {
     vItemSpace = 100;
     conditions = "";
     price = 2500000;
     textures[] = {};

    };
	class O_T_UAV_04_CAS_F {
     vItemSpace = 100;
     conditions = "";
     price = 3000000;
     textures[] = {};

    };
	class B_T_UAV_03_F {
     vItemSpace = 100;
     conditions = "";
     price = 4500000;
     textures[] = {};

    };
	class rhsusf_CHE53E_USMC {
     vItemSpace = 100;
     conditions = "";
     price = 25000000;
     textures[] = {};

    };
	class RHS_AH1Z {
     vItemSpace = 100;
     conditions = "";
     price = 31000000;
     textures[] = {};

    };
	class RHS_AH64D {
     vItemSpace = 100;
     conditions = "";
     price = 35000000;
     textures[] = {};

    };
	class RHS_UH60M_MEV_d {
     vItemSpace = 100;
     conditions = "";
     price = 10000000;
     textures[] = {};

    };
	class rhsgref_cdf_b_reg_Mi8amt {
     vItemSpace = 100;
     conditions = "";
     price = 12000000;
     textures[] = {};

    };
	class rhsusf_f22 {
     vItemSpace = 100;
     conditions = "";
     price = 150000000;
     textures[] = {};

    };
	class rhsgref_cdf_b_su25 {
     vItemSpace = 100;
     conditions = "";
     price = 25000000;
     textures[] = {};

    };
	
	// End Of Helicopters
	
	class B_Boat_Transport_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 20000;
     textures[] = {};

    };
	class B_Lifeboat {
     vItemSpace = 100;
     conditions = "";
     price = 2000;
     textures[] = {};

    };
	class B_Boat_Armed_01_minigun_F {
     vItemSpace = 100;
     conditions = "";
     price = 30000;
     textures[] = {};

    };	
	class B_SDV_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 12500;
     textures[] = {};

    };
	class C_Boat_Civil_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 10000;
     textures[] = {};

    };
	class C_Boat_Transport_02_F {
     vItemSpace = 100;
     conditions = "";
     price = 4000;
     textures[] = {};

    };
	class C_Scooter_Transport_01_F {
     vItemSpace = 100;
     conditions = "";
     price = 1500;
     textures[] = {};

    };
	class rhsusf_mkvsoc {
     vItemSpace = 100;
     conditions = "";
     price = 3700000;
     textures[] = {};

    };	
};
