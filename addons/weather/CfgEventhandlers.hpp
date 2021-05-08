
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
        serverInit = QUOTE(call COMPILESCRIPT_FILE(XEH_PostServerInit));
        init = QUOTE(call COMPILESCRIPT_FILE(XEH_postInit));
    };
};

class Extended_DisplayLoad_EventHandlers {
    class Display3DEN {
        ADDON = QUOTE(call COMPILESCRIPT_FILE(init3DEN));
    };
};
