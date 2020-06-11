#if defined _CB_Flags
    #endinput
#endif

#define _CB_Flags
#tryinclude < a_samp >

//#if !defined _INC_y_core
  //  #tryinclude < YSI_Server\y_scriptinit >
//#endif

#if !defined _INC_y_hooks
    #tryinclude < YSI_Coding\y_hooks >
#endif

#if defined _INC_y_hooks
    hook OnScriptInit()
    {
        print("============================================================================================================================");
        print("|                                                                                                                          |");
        print("|            Cluckin Bell flags loaded\nDeveloped by: Cluckin-bell\nV:0.1.0\nYSI ScriptInit & Hooks: Yes                   |");
        print("|                                                                                                                          |");
        print("============================================================================================================================");
        return 1;
    }
#else 
    #if defined FILTERSCRIPT
        public OnFilterScriptInit()
        {
            #if defined CB_OnFilterScriptInit
                CB_OnFilterScriptInit();
            #endif
            print("============================================================================================================================");
            print("|                                                                                                                          |");
            print("|  Cluckin Bell flags loaded\nDeveloped by: Cluckin-bell\nV:0.1.0\nYSI ScriptInit & Hooks: No\nUsed through: Filterscript  |");
            print("|                                                                                                                          |");
            print("============================================================================================================================");
            return 1;
        }
    #else 
        public OnGameModeInit()
        {
            #if defined CB_OnGameModeInit
                CB_OnGameModeInit();
            #endif
            print("============================================================================================================================");
            print("|                                                                                                                          |");
            print("|    Cluckin Bell flags loaded\nDeveloped by: Cluckin-bell\nV:0.1.0\nYSI ScriptInit & Hooks: No\nUsed through: Gamemode    |");
            print("|                                                                                                                          |");
            print("============================================================================================================================");
            return 1;
        }
    #endif
#endif

// --
// Flags and their sizes and types
// --

enum e_FLAGS
{
    E_FLAG_JAPAN = 1,
    E_FLAG_GERMANY, 
    E_FLAG_DUTCH
};

enum e_FLAG_SIZES
{
    E_FLAG_MINI = 1,
    E_FLAG_MEDIUM,
    E_FLAG_BIG,
    E_FLAG_OTHER
};

enum e_FLAG_TYPES
{
    E_FLAG_GLOBAL = 1,
    E_FLAG_PLAYER
};

static 
    Text:japaneseFlag[2],
    Text:germanyFlag[3];

// --
// Creates a flag textdraw with position and size.
// --

stock CB_CreateFlagForPlayer(playerid, flag, flagsize, flagtype, Float:posx, Float:posy)
{
    switch(flagsize)
    {
        case E_FLAG_MEDIUM:
        {
            switch(flagtype)
            {
                case E_FLAG_GLOBAL:
                {
                    switch(flag)
                    {
                        case E_FLAG_JAPAN:
                        { 
                            japaneseFlag[0] = TextDrawCreate(posx, posy, "box");
                            TextDrawLetterSize(japaneseFlag[0], 0.000000, 3.213020);
                            TextDrawTextSize(japaneseFlag[0], 0.000000, 40.409427);
                            TextDrawAlignment(japaneseFlag[0], 2);
                            TextDrawColor(japaneseFlag[0], -1);
                            TextDrawUseBox(japaneseFlag[0], 1);
                            TextDrawBoxColor(japaneseFlag[0], -1);
                            TextDrawSetShadow(japaneseFlag[0], 0);
                            TextDrawSetOutline(japaneseFlag[0], 0);
                            TextDrawBackgroundColor(japaneseFlag[0], 255);
                            TextDrawFont(japaneseFlag[0], 1);
                            TextDrawSetProportional(japaneseFlag[0], 1);
                            TextDrawSetShadow(japaneseFlag[0], 0);

                            japaneseFlag[1] = TextDrawCreate(posx - 8, posy + 5.070, "ld_pool:ball");
                            TextDrawLetterSize(japaneseFlag[1], 0.000000, 0.000000);
                            TextDrawTextSize(japaneseFlag[1], 18.000000, 20.000000);
                            TextDrawAlignment(japaneseFlag[1], 2);
                            TextDrawColor(japaneseFlag[1], -16776961);
                            TextDrawSetShadow(japaneseFlag[1], 0);
                            TextDrawSetOutline(japaneseFlag[1], 0);
                            TextDrawBackgroundColor(japaneseFlag[1], 255);
                            TextDrawFont(japaneseFlag[1], 4);
                            TextDrawSetProportional(japaneseFlag[1], 0);
                            TextDrawSetShadow(japaneseFlag[1], 0);

                            TextDrawShowForPlayer(playerid, japaneseFlag[0]), TextDrawShowForPlayer(playerid, japaneseFlag[1]);
                        }
                        case E_FLAG_GERMANY:
                        {
                            germanyFlag[0] = TextDrawCreate(286.386138, 191.099868, "box");
                            TextDrawLetterSize(germanyFlag[0], 0.000000, 0.750745);
                            TextDrawTextSize(germanyFlag[0], 0.000000, 41.000000);
                            TextDrawAlignment(germanyFlag[0], 2);
                            TextDrawColor(germanyFlag[0], -1);
                            TextDrawUseBox(germanyFlag[0], 1);
                            TextDrawBoxColor(germanyFlag[0], 0x000000FF);
                            TextDrawSetShadow(germanyFlag[0], 0);
                            TextDrawSetOutline(germanyFlag[0], 0);
                            TextDrawBackgroundColor(germanyFlag[0], 255);
                            TextDrawFont(germanyFlag[0], 1);
                            TextDrawSetProportional(germanyFlag[0], 1);
                            TextDrawSetShadow(germanyFlag[0], 0);

                            germanyFlag[1] = TextDrawCreate(286.588989, 201.217193, "box");
                            TextDrawLetterSize(germanyFlag[1], 0.000000, 0.715452);
                            TextDrawTextSize(germanyFlag[1], 0.000000, 41.000000);
                            TextDrawAlignment(germanyFlag[1], 2);
                            TextDrawColor(germanyFlag[1], -1);
                            TextDrawUseBox(germanyFlag[1], 1);
                            TextDrawBoxColor(germanyFlag[1], -16776961);
                            TextDrawSetShadow(germanyFlag[1], 0);
                            TextDrawSetOutline(germanyFlag[1], 0);
                            TextDrawBackgroundColor(germanyFlag[1], 255);
                            TextDrawFont(germanyFlag[1], 1);
                            TextDrawSetProportional(germanyFlag[1], 1);
                            TextDrawSetShadow(germanyFlag[1], 0);

                            germanyFlag[2] = TextDrawCreate(286.545074, 212.034149, "box");
                            TextDrawLetterSize(germanyFlag[2], 0.000000, 0.611895);
                            TextDrawTextSize(germanyFlag[2], 0.000000, 40.960006);
                            TextDrawAlignment(germanyFlag[2], 2);
                            TextDrawColor(germanyFlag[2], -65281);
                            TextDrawUseBox(germanyFlag[2], 1);
                            TextDrawBoxColor(germanyFlag[2], -65281);
                            TextDrawSetShadow(germanyFlag[2], 0);
                            TextDrawSetOutline(germanyFlag[2], 0);
                            TextDrawBackgroundColor(germanyFlag[2], 255);
                            TextDrawFont(germanyFlag[2], 1);
                            TextDrawSetProportional(germanyFlag[2], 1);
                            TextDrawSetShadow(germanyFlag[2], 0);
                            TextDrawShowForPlayer(playerid, germanyFlag[0]), TextDrawShowForPlayer(playerid, germanyFlag[1]), TextDrawShowForPlayer(playerid, germanyFlag[2]);
                        }
                    }
                }
            }
        }
    }
}

// --
// ALS OnGameModeInit
// --

#if defined _ALS_OnGameModeInit
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit CB_OnGameModeInit
#if defined CB_OnGameModeInit
    forward CB_OnGameModeInit();
#endif

// --
// ALS OnFilterScriptInit
// --

#if defined _ALS_OnFilterScriptInit
    #undef OnFilterScriptInit
#else
    #define _ALS_OnFilterScriptInit
#endif
#define OnFilterScriptInit CB_OnFilterScriptInit
#if defined CB_OnFilterScriptInit
    forward CB_OnFilterScriptInit();
#endif
