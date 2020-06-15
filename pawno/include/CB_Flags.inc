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
// Flags and their sizes
// --

enum e_FLAGS
{
    E_FLAG_JAPAN = 1,
    E_FLAG_GERMANY, 
    E_FLAG_DUTCH,
    E_FLAG_RUSSIAN, 
    E_FLAG_ESTONIAN,
    E_FLAG_AUSTRIAN,
    E_FLAG_HUNGARIAN

};

enum e_FLAG_SIZES
{
    E_FLAG_MINI = 1,
    E_FLAG_MEDIUM,
    E_FLAG_BIG,
    E_FLAG_OTHER
};

static 
    Text:japaneseFlag[2],
    Text:germanyFlag[3],
    Text:dutchFlag[3],
    Text:rusFlag[3],
    Text:estFlag[3],
    Text:ausFlag[3],
    Text:hunFlag[3];

// --
// Creates a flag textdraw with position and size.
// --

stock CB_CreateFlagForPlayer(playerid, flag, flagsize, Float:posx, Float:posy)
{
    switch(flagsize)
    {
        case E_FLAG_MEDIUM:
        {
            switch(flag)
            {
                case E_FLAG_JAPAN:
                { 
                    japaneseFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(japaneseFlag[0], 0.000000, 2.959833);
                    TextDrawTextSize(japaneseFlag[0], 0.000000, 41.099983);
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

                    japaneseFlag[1] = TextDrawCreate(posx - 7.227387, posy + 4.266586, "ld_pool:ball");
                    TextDrawLetterSize(japaneseFlag[1], 0.000000, 0.000000);
                    TextDrawTextSize(japaneseFlag[1], 16.009977, 18.000000);
                    TextDrawAlignment(japaneseFlag[1], 1);
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
                    germanyFlag[0] = TextDrawCreate(posx, posy, "box");
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

                    germanyFlag[1] = TextDrawCreate(posx, posy + 10.117325, "box");
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

                    germanyFlag[2] = TextDrawCreate(posx, posy + (10.117325*2), "box");
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
                case E_FLAG_DUTCH:
                {
                    dutchFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(dutchFlag[0], 0.000000, 0.750745);
                    TextDrawTextSize(dutchFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(dutchFlag[0], 2);
                    TextDrawColor(dutchFlag[0], -1);
                    TextDrawUseBox(dutchFlag[0], 1);
                    TextDrawBoxColor(dutchFlag[0], 0xAE1C28FF);
                    TextDrawSetShadow(dutchFlag[0], 0);
                    TextDrawSetOutline(dutchFlag[0], 0);
                    TextDrawBackgroundColor(dutchFlag[0], 255);
                    TextDrawFont(dutchFlag[0], 1);
                    TextDrawSetProportional(dutchFlag[0], 1);
                    TextDrawSetShadow(dutchFlag[0], 0);

                    dutchFlag[1] = TextDrawCreate(posx, posy + 10.117325, "box");
                    TextDrawLetterSize(dutchFlag[1], 0.000000, 0.715452);
                    TextDrawTextSize(dutchFlag[1], 0.000000, 41.000000);
                    TextDrawAlignment(dutchFlag[1], 2);
                    TextDrawColor(dutchFlag[1], -1);
                    TextDrawUseBox(dutchFlag[1], 1);
                    TextDrawBoxColor(dutchFlag[1], 0xFFFFFFFF);
                    TextDrawSetShadow(dutchFlag[1], 0);
                    TextDrawSetOutline(dutchFlag[1], 0);
                    TextDrawBackgroundColor(dutchFlag[1], 255);
                    TextDrawFont(dutchFlag[1], 1);
                    TextDrawSetProportional(dutchFlag[1], 1);
                    TextDrawSetShadow(dutchFlag[1], 0);

                    dutchFlag[2] = TextDrawCreate(posx, posy + (10.117325*2), "box");
                    TextDrawLetterSize(dutchFlag[2], 0.000000, 0.611895);
                    TextDrawTextSize(dutchFlag[2], 0.000000, 40.960006);
                    TextDrawAlignment(dutchFlag[2], 2);
                    TextDrawColor(dutchFlag[2], -65281);
                    TextDrawUseBox(dutchFlag[2], 1);
                    TextDrawBoxColor(dutchFlag[2], 0x21468BFF);
                    TextDrawSetShadow(dutchFlag[2], 0);
                    TextDrawSetOutline(dutchFlag[2], 0);
                    TextDrawBackgroundColor(dutchFlag[2], 255);
                    TextDrawFont(dutchFlag[2], 1);
                    TextDrawSetProportional(dutchFlag[2], 1);
                    TextDrawSetShadow(dutchFlag[2], 0);
                    
                    TextDrawShowForPlayer(playerid, dutchFlag[0]), TextDrawShowForPlayer(playerid, dutchFlag[1]), TextDrawShowForPlayer(playerid, dutchFlag[2]);
                }
                case E_FLAG_RUSSIAN:
                {
                    rusFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(rusFlag[0], 0.000000, 0.750745);
                    TextDrawTextSize(rusFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(rusFlag[0], 2);
                    TextDrawColor(rusFlag[0], -1);
                    TextDrawUseBox(rusFlag[0], 1);
                    TextDrawBoxColor(rusFlag[0], 0xFFFFFFFF);
                    TextDrawSetShadow(rusFlag[0], 0);
                    TextDrawSetOutline(rusFlag[0], 0);
                    TextDrawBackgroundColor(rusFlag[0], 255);
                    TextDrawFont(rusFlag[0], 1);
                    TextDrawSetProportional(rusFlag[0], 1);
                    TextDrawSetShadow(rusFlag[0], 0);

                    rusFlag[1] = TextDrawCreate(posx, posy + 10.117325, "box");
                    TextDrawLetterSize(rusFlag[1], 0.000000, 0.715452);
                    TextDrawTextSize(rusFlag[1], 0.000000, 41.000000);
                    TextDrawAlignment(rusFlag[1], 2);
                    TextDrawColor(rusFlag[1], -1);
                    TextDrawUseBox(rusFlag[1], 1);
                    TextDrawBoxColor(rusFlag[1], 0x0033A0FF);
                    TextDrawSetShadow(rusFlag[1], 0);
                    TextDrawSetOutline(rusFlag[1], 0);
                    TextDrawBackgroundColor(rusFlag[1], 255);
                    TextDrawFont(rusFlag[1], 1);
                    TextDrawSetProportional(rusFlag[1], 1);
                    TextDrawSetShadow(rusFlag[1], 0);

                    rusFlag[2] = TextDrawCreate(posx, posy + (10.117325*2), "box");
                    TextDrawLetterSize(rusFlag[2], 0.000000, 0.611895);
                    TextDrawTextSize(rusFlag[2], 0.000000, 40.960006);
                    TextDrawAlignment(rusFlag[2], 2);
                    TextDrawColor(rusFlag[2], -65281);
                    TextDrawUseBox(rusFlag[2], 1);
                    TextDrawBoxColor(rusFlag[2], 0xDA291CFF);
                    TextDrawSetShadow(rusFlag[2], 0);
                    TextDrawSetOutline(rusFlag[2], 0);
                    TextDrawBackgroundColor(rusFlag[2], 255);
                    TextDrawFont(rusFlag[2], 1);
                    TextDrawSetProportional(rusFlag[2], 1);
                    TextDrawSetShadow(rusFlag[2], 0);
                    
                    TextDrawShowForPlayer(playerid, rusFlag[0]), TextDrawShowForPlayer(playerid, rusFlag[1]), TextDrawShowForPlayer(playerid, rusFlag[2]);
                }
                case E_FLAG_ESTONIAN:
                {
                    estFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(estFlag[0], 0.000000, 0.750745);
                    TextDrawTextSize(estFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(estFlag[0], 2);
                    TextDrawColor(estFlag[0], -1);
                    TextDrawUseBox(estFlag[0], 1);
                    TextDrawBoxColor(estFlag[0], 0x0072CEFF);
                    TextDrawSetShadow(estFlag[0], 0);
                    TextDrawSetOutline(estFlag[0], 0);
                    TextDrawBackgroundColor(estFlag[0], 255);
                    TextDrawFont(estFlag[0], 1);
                    TextDrawSetProportional(estFlag[0], 1);
                    TextDrawSetShadow(estFlag[0], 0);

                    estFlag[1] = TextDrawCreate(posx, posy + 10.117325, "box");
                    TextDrawLetterSize(estFlag[1], 0.000000, 0.715452);
                    TextDrawTextSize(estFlag[1], 0.000000, 41.000000);
                    TextDrawAlignment(estFlag[1], 2);
                    TextDrawColor(estFlag[1], -1);
                    TextDrawUseBox(estFlag[1], 1);
                    TextDrawBoxColor(estFlag[1], 0x000000FF);
                    TextDrawSetShadow(estFlag[1], 0);
                    TextDrawSetOutline(estFlag[1], 0);
                    TextDrawBackgroundColor(estFlag[1], 255);
                    TextDrawFont(estFlag[1], 1);
                    TextDrawSetProportional(estFlag[1], 1);
                    TextDrawSetShadow(estFlag[1], 0);

                    estFlag[2] = TextDrawCreate(posx, posy + (10.117325*2), "box");
                    TextDrawLetterSize(estFlag[2], 0.000000, 0.611895);
                    TextDrawTextSize(estFlag[2], 0.000000, 40.960006);
                    TextDrawAlignment(estFlag[2], 2);
                    TextDrawColor(estFlag[2], -65281);
                    TextDrawUseBox(estFlag[2], 1);
                    TextDrawBoxColor(estFlag[2], 0xFFFFFFFF);
                    TextDrawSetShadow(estFlag[2], 0);
                    TextDrawSetOutline(estFlag[2], 0);
                    TextDrawBackgroundColor(estFlag[2], 255);
                    TextDrawFont(estFlag[2], 1);
                    TextDrawSetProportional(estFlag[2], 1);
                    TextDrawSetShadow(estFlag[2], 0);
                    
                    TextDrawShowForPlayer(playerid, estFlag[0]), TextDrawShowForPlayer(playerid, estFlag[1]), TextDrawShowForPlayer(playerid, estFlag[2]);
                }
                case E_FLAG_AUSTRIAN:
                {
                    ausFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(ausFlag[0], 0.000000, 0.750745);
                    TextDrawTextSize(ausFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(ausFlag[0], 2);
                    TextDrawColor(ausFlag[0], -1);
                    TextDrawUseBox(ausFlag[0], 1);
                    TextDrawBoxColor(ausFlag[0], 0xEF3340FF);
                    TextDrawSetShadow(ausFlag[0], 0);
                    TextDrawSetOutline(ausFlag[0], 0);
                    TextDrawBackgroundColor(ausFlag[0], 255);
                    TextDrawFont(ausFlag[0], 1);
                    TextDrawSetProportional(ausFlag[0], 1);
                    TextDrawSetShadow(ausFlag[0], 0);

                    ausFlag[1] = TextDrawCreate(posx, posy + 10.117325, "box");
                    TextDrawLetterSize(ausFlag[1], 0.000000, 0.715452);
                    TextDrawTextSize(ausFlag[1], 0.000000, 41.000000);
                    TextDrawAlignment(ausFlag[1], 2);
                    TextDrawColor(ausFlag[1], -1);
                    TextDrawUseBox(ausFlag[1], 1);
                    TextDrawBoxColor(ausFlag[1], 0xFFFFFFFF);
                    TextDrawSetShadow(ausFlag[1], 0);
                    TextDrawSetOutline(ausFlag[1], 0);
                    TextDrawBackgroundColor(ausFlag[1], 255);
                    TextDrawFont(ausFlag[1], 1);
                    TextDrawSetProportional(ausFlag[1], 1);
                    TextDrawSetShadow(ausFlag[1], 0);

                    ausFlag[2] = TextDrawCreate(posx, posy + (10.117325*2), "box");
                    TextDrawLetterSize(ausFlag[2], 0.000000, 0.611895);
                    TextDrawTextSize(ausFlag[2], 0.000000, 40.960006);
                    TextDrawAlignment(ausFlag[2], 2);
                    TextDrawColor(ausFlag[2], -65281);
                    TextDrawUseBox(ausFlag[2], 1);
                    TextDrawBoxColor(ausFlag[2], 0xEF3340FF);
                    TextDrawSetShadow(ausFlag[2], 0);
                    TextDrawSetOutline(ausFlag[2], 0);
                    TextDrawBackgroundColor(ausFlag[2], 255);
                    TextDrawFont(ausFlag[2], 1);
                    TextDrawSetProportional(ausFlag[2], 1);
                    TextDrawSetShadow(ausFlag[2], 0);
                    
                    TextDrawShowForPlayer(playerid, ausFlag[0]), TextDrawShowForPlayer(playerid, ausFlag[1]), TextDrawShowForPlayer(playerid, ausFlag[2]);
                }
                case E_FLAG_HUNGARIAN:
                {
                    hunFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(hunFlag[0], 0.000000, 0.750745);
                    TextDrawTextSize(hunFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(hunFlag[0], 2);
                    TextDrawColor(hunFlag[0], -1);
                    TextDrawUseBox(hunFlag[0], 1);
                    TextDrawBoxColor(hunFlag[0], 0xC8102EFF);
                    TextDrawSetShadow(hunFlag[0], 0);
                    TextDrawSetOutline(hunFlag[0], 0);
                    TextDrawBackgroundColor(hunFlag[0], 255);
                    TextDrawFont(hunFlag[0], 1);
                    TextDrawSetProportional(hunFlag[0], 1);
                    TextDrawSetShadow(hunFlag[0], 0);

                    hunFlag[1] = TextDrawCreate(posx, posy + 10.117325, "box");
                    TextDrawLetterSize(hunFlag[1], 0.000000, 0.715452);
                    TextDrawTextSize(hunFlag[1], 0.000000, 41.000000);
                    TextDrawAlignment(hunFlag[1], 2);
                    TextDrawColor(hunFlag[1], -1);
                    TextDrawUseBox(hunFlag[1], 1);
                    TextDrawBoxColor(hunFlag[1], 0xFFFFFFFF);
                    TextDrawSetShadow(hunFlag[1], 0);
                    TextDrawSetOutline(hunFlag[1], 0);
                    TextDrawBackgroundColor(hunFlag[1], 255);
                    TextDrawFont(hunFlag[1], 1);
                    TextDrawSetProportional(hunFlag[1], 1);
                    TextDrawSetShadow(hunFlag[1], 0);

                    hunFlag[2] = TextDrawCreate(posx, posy + (10.117325*2), "box");
                    TextDrawLetterSize(hunFlag[2], 0.000000, 0.611895);
                    TextDrawTextSize(hunFlag[2], 0.000000, 40.960006);
                    TextDrawAlignment(hunFlag[2], 2);
                    TextDrawColor(hunFlag[2], -65281);
                    TextDrawUseBox(hunFlag[2], 1);
                    TextDrawBoxColor(hunFlag[2], 0x00843DFF);
                    TextDrawSetShadow(hunFlag[2], 0);
                    TextDrawSetOutline(hunFlag[2], 0);
                    TextDrawBackgroundColor(hunFlag[2], 255);
                    TextDrawFont(hunFlag[2], 1);
                    TextDrawSetProportional(hunFlag[2], 1);
                    TextDrawSetShadow(hunFlag[2], 0);
                    
                    TextDrawShowForPlayer(playerid, hunFlag[0]), TextDrawShowForPlayer(playerid, hunFlag[1]), TextDrawShowForPlayer(playerid, hunFlag[2]);
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
