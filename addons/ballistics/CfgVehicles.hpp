
class CfgVehicles {
    class Sign_F;
    class ACE_TargetWall: Sign_F {
        author = "$STR_ACE_Common_ACETeam";
        scope = 0;
        class Eventhandlers {
            init = QUOTE(_this call COMPILE_FILE(scripts\initTargetWall));
            //hitPart = "systemChat str _this";
        };
    };
    
    class NATO_Box_Base;
    class Box_NATO_Wps_F: NATO_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x47_Scenar_mag,4);
        };
    };

    class Box_NATO_WpsSpecial_F: NATO_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x39_caseless_mag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_100Rnd_65x39_caseless_mag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_200Rnd_65x39_cased_Box_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Tracer_Dim,1);
            MACRO_ADDMAGAZINE(ACE_10Rnd_338_300gr_HPBT_Mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_338_API526_Mag,4);
            MACRO_ADDMAGAZINE(ACE_5Rnd_127x99_Mag,4);
            MACRO_ADDMAGAZINE(ACE_5Rnd_127x99_AMAX_Mag,4);
        };
    };

    class Box_NATO_Ammo_F: NATO_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x47_Scenar_mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_762x51_M118LR_Mag,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_M118LR_Mag,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_Mag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_338_300gr_HPBT_Mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_338_API526_Mag,4);
            MACRO_ADDMAGAZINE(ACE_5Rnd_127x99_Mag,4);
            MACRO_ADDMAGAZINE(ACE_5Rnd_127x99_AMAX_Mag,4);
        };
    };

    class Box_NATO_Support_F: NATO_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_10Rnd_762x51_M118LR_Mag,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_M118LR_Mag,6);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_Mag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_Mag_SD,3);
            MACRO_ADDMAGAZINE(ACE_10Rnd_338_300gr_HPBT_Mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_338_API526_Mag,4);
            MACRO_ADDMAGAZINE(ACE_5Rnd_127x99_Mag,4);
            MACRO_ADDMAGAZINE(ACE_5Rnd_127x99_AMAX_Mag,4);
        };
    };

    class ReammoBox_F;
    class B_supplyCrate_F: ReammoBox_F {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x47_Scenar_mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_762x51_M118LR_Mag,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_M118LR_Mag,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_Mag_Tracer_Dim,4);
        };
    };

    class EAST_Box_Base;
    class Box_East_Wps_F: EAST_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x47_Scenar_mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_762x54_Tracer_mag,4);
        };
    };

    class Box_East_WpsSpecial_F: EAST_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Tracer_Dim,1);
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x47_Scenar_mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_762x54_Tracer_mag,4);
        };
    };

    class Box_East_Ammo_F: EAST_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x47_Scenar_mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_762x54_Tracer_mag,4);
        };
    };

    class Box_East_Support_F: EAST_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x47_Scenar_mag,6);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_Mag_SD,3);
            MACRO_ADDMAGAZINE(ACE_10Rnd_762x54_Tracer_mag,4);
        };
    };

    class IND_Box_Base;
    class Box_IND_Wps_F: IND_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk318_mag,4);
        };
    };

    class Box_IND_WpsSpecial_F: IND_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Tracer_Dim,4);
        };
    };

    class Box_IND_Ammo_F: IND_Box_Base {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk318_mag,4);
        };
    };

    class FIA_Box_Base_F;
    class Box_FIA_Wps_F: FIA_Box_Base_F {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk318_mag,4);
        };
    };

    class Box_FIA_Ammo_F: FIA_Box_Base_F {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk318_mag,4);
        };
    };

    class I_supplyCrate_F: B_supplyCrate_F {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk318_mag,4);
        };
    };

    class IG_supplyCrate_F: ReammoBox_F {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk318_mag,4);
        };
    };

    class C_supplyCrate_F: ReammoBox_F {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x47_Scenar_mag,4);
        };
    };

    class ACE_Box_Misc: Box_NATO_Support_F {
        class TransportMagazines {
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_Mag_SD,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_M118LR_Mag,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x51_Mag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x67_Mk248_Mod_0_Mag,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x67_Mk248_Mod_1_Mag,4);
            MACRO_ADDMAGAZINE(ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_762x54_Tracer_mag,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk262_mag,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Mk318_mag,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_556x45_Stanag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x39_caseless_mag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_100Rnd_65x39_caseless_mag_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_200Rnd_65x39_cased_Box_Tracer_Dim,4);
            MACRO_ADDMAGAZINE(ACE_30Rnd_65x47_Scenar_mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_338_300gr_HPBT_Mag,4);
            MACRO_ADDMAGAZINE(ACE_10Rnd_338_API526_Mag,4);
            MACRO_ADDMAGAZINE(ACE_5Rnd_127x99_Mag,4);
            MACRO_ADDMAGAZINE(ACE_5Rnd_127x99_AMAX_Mag,4);
        };
    };
};
