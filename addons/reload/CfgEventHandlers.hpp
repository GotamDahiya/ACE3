
class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILESCRIPT_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILESCRIPT_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILESCRIPT_FILE(XEH_postInit));
    };
};

class Extended_Take_EventHandlers {
    class CAManBase {
        class ACE_AmmoIndicatorReload {
            clientTake = QUOTE(_this call FUNC(onTake));
        };
    };
};
