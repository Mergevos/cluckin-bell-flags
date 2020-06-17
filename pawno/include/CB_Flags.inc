/** 
    @ Author: Cluckin-bell (Unkovic && Emmett White)
    @ Date: 16th June
    @ Git: github.com/Cluckin-Bell/cluckin-bell-flags
    @ Copyright (C) 2020
    @ About:
    	- This include gives you access to 20+ flags, updated every day
**/
 
#if defined _CB_Flags
    #endinput
#endif

#define _CB_Flags
#tryinclude < a_samp >

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
    E_FLAG_HUNGARIAN,
    E_FLAG_LITHUANIA,
    E_FLAG_LUXEMBOURG,
    E_FLAG_BULGARIAN,
    E_FLAG_GREEK,
    E_FLAG_POLAND,
    E_FLAG_LATVIAN,
    E_FLAG_FRANCE,
    E_FLAG_ITALY,
    E_FLAG_ROMANIAN,
    E_FLAG_BELGIAN,
    E_FLAG_DENMARK,
    E_FLAG_SWEDEN

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
    Text:hunFlag[3],
    Text:litFlag[3],
    Text:luxFlag[3],
    Text:bulFlag[3],
    Text:grcFlag[8],
    Text:polFlag[2],
    Text:latFlag[2],
    Text:itaFlag[3],
    Text:fraFlag[3],
    Text:romFlag[3],
    Text:belFlag[3],
    Text:sweFlag[3],
    Text:denFlag[3];

// -- 
// <summary> Destroys the specified flag </summary>
// --

#if defined FILTERSCRIPT
    public OnFilterScriptInit()
    {
        #if defined CB_OnFilterScriptInit
            CB_OnFilterScriptInit();
        #endif
        print("===================================================================");
        print("|                                                                 |");
        print("|                 Cluckin Bell flags loaded                       |");
        print("|                Developed by:  Cluckin-bell                      |");
        print("|                     Version: 0.1.2                              |");
        print("|                Used through: Filterscript                       |");
        print("|                                                                 |");
        print("===================================================================");
        return 1;
    }
#else 
    public OnGameModeInit()
    {
        #if defined CB_OnGameModeInit
            CB_OnGameModeInit();
        #endif
        print("===================================================================");
        print("|                                                                 |");
        print("|                 Cluckin Bell flags loaded                       |");
        print("|                Developed by:  Cluckin-bell                      |");
        print("|                     Version: 0.1.2                              |");
        print("|                  Used through: Gamemode                         |");
        print("|                                                                 |");
        print("===================================================================");
        return 1;
    }
#endif


stock CB_HideFlagForPlayer(playerid, flag, flagsize)
{
    switch(flagsize)
    {
        case E_FLAG_MEDIUM:
        {
            switch(flag)
            {
                case E_FLAG_JAPAN:
                { 
                    TextDrawHideForPlayer(playerid, japaneseFlag[0]), TextDrawHideForPlayer(playerid, japaneseFlag[1]);
                }
                case E_FLAG_GERMANY:
                {
                    TextDrawHideForPlayer(playerid, germanyFlag[0]), TextDrawHideForPlayer(playerid, germanyFlag[1]), TextDrawHideForPlayer(playerid, germanyFlag[2]);
                }
                case E_FLAG_DUTCH:
                {
                    TextDrawHideForPlayer(playerid, dutchFlag[0]), TextDrawHideForPlayer(playerid, dutchFlag[1]), TextDrawHideForPlayer(playerid, dutchFlag[2]);
                }
                case E_FLAG_RUSSIAN:
                {
                    TextDrawHideForPlayer(playerid, rusFlag[0]), TextDrawHideForPlayer(playerid, rusFlag[1]), TextDrawHideForPlayer(playerid, rusFlag[2]);
                }
                case E_FLAG_ESTONIAN:
                {
                    TextDrawHideForPlayer(playerid, estFlag[0]), TextDrawHideForPlayer(playerid, estFlag[1]), TextDrawHideForPlayer(playerid, estFlag[2]);
                }
                case E_FLAG_AUSTRIAN:
                {
                    TextDrawHideForPlayer(playerid, ausFlag[0]), TextDrawHideForPlayer(playerid, ausFlag[1]), TextDrawHideForPlayer(playerid, ausFlag[2]);
                }
                case E_FLAG_HUNGARIAN:
                {
                    TextDrawHideForPlayer(playerid, hunFlag[0]), TextDrawHideForPlayer(playerid, hunFlag[1]), TextDrawHideForPlayer(playerid, hunFlag[2]);
                }
                case E_FLAG_LITHUANIA:
                {
                    TextDrawHideForPlayer(playerid, litFlag[0]), TextDrawHideForPlayer(playerid, litFlag[1]), TextDrawHideForPlayer(playerid, litFlag[2]);
                }
                case E_FLAG_LUXEMBOURG:
                {
                    TextDrawHideForPlayer(playerid, luxFlag[0]), TextDrawHideForPlayer(playerid, luxFlag[1]), TextDrawHideForPlayer(playerid, luxFlag[2]);
                }
                case E_FLAG_BULGARIAN:
                {
                    TextDrawHideForPlayer(playerid, bulFlag[0]), TextDrawHideForPlayer(playerid, bulFlag[1]), TextDrawHideForPlayer(playerid, bulFlag[2]);
                }
                case E_FLAG_GREEK:
                {
                    TextDrawHideForPlayer(playerid, grcFlag[0]), TextDrawHideForPlayer(playerid, grcFlag[1]), TextDrawHideForPlayer(playerid, grcFlag[2]);
                    TextDrawHideForPlayer(playerid, grcFlag[3]), TextDrawHideForPlayer(playerid, grcFlag[4]), TextDrawHideForPlayer(playerid, grcFlag[5]);
                    TextDrawHideForPlayer(playerid, grcFlag[6]), TextDrawHideForPlayer(playerid, grcFlag[7]);
                }
                case E_FLAG_POLAND:
                {
                    TextDrawHideForPlayer(playerid, polFlag[0]), TextDrawHideForPlayer(playerid, polFlag[1]);
                }
                case E_FLAG_LATVIAN:
                {
                    TextDrawHideForPlayer(playerid, latFlag[0]), TextDrawHideForPlayer(playerid, latFlag[1]);
                }
                case E_FLAG_FRANCE:
                {
                    TextDrawHideForPlayer(playerid, fraFlag[0]), TextDrawHideForPlayer(playerid, fraFlag[1]), TextDrawHideForPlayer(playerid, fraFlag[2]);
                }
                case E_FLAG_ITALY:
                {
                    TextDrawHideForPlayer(playerid, itaFlag[0]), TextDrawHideForPlayer(playerid, itaFlag[1]), TextDrawHideForPlayer(playerid, itaFlag[2]);
                }
                case E_FLAG_ROMANIAN:
                {
                    TextDrawHideForPlayer(playerid, romFlag[0]), TextDrawHideForPlayer(playerid, romFlag[1]), TextDrawHideForPlayer(playerid, romFlag[2]);
                }
                case E_FLAG_BELGIAN:
                {
                    TextDrawHideForPlayer(playerid, belFlag[0]), TextDrawHideForPlayer(playerid, belFlag[1]), TextDrawHideForPlayer(playerid, belFlag[2]);
                }
                case E_FLAG_SWEDEN:
                {
                    TextDrawHideForPlayer(playerid, sweFlag[0]), TextDrawHideForPlayer(playerid, sweFlag[1]), TextDrawHideForPlayer(playerid, sweFlag[2]);
                } 
                case E_FLAG_DENMARK:
                {
                    TextDrawHideForPlayer(playerid, denFlag[0]), TextDrawHideForPlayer(playerid, denFlag[1]), TextDrawHideForPlayer(playerid, denFlag[2]);
                } 
            }
        }
    }
}

// --
// <summary>Creates a flag textdraw with position and size.</summary>
// --

stock CB_ShowFlagForPlayer(playerid, flag, flagsize)
{
    switch(flagsize)
    {
        case E_FLAG_MEDIUM:
        {
            switch(flag)
            {
                case E_FLAG_JAPAN:
                {                     
                    TextDrawShowForPlayer(playerid, japaneseFlag[0]), TextDrawShowForPlayer(playerid, japaneseFlag[1]);
                }
                case E_FLAG_GERMANY:
                {
                    TextDrawShowForPlayer(playerid, germanyFlag[0]), TextDrawShowForPlayer(playerid, germanyFlag[1]), TextDrawShowForPlayer(playerid, germanyFlag[2]);
                }   
                case E_FLAG_DUTCH:
                {
                    TextDrawShowForPlayer(playerid, dutchFlag[0]), TextDrawShowForPlayer(playerid, dutchFlag[1]), TextDrawShowForPlayer(playerid, dutchFlag[2]);
                }  
                case E_FLAG_RUSSIAN:
                {
                    TextDrawShowForPlayer(playerid, rusFlag[0]), TextDrawShowForPlayer(playerid, rusFlag[1]), TextDrawShowForPlayer(playerid, rusFlag[2]);
                }   
                case E_FLAG_ESTONIAN:
                {
                    TextDrawShowForPlayer(playerid, estFlag[0]), TextDrawShowForPlayer(playerid, estFlag[1]), TextDrawShowForPlayer(playerid, estFlag[2]);
                }
                case E_FLAG_AUSTRIAN:
                {
                    TextDrawShowForPlayer(playerid, ausFlag[0]), TextDrawShowForPlayer(playerid, ausFlag[1]), TextDrawShowForPlayer(playerid, ausFlag[2]);
                }
                case E_FLAG_HUNGARIAN:
                {
                    TextDrawShowForPlayer(playerid, hunFlag[0]), TextDrawShowForPlayer(playerid, hunFlag[1]), TextDrawShowForPlayer(playerid, hunFlag[2]);
                }
                case E_FLAG_LITHUANIA:
                {
                    TextDrawShowForPlayer(playerid, litFlag[0]), TextDrawShowForPlayer(playerid, litFlag[1]), TextDrawShowForPlayer(playerid, litFlag[2]);
                }
                case E_FLAG_LUXEMBOURG:
                {
                    TextDrawShowForPlayer(playerid, luxFlag[0]), TextDrawShowForPlayer(playerid, luxFlag[1]), TextDrawShowForPlayer(playerid, luxFlag[2]);
                }
                case E_FLAG_BULGARIAN:
                {
                    TextDrawShowForPlayer(playerid, bulFlag[0]), TextDrawShowForPlayer(playerid, bulFlag[1]), TextDrawShowForPlayer(playerid, bulFlag[2]);
                }
                case E_FLAG_GREEK:
                {
                    TextDrawShowForPlayer(playerid, grcFlag[0]), TextDrawShowForPlayer(playerid, grcFlag[1]), TextDrawShowForPlayer(playerid, grcFlag[2]);
                    TextDrawShowForPlayer(playerid, grcFlag[3]), TextDrawShowForPlayer(playerid, grcFlag[4]), TextDrawShowForPlayer(playerid, grcFlag[5]);
                    TextDrawShowForPlayer(playerid, grcFlag[6]), TextDrawShowForPlayer(playerid, grcFlag[7]);
                }
                case E_FLAG_POLAND:
                {
                    TextDrawShowForPlayer(playerid, polFlag[0]), TextDrawShowForPlayer(playerid, polFlag[1]);
                }
                case E_FLAG_LATVIAN:
                {
                    TextDrawShowForPlayer(playerid, latFlag[0]), TextDrawShowForPlayer(playerid, latFlag[1]);
                }
                case E_FLAG_FRANCE:
                {              
                    TextDrawShowForPlayer(playerid, fraFlag[0]), TextDrawShowForPlayer(playerid, fraFlag[1]), TextDrawShowForPlayer(playerid, fraFlag[2]);
                }
                case E_FLAG_ITALY:
                {
                    TextDrawShowForPlayer(playerid, itaFlag[0]), TextDrawShowForPlayer(playerid, itaFlag[1]), TextDrawShowForPlayer(playerid, itaFlag[2]);
                }
                case E_FLAG_ROMANIAN:
                {
                    TextDrawShowForPlayer(playerid, romFlag[0]), TextDrawShowForPlayer(playerid, romFlag[1]), TextDrawShowForPlayer(playerid, romFlag[2]);
                }
                case E_FLAG_BELGIAN:
                {
                    TextDrawShowForPlayer(playerid, belFlag[0]), TextDrawShowForPlayer(playerid, belFlag[1]), TextDrawShowForPlayer(playerid, belFlag[2]);
                }
                case E_FLAG_SWEDEN:
                {
                    TextDrawShowForPlayer(playerid, sweFlag[0]), TextDrawShowForPlayer(playerid, sweFlag[1]), TextDrawShowForPlayer(playerid, sweFlag[2]);
                }
                case E_FLAG_DENMARK:
                {
                    TextDrawShowForPlayer(playerid, denFlag[0]), TextDrawShowForPlayer(playerid, denFlag[1]), TextDrawShowForPlayer(playerid, denFlag[2]);
                }
            }
        }
    }
}
                          
// --
// <summary>Creates a flag textdraw with position and size.</summary>
// --

stock CB_CreateFlag(flag, flagsize, Float:posx, Float:posy)
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
                }
                case E_FLAG_LITHUANIA:
                {
                    litFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(litFlag[0], 0.000000, 0.750745);
                    TextDrawTextSize(litFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(litFlag[0], 2);
                    TextDrawColor(litFlag[0], -1);
                    TextDrawUseBox(litFlag[0], 1);
                    TextDrawBoxColor(litFlag[0], 0xFDB913FF);
                    TextDrawSetShadow(litFlag[0], 0);
                    TextDrawSetOutline(litFlag[0], 0);
                    TextDrawBackgroundColor(litFlag[0], 255);
                    TextDrawFont(litFlag[0], 1);
                    TextDrawSetProportional(litFlag[0], 1);
                    TextDrawSetShadow(litFlag[0], 0);

                    litFlag[1] = TextDrawCreate(posx, posy + 10.117325, "box");
                    TextDrawLetterSize(litFlag[1], 0.000000, 0.715452);
                    TextDrawTextSize(litFlag[1], 0.000000, 41.000000);
                    TextDrawAlignment(litFlag[1], 2);
                    TextDrawColor(litFlag[1], -1);
                    TextDrawUseBox(litFlag[1], 1);
                    TextDrawBoxColor(litFlag[1], 0x006A44FF);
                    TextDrawSetShadow(litFlag[1], 0);
                    TextDrawSetOutline(litFlag[1], 0);
                    TextDrawBackgroundColor(litFlag[1], 255);
                    TextDrawFont(litFlag[1], 1);
                    TextDrawSetProportional(litFlag[1], 1);
                    TextDrawSetShadow(litFlag[1], 0);

                    litFlag[2] = TextDrawCreate(posx, posy + (10.117325*2), "box");
                    TextDrawLetterSize(litFlag[2], 0.000000, 0.611895);
                    TextDrawTextSize(litFlag[2], 0.000000, 40.960006);
                    TextDrawAlignment(litFlag[2], 2);
                    TextDrawColor(litFlag[2], -65281);
                    TextDrawUseBox(litFlag[2], 1);
                    TextDrawBoxColor(litFlag[2], 0xC1272DFF);
                    TextDrawSetShadow(litFlag[2], 0);
                    TextDrawSetOutline(litFlag[2], 0);
                    TextDrawBackgroundColor(litFlag[2], 255);
                    TextDrawFont(litFlag[2], 1);
                    TextDrawSetProportional(litFlag[2], 1);
                    TextDrawSetShadow(litFlag[2], 0);
                    
                    
                }
                case E_FLAG_LUXEMBOURG:
                {
                    luxFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(luxFlag[0], 0.000000, 0.750745);
                    TextDrawTextSize(luxFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(luxFlag[0], 2);
                    TextDrawColor(luxFlag[0], -1);
                    TextDrawUseBox(luxFlag[0], 1);
                    TextDrawBoxColor(luxFlag[0], 0xF6343FFF);
                    TextDrawSetShadow(luxFlag[0], 0);
                    TextDrawSetOutline(luxFlag[0], 0);
                    TextDrawBackgroundColor(luxFlag[0], 255);
                    TextDrawFont(luxFlag[0], 1);
                    TextDrawSetProportional(luxFlag[0], 1);
                    TextDrawSetShadow(luxFlag[0], 0);

                    luxFlag[1] = TextDrawCreate(posx, posy + 10.117325, "box");
                    TextDrawLetterSize(luxFlag[1], 0.000000, 0.715452);
                    TextDrawTextSize(luxFlag[1], 0.000000, 41.000000);
                    TextDrawAlignment(luxFlag[1], 2);
                    TextDrawColor(luxFlag[1], -1);
                    TextDrawUseBox(luxFlag[1], 1);
                    TextDrawBoxColor(luxFlag[1], 0xFFFFFFFF);
                    TextDrawSetShadow(luxFlag[1], 0);
                    TextDrawSetOutline(luxFlag[1], 0);
                    TextDrawBackgroundColor(luxFlag[1], 255);
                    TextDrawFont(luxFlag[1], 1);
                    TextDrawSetProportional(luxFlag[1], 1);
                    TextDrawSetShadow(luxFlag[1], 0);

                    luxFlag[2] = TextDrawCreate(posx, posy + (10.117325*2), "box");
                    TextDrawLetterSize(luxFlag[2], 0.000000, 0.611895);
                    TextDrawTextSize(luxFlag[2], 0.000000, 40.960006);
                    TextDrawAlignment(luxFlag[2], 2);
                    TextDrawColor(luxFlag[2], -65281);
                    TextDrawUseBox(luxFlag[2], 1);
                    TextDrawBoxColor(luxFlag[2], 0x00A2E1FF);
                    TextDrawSetShadow(luxFlag[2], 0);
                    TextDrawSetOutline(luxFlag[2], 0);
                    TextDrawBackgroundColor(luxFlag[2], 255);
                    TextDrawFont(luxFlag[2], 1);
                    TextDrawSetProportional(luxFlag[2], 1);
                    TextDrawSetShadow(luxFlag[2], 0);
                    
                }
                case E_FLAG_BULGARIAN:
                {
                    bulFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(bulFlag[0], 0.000000, 0.750745);
                    TextDrawTextSize(bulFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(bulFlag[0], 2);
                    TextDrawColor(bulFlag[0], -1);
                    TextDrawUseBox(bulFlag[0], 1);
                    TextDrawBoxColor(bulFlag[0], 0xFFFFFFFF);
                    TextDrawSetShadow(bulFlag[0], 0);
                    TextDrawSetOutline(bulFlag[0], 0);
                    TextDrawBackgroundColor(bulFlag[0], 255);
                    TextDrawFont(bulFlag[0], 1);
                    TextDrawSetProportional(bulFlag[0], 1);
                    TextDrawSetShadow(bulFlag[0], 0);

                    bulFlag[1] = TextDrawCreate(posx, posy + 10.117325, "box");
                    TextDrawLetterSize(bulFlag[1], 0.000000, 0.715452);
                    TextDrawTextSize(bulFlag[1], 0.000000, 41.000000);
                    TextDrawAlignment(bulFlag[1], 2);
                    TextDrawColor(bulFlag[1], -1);
                    TextDrawUseBox(bulFlag[1], 1);
                    TextDrawBoxColor(bulFlag[1], 0x00966EFF);
                    TextDrawSetShadow(bulFlag[1], 0);
                    TextDrawSetOutline(bulFlag[1], 0);
                    TextDrawBackgroundColor(bulFlag[1], 255);
                    TextDrawFont(bulFlag[1], 1);
                    TextDrawSetProportional(bulFlag[1], 1);
                    TextDrawSetShadow(bulFlag[1], 0);

                    bulFlag[2] = TextDrawCreate(posx, posy + (10.117325*2), "box");
                    TextDrawLetterSize(bulFlag[2], 0.000000, 0.611895);
                    TextDrawTextSize(bulFlag[2], 0.000000, 40.960006);
                    TextDrawAlignment(bulFlag[2], 2);
                    TextDrawColor(bulFlag[2], -65281);
                    TextDrawUseBox(bulFlag[2], 1);
                    TextDrawBoxColor(bulFlag[2], 0xD62612FF);
                    TextDrawSetShadow(bulFlag[2], 0);
                    TextDrawSetOutline(bulFlag[2], 0);
                    TextDrawBackgroundColor(bulFlag[2], 255);
                    TextDrawFont(bulFlag[2], 1);
                    TextDrawSetProportional(bulFlag[2], 1);
                    TextDrawSetShadow(bulFlag[2], 0);
                }
                case E_FLAG_GREEK:
                {
                    grcFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(grcFlag[0], 0.000000, 2.989181);
                    TextDrawTextSize(grcFlag[0], 0.000000, 41.000167);
                    TextDrawAlignment(grcFlag[0], 2);
                    TextDrawColor(grcFlag[0], -1);
                    TextDrawUseBox(grcFlag[0], 1);
                    TextDrawBoxColor(grcFlag[0], 0x0D5EAFFF);
                    TextDrawSetShadow(grcFlag[0], 0);
                    TextDrawSetOutline(grcFlag[0], 0);
                    TextDrawBackgroundColor(grcFlag[0], 255);
                    TextDrawFont(grcFlag[0], 1);
                    TextDrawSetProportional(grcFlag[0], 1);
                    TextDrawSetShadow(grcFlag[0], 0);

                    grcFlag[1] = TextDrawCreate(posx, posy + 11.215577, "box");
                    TextDrawLetterSize(grcFlag[1], 0.000000, -0.152110);
                    TextDrawTextSize(grcFlag[1], 0.000000, 41.000000);
                    TextDrawAlignment(grcFlag[1], 2);
                    TextDrawColor(grcFlag[1], -1);
                    TextDrawUseBox(grcFlag[1], 1);
                    TextDrawBoxColor(grcFlag[1], -1);
                    TextDrawSetShadow(grcFlag[1], 0);
                    TextDrawSetOutline(grcFlag[1], 0);
                    TextDrawBackgroundColor(grcFlag[1], 255);
                    TextDrawFont(grcFlag[1], 1);
                    TextDrawSetProportional(grcFlag[1], 1);
                    TextDrawSetShadow(grcFlag[1], 0);

                    grcFlag[2] = TextDrawCreate(posx, posy + 11.215577 + 6.900421, "box");
                    TextDrawLetterSize(grcFlag[2], 0.000000, -0.152110);
                    TextDrawTextSize(grcFlag[2], 0.000000, 41.000000);
                    TextDrawAlignment(grcFlag[2], 2);
                    TextDrawColor(grcFlag[2], -1);
                    TextDrawUseBox(grcFlag[2], 1);
                    TextDrawBoxColor(grcFlag[2], -1);
                    TextDrawSetShadow(grcFlag[2], 0);
                    TextDrawSetOutline(grcFlag[2], 0);
                    TextDrawBackgroundColor(grcFlag[2], 255);
                    TextDrawFont(grcFlag[2], 1);
                    TextDrawSetProportional(grcFlag[2], 1);
                    TextDrawSetShadow(grcFlag[2], 0);

                    grcFlag[3] = TextDrawCreate(posx, posy + 11.215577 + 6.900421 + 6.683679, "box");
                    TextDrawLetterSize(grcFlag[3], 0.000000, -0.152110);
                    TextDrawTextSize(grcFlag[3], 0.000000, 41.000000);
                    TextDrawAlignment(grcFlag[3], 2);
                    TextDrawColor(grcFlag[3], -1);
                    TextDrawUseBox(grcFlag[3], 1);
                    TextDrawBoxColor(grcFlag[3], -1);
                    TextDrawSetShadow(grcFlag[3], 0);
                    TextDrawSetOutline(grcFlag[3], 0);
                    TextDrawBackgroundColor(grcFlag[3], 255);
                    TextDrawFont(grcFlag[3], 1);
                    TextDrawSetProportional(grcFlag[3], 1);
                    TextDrawSetShadow(grcFlag[3], 0);

                    grcFlag[4] = TextDrawCreate(posx, posy + 11.215577 + 6.900421 + 6.683679 - 20.384536, "box");
                    TextDrawLetterSize(grcFlag[4], 0.000000, -0.152110);
                    TextDrawTextSize(grcFlag[4], 0.000000, 41.000000);
                    TextDrawAlignment(grcFlag[4], 2);
                    TextDrawColor(grcFlag[4], -1);
                    TextDrawUseBox(grcFlag[4], 1);
                    TextDrawBoxColor(grcFlag[4], -1);
                    TextDrawSetShadow(grcFlag[4], 0);
                    TextDrawSetOutline(grcFlag[4], 0);
                    TextDrawBackgroundColor(grcFlag[4], 255);
                    TextDrawFont(grcFlag[4], 1);
                    TextDrawSetProportional(grcFlag[4], 1);
                    TextDrawSetShadow(grcFlag[4], 0);

                    grcFlag[5] = TextDrawCreate(posx - 13.603516, posy - 0.216767, "box");
                    TextDrawLetterSize(grcFlag[5], 0.000000, 1.472915);
                    TextDrawTextSize(grcFlag[5], 0.000000, 14.000000);
                    TextDrawAlignment(grcFlag[5], 2);
                    TextDrawColor(grcFlag[5], -1);
                    TextDrawUseBox(grcFlag[5], 1);
                    TextDrawBoxColor(grcFlag[5], 0x0D5EAFFF);
                    TextDrawSetShadow(grcFlag[5], 0);
                    TextDrawSetOutline(grcFlag[5], 0);
                    TextDrawBackgroundColor(grcFlag[5], 255);
                    TextDrawFont(grcFlag[5], 1);
                    TextDrawSetProportional(grcFlag[5], 1);
                    TextDrawSetShadow(grcFlag[5], 0);//182.466567//182.466567

                    grcFlag[6] = TextDrawCreate(posx - 13.603516, posy - 0.216767 + 7.18251, "box");
                    TextDrawLetterSize(grcFlag[6], 0.000000, -0.105258);
                    TextDrawTextSize(grcFlag[6], 0.000000, 13.760131);
                    TextDrawAlignment(grcFlag[6], 2);
                    TextDrawColor(grcFlag[6], -1);
                    TextDrawUseBox(grcFlag[6], 1);
                    TextDrawBoxColor(grcFlag[6], -1);
                    TextDrawSetShadow(grcFlag[6], 0);
                    TextDrawSetOutline(grcFlag[6], 0);
                    TextDrawBackgroundColor(grcFlag[6], 255);
                    TextDrawFont(grcFlag[6], 1);
                    TextDrawSetProportional(grcFlag[6], 1);
                    TextDrawSetShadow(grcFlag[6], 0);

                    grcFlag[7] = TextDrawCreate(posx - 13.603516 + 0.4, posy - 0.216767+ 7.18251 - 7.283737, "box");
                    TextDrawLetterSize(grcFlag[7], 0.000000, 1.495862);
                    TextDrawTextSize(grcFlag[7], 0.000000, -0.389999);
                    TextDrawAlignment(grcFlag[7], 2);
                    TextDrawColor(grcFlag[7], -1);
                    TextDrawUseBox(grcFlag[7], 1);
                    TextDrawBoxColor(grcFlag[7], -1);
                    TextDrawSetShadow(grcFlag[7], 0);
                    TextDrawSetOutline(grcFlag[7], 0);
                    TextDrawBackgroundColor(grcFlag[7], 255);
                    TextDrawFont(grcFlag[7], 1);
                    TextDrawSetProportional(grcFlag[7], 1);
                    TextDrawSetShadow(grcFlag[7], 0);
                }
                case E_FLAG_POLAND:
                {

                    polFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(polFlag[0], 0.000000, 1.245054);
                    TextDrawTextSize(polFlag[0], 0.000000, 41.009830);
                    TextDrawAlignment(polFlag[0], 2);
                    TextDrawColor(polFlag[0], -1);
                    TextDrawUseBox(polFlag[0], 1);
                    TextDrawBoxColor(polFlag[0], -1);
                    TextDrawSetShadow(polFlag[0], 0);
                    TextDrawSetOutline(polFlag[0], 0);
                    TextDrawBackgroundColor(polFlag[0], 255);
                    TextDrawFont(polFlag[0], 1);
                    TextDrawSetProportional(polFlag[0], 1);
                    TextDrawSetShadow(polFlag[0], 0);

                    polFlag[1] = TextDrawCreate(posx, posy + 15.851105, "box");
                    TextDrawLetterSize(polFlag[1], 0.000000, 1.287356);
                    TextDrawTextSize(polFlag[1], 0.000000, 41.009662);
                    TextDrawAlignment(polFlag[1], 2);
                    TextDrawColor(polFlag[1], -1);
                    TextDrawUseBox(polFlag[1], 1);
                    TextDrawBoxColor(polFlag[1], 0xDC143CFF);
                    TextDrawSetShadow(polFlag[1], 0);
                    TextDrawSetOutline(polFlag[1], 0);
                    TextDrawBackgroundColor(polFlag[1], 255);
                    TextDrawFont(polFlag[1], 1);
                    TextDrawSetProportional(polFlag[1], 1);
                    TextDrawSetShadow(polFlag[1], 0);

                    
                }
                case E_FLAG_LATVIAN:
                {
                    latFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(latFlag[0], 0.000000, 2.989314);
                    TextDrawTextSize(latFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(latFlag[0], 2);
                    TextDrawColor(latFlag[0], 0x9E3039FF);
                    TextDrawUseBox(latFlag[0], 1);
                    TextDrawBoxColor(latFlag[0], 0x9E3039FF);
                    TextDrawSetShadow(latFlag[0], 0);
                    TextDrawSetOutline(latFlag[0], 0);
                    TextDrawBackgroundColor(latFlag[0], 255);
                    TextDrawFont(latFlag[0], 1);
                    TextDrawSetProportional(latFlag[0], 1);
                    TextDrawSetShadow(latFlag[0], 0);

                    latFlag[1] = TextDrawCreate(posx, posy + 12.397812, "box");
                    TextDrawLetterSize(latFlag[1], 0.000000, 0.207908);
                    TextDrawTextSize(latFlag[1], 0.000000, 41.008991);
                    TextDrawAlignment(latFlag[1], 2);
                    TextDrawColor(latFlag[1], -1);
                    TextDrawUseBox(latFlag[1], 1);
                    TextDrawBoxColor(latFlag[1], -1);
                    TextDrawSetShadow(latFlag[1], 0);
                    TextDrawSetOutline(latFlag[1], 0);
                    TextDrawBackgroundColor(latFlag[1], 255);
                    TextDrawFont(latFlag[1], 1);
                    TextDrawSetProportional(latFlag[1], 1);
                    TextDrawSetShadow(latFlag[1], 0);
                }
                case E_FLAG_FRANCE:
                {
                    fraFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(fraFlag[0], 0.000000, 2.989314);
                    TextDrawTextSize(fraFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(fraFlag[0], 2);
                    TextDrawColor(fraFlag[0], -1);
                    TextDrawUseBox(fraFlag[0], 1);
                    TextDrawBoxColor(fraFlag[0], 0x0055A4FF);
                    TextDrawSetShadow(fraFlag[0], 0);
                    TextDrawSetOutline(fraFlag[0], 0);
                    TextDrawBackgroundColor(fraFlag[0], 255);
                    TextDrawFont(fraFlag[0], 1);
                    TextDrawSetProportional(fraFlag[0], 1);
                    TextDrawSetShadow(fraFlag[0], 0);

                    fraFlag[1] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(fraFlag[1], 0.000000, 2.988748);
                    TextDrawTextSize(fraFlag[1], 0.000000, 12.009954);
                    TextDrawAlignment(fraFlag[1], 2);
                    TextDrawColor(fraFlag[1], -1);
                    TextDrawUseBox(fraFlag[1], 1);
                    TextDrawBoxColor(fraFlag[1], -1);
                    TextDrawSetShadow(fraFlag[1], 0);
                    TextDrawSetOutline(fraFlag[1], 0);
                    TextDrawBackgroundColor(fraFlag[1], 255);
                    TextDrawFont(fraFlag[1], 1);
                    TextDrawSetProportional(fraFlag[1], 1);
                    TextDrawSetShadow(fraFlag[1], 0);

                    fraFlag[2] = TextDrawCreate(posx + 14.600891, posy, "box");
                    TextDrawLetterSize(fraFlag[2], 0.000000, 2.988748);
                    TextDrawTextSize(fraFlag[2], 0.000000, 11.309938);
                    TextDrawAlignment(fraFlag[2], 2);
                    TextDrawColor(fraFlag[2], -1);
                    TextDrawUseBox(fraFlag[2], 1);
                    TextDrawBoxColor(fraFlag[2], 0xEF4135FF);
                    TextDrawSetShadow(fraFlag[2], 0);
                    TextDrawSetOutline(fraFlag[2], 0);
                    TextDrawBackgroundColor(fraFlag[2], 255);
                    TextDrawFont(fraFlag[2], 1);
                    TextDrawSetProportional(fraFlag[2], 1);
                    TextDrawSetShadow(fraFlag[2], 0);         
                }
                case E_FLAG_ITALY:
                {
                    itaFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(itaFlag[0], 0.000000, 2.989314);
                    TextDrawTextSize(itaFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(itaFlag[0], 2);
                    TextDrawColor(itaFlag[0], -1);
                    TextDrawUseBox(itaFlag[0], 1);
                    TextDrawBoxColor(itaFlag[0], 0x008C45FF);
                    TextDrawSetShadow(itaFlag[0], 0);
                    TextDrawSetOutline(itaFlag[0], 0);
                    TextDrawBackgroundColor(itaFlag[0], 255);
                    TextDrawFont(itaFlag[0], 1);
                    TextDrawSetProportional(itaFlag[0], 1);
                    TextDrawSetShadow(itaFlag[0], 0);

                    itaFlag[1] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(itaFlag[1], 0.000000, 2.988748);
                    TextDrawTextSize(itaFlag[1], 0.000000, 12.009954);
                    TextDrawAlignment(itaFlag[1], 2);
                    TextDrawColor(itaFlag[1], -1);
                    TextDrawUseBox(itaFlag[1], 1);
                    TextDrawBoxColor(itaFlag[1], -1);
                    TextDrawSetShadow(itaFlag[1], 0);
                    TextDrawSetOutline(itaFlag[1], 0);
                    TextDrawBackgroundColor(itaFlag[1], 255);
                    TextDrawFont(itaFlag[1], 1);
                    TextDrawSetProportional(itaFlag[1], 1);
                    TextDrawSetShadow(itaFlag[1], 0);

                    itaFlag[2] = TextDrawCreate(posx + 14.600891, posy, "box");
                    TextDrawLetterSize(itaFlag[2], 0.000000, 2.988748);
                    TextDrawTextSize(itaFlag[2], 0.000000, 11.309938);
                    TextDrawAlignment(itaFlag[2], 2);
                    TextDrawColor(itaFlag[2], -1);
                    TextDrawUseBox(itaFlag[2], 1);
                    TextDrawBoxColor(itaFlag[2], 0xCD212AFF);
                    TextDrawSetShadow(itaFlag[2], 0);
                    TextDrawSetOutline(itaFlag[2], 0);
                    TextDrawBackgroundColor(itaFlag[2], 255);
                    TextDrawFont(itaFlag[2], 1);
                    TextDrawSetProportional(itaFlag[2], 1);
                    TextDrawSetShadow(itaFlag[2], 0);     
                }
                case E_FLAG_ROMANIAN:
                {
                    romFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(romFlag[0], 0.000000, 2.989314);
                    TextDrawTextSize(romFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(romFlag[0], 2);
                    TextDrawColor(romFlag[0], -1);
                    TextDrawUseBox(romFlag[0], 1);
                    TextDrawBoxColor(romFlag[0], 0x002B7FFF);
                    TextDrawSetShadow(romFlag[0], 0);
                    TextDrawSetOutline(romFlag[0], 0);
                    TextDrawBackgroundColor(romFlag[0], 255);
                    TextDrawFont(romFlag[0], 1);
                    TextDrawSetProportional(romFlag[0], 1);
                    TextDrawSetShadow(romFlag[0], 0);

                    romFlag[1] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(romFlag[1], 0.000000, 2.988748);
                    TextDrawTextSize(romFlag[1], 0.000000, 12.009954);
                    TextDrawAlignment(romFlag[1], 2);
                    TextDrawColor(romFlag[1], -1);
                    TextDrawUseBox(romFlag[1], 1);
                    TextDrawBoxColor(romFlag[1], 0xFCD116FF);
                    TextDrawSetShadow(romFlag[1], 0);
                    TextDrawSetOutline(romFlag[1], 0);
                    TextDrawBackgroundColor(romFlag[1], 255);
                    TextDrawFont(romFlag[1], 1);
                    TextDrawSetProportional(romFlag[1], 1);
                    TextDrawSetShadow(romFlag[1], 0);

                    romFlag[2] = TextDrawCreate(posx + 14.600891, posy, "box");
                    TextDrawLetterSize(romFlag[2], 0.000000, 2.988748);
                    TextDrawTextSize(romFlag[2], 0.000000, 11.309938);
                    TextDrawAlignment(romFlag[2], 2);
                    TextDrawColor(romFlag[2], -1);
                    TextDrawUseBox(romFlag[2], 1);
                    TextDrawBoxColor(romFlag[2], 0xCE1126FF);
                    TextDrawSetShadow(romFlag[2], 0);
                    TextDrawSetOutline(romFlag[2], 0);
                    TextDrawBackgroundColor(romFlag[2], 255);
                    TextDrawFont(romFlag[2], 1);
                    TextDrawSetProportional(romFlag[2], 1);
                    TextDrawSetShadow(romFlag[2], 0);
                }
                case E_FLAG_BELGIAN:
                {
                    belFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(belFlag[0], 0.000000, 2.989314);
                    TextDrawTextSize(belFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(belFlag[0], 2);
                    TextDrawColor(belFlag[0], -1);
                    TextDrawUseBox(belFlag[0], 1);
                    TextDrawBoxColor(belFlag[0], 0x000000FF);
                    TextDrawSetShadow(belFlag[0], 0);
                    TextDrawSetOutline(belFlag[0], 0);
                    TextDrawBackgroundColor(belFlag[0], 255);
                    TextDrawFont(belFlag[0], 1);
                    TextDrawSetProportional(belFlag[0], 1);
                    TextDrawSetShadow(belFlag[0], 0);

                    belFlag[1] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(belFlag[1], 0.000000, 2.988748);
                    TextDrawTextSize(belFlag[1], 0.000000, 12.009954);
                    TextDrawAlignment(belFlag[1], 2);
                    TextDrawColor(belFlag[1], -1);
                    TextDrawUseBox(belFlag[1], 1);
                    TextDrawBoxColor(belFlag[1], 0xFDDA24FF);
                    TextDrawSetShadow(belFlag[1], 0);
                    TextDrawSetOutline(belFlag[1], 0);
                    TextDrawBackgroundColor(belFlag[1], 255);
                    TextDrawFont(belFlag[1], 1);
                    TextDrawSetProportional(belFlag[1], 1);
                    TextDrawSetShadow(belFlag[1], 0);

                    belFlag[2] = TextDrawCreate(posx + 14.600891, posy, "box");
                    TextDrawLetterSize(belFlag[2], 0.000000, 2.988748);
                    TextDrawTextSize(belFlag[2], 0.000000, 11.309938);
                    TextDrawAlignment(belFlag[2], 2);
                    TextDrawColor(belFlag[2], -1);
                    TextDrawUseBox(belFlag[2], 1);
                    TextDrawBoxColor(belFlag[2], 0xEF3340FF);
                    TextDrawSetShadow(belFlag[2], 0);
                    TextDrawSetOutline(belFlag[2], 0);
                    TextDrawBackgroundColor(belFlag[2], 255);
                    TextDrawFont(belFlag[2], 1);
                    TextDrawSetProportional(belFlag[2], 1);
                    TextDrawSetShadow(belFlag[2], 0);
                }
                case E_FLAG_SWEDEN:
                {
                    sweFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(sweFlag[0], 0.000000, 2.989314);
                    TextDrawTextSize(sweFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(sweFlag[0], 2);
                    TextDrawColor(sweFlag[0], -1);
                    TextDrawUseBox(sweFlag[0], 1);
                    TextDrawBoxColor(sweFlag[0], 0x004B87FF);
                    TextDrawSetShadow(sweFlag[0], 0);
                    TextDrawSetOutline(sweFlag[0], 0);
                    TextDrawBackgroundColor(sweFlag[0], 255);
                    TextDrawFont(sweFlag[0], 1);
                    TextDrawSetProportional(sweFlag[0], 1);
                    TextDrawSetShadow(sweFlag[0], 0);

                    sweFlag[1] = TextDrawCreate(posx - 7.425049, posy, "box");
                    TextDrawLetterSize(sweFlag[1], 0.000000, 2.975605);
                    TextDrawTextSize(sweFlag[1], 0.000000, 2.000000);
                    TextDrawAlignment(sweFlag[1], 2);
                    TextDrawColor(sweFlag[1], -1);
                    TextDrawUseBox(sweFlag[1], 1);
                    TextDrawBoxColor(sweFlag[1], 0xFFCD00FF);
                    TextDrawSetShadow(sweFlag[1], 0);
                    TextDrawSetOutline(sweFlag[1], 0);
                    TextDrawBackgroundColor(sweFlag[1], 255);
                    TextDrawFont(sweFlag[1], 1);
                    TextDrawSetProportional(sweFlag[1], 1);
                    TextDrawSetShadow(sweFlag[1], 0);

                    sweFlag[2] = TextDrawCreate(posx, posy + 12.783188, "box");
                    TextDrawLetterSize(sweFlag[2], 0.000000, 0.119921);
                    TextDrawTextSize(sweFlag[2], 0.000000, 40.339271);
                    TextDrawAlignment(sweFlag[2], 2);
                    TextDrawColor(sweFlag[2], -1);
                    TextDrawUseBox(sweFlag[2], 1);
                    TextDrawBoxColor(sweFlag[2], 0xFFCD00FF);
                    TextDrawSetShadow(sweFlag[2], 0);
                    TextDrawSetOutline(sweFlag[2], 0);
                    TextDrawBackgroundColor(sweFlag[2], 255);
                    TextDrawFont(sweFlag[2], 1);
                    TextDrawSetProportional(sweFlag[2], 1);
                    TextDrawSetShadow(sweFlag[2], 0);
                } 
                case E_FLAG_DENMARK:
                {
                    denFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(denFlag[0], 0.000000, 2.989314);
                    TextDrawTextSize(denFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(denFlag[0], 2);
                    TextDrawColor(denFlag[0], -1);
                    TextDrawUseBox(denFlag[0], 1);
                    TextDrawBoxColor(denFlag[0], 0xC60C30FF);
                    TextDrawSetShadow(denFlag[0], 0);
                    TextDrawSetOutline(denFlag[0], 0);
                    TextDrawBackgroundColor(denFlag[0], 255);
                    TextDrawFont(denFlag[0], 1);
                    TextDrawSetProportional(denFlag[0], 1);
                    TextDrawSetShadow(denFlag[0], 0);

                    denFlag[1] = TextDrawCreate(posx - 7.425049, posy, "box");
                    TextDrawLetterSize(denFlag[1], 0.000000, 2.975605);
                    TextDrawTextSize(denFlag[1], 0.000000, 2.000000);
                    TextDrawAlignment(denFlag[1], 2);
                    TextDrawColor(denFlag[1], -1);
                    TextDrawUseBox(denFlag[1], 1);
                    TextDrawBoxColor(denFlag[1], 0xFFFFFFFF);
                    TextDrawSetShadow(denFlag[1], 0);
                    TextDrawSetOutline(denFlag[1], 0);
                    TextDrawBackgroundColor(denFlag[1], 255);
                    TextDrawFont(denFlag[1], 1);
                    TextDrawSetProportional(denFlag[1], 1);
                    TextDrawSetShadow(denFlag[1], 0);

                    denFlag[2] = TextDrawCreate(posx, posy + 12.783188, "box");
                    TextDrawLetterSize(denFlag[2], 0.000000, 0.119921);
                    TextDrawTextSize(denFlag[2], 0.000000, 40.339271);
                    TextDrawAlignment(denFlag[2], 2);
                    TextDrawColor(denFlag[2], -1);
                    TextDrawUseBox(denFlag[2], 1);
                    TextDrawBoxColor(denFlag[2], 0xFFFFFFFF);
                    TextDrawSetShadow(denFlag[2], 0);
                    TextDrawSetOutline(denFlag[2], 0);
                    TextDrawBackgroundColor(denFlag[2], 255);
                    TextDrawFont(denFlag[2], 1);
                    TextDrawSetProportional(denFlag[2], 1);
                    TextDrawSetShadow(denFlag[2], 0);
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
