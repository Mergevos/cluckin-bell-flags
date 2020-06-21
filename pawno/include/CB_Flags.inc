/** 
    @ Author: Cluckin-bell (Unkovic && Emmett White)
    @ Date: 22th June
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

enum
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
    E_FLAG_SWEDEN,
    E_FLAG_NORWAY, 
    E_FLAG_ICELAND,
    E_FLAG_FAROESE

};

enum
{
    E_FLAG_MINI = 1,
    E_FLAG_MEDIUM,
    E_FLAG_BIG,
    E_FLAG_OTHER
};

static 
    Text:japaneseFlag[3],
    Text:germanyFlag[4],
    Text:dutchFlag[4],
    Text:rusFlag[4],
    Text:estFlag[4],
    Text:ausFlag[4],
    Text:hunFlag[4],
    Text:litFlag[4],
    Text:luxFlag[4],
    Text:bulFlag[4],
    Text:grcFlag[9],
    Text:polFlag[3],
    Text:latFlag[3],
    Text:itaFlag[4],
    Text:fraFlag[4],
    Text:romFlag[4],
    Text:belFlag[4],
    Text:sweFlag[4],
    Text:denFlag[4],
    Text:norFlag[6],
    Text:farFlag[6],
    Text:iceFlag[6];

// -- 
// <summary> Forwards the function bellow</summary>
// -- 

forward OnPlayerClickFlag(playerid, flag, flagsize);

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
        print("|                     Version: 0.2.2                              |");
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
        print("|                     Version: 0.2.2                              |");
        print("|                  Used through: Gamemode                         |");
        print("|                                                                 |");
        print("===================================================================");
        return 1;
    }
#endif

// --
// <summary> Calls callback OnPlayerClickFlag</summary>
// --

public OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    #if defined CB_OnPlayerClickTextDraw
        CB_OnPlayerClickTextDraw(playerid, Text:clickedid);
    #endif
    if(clickedid == japaneseFlag[2])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_JAPAN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == germanyFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_GERMANY, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == dutchFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_DUTCH, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == rusFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_RUSSIAN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == estFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_ESTONIAN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == ausFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_AUSTRIAN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == hunFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_HUNGARIAN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == litFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_LITHUANIA, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == luxFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_LUXEMBOURG, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == bulFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_BULGARIAN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == grcFlag[8])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_GREEK, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == polFlag[2])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_POLAND, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == latFlag[2])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_LATVIAN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == itaFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_ITALY, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == fraFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_FRANCE, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == romFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_ROMANIAN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == belFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_BELGIAN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == sweFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_SWEDEN, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == denFlag[3])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_DENMARK, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == norFlag[5])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_NORWAY, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == iceFlag[5])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_ICELAND, E_FLAG_MEDIUM);
        return 1;
    }
    else if(clickedid == farFlag[5])
    {
        CallLocalFunction("OnPlayerClickFlag", "iii", playerid, E_FLAG_FAROESE, E_FLAG_MEDIUM);
        return 1;
    }
    return 1;
}

// --
// <summary> Hides flag from player</summary>
// --

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
                    TextDrawHideForPlayer(playerid, japaneseFlag[0]), TextDrawHideForPlayer(playerid, japaneseFlag[1]), TextDrawHideForPlayer(playerid, japaneseFlag[2]);
                }
                case E_FLAG_GERMANY:
                {
                    TextDrawHideForPlayer(playerid, germanyFlag[0]), TextDrawHideForPlayer(playerid, germanyFlag[1]), TextDrawHideForPlayer(playerid, germanyFlag[2]), TextDrawHideForPlayer(playerid, germanyFlag[3]);
                }
                case E_FLAG_DUTCH:
                {
                    TextDrawHideForPlayer(playerid, dutchFlag[0]), TextDrawHideForPlayer(playerid, dutchFlag[1]), TextDrawHideForPlayer(playerid, dutchFlag[2]), TextDrawHideForPlayer(playerid, dutchFlag[3]);
                }
                case E_FLAG_RUSSIAN:
                {
                    TextDrawHideForPlayer(playerid, rusFlag[0]), TextDrawHideForPlayer(playerid, rusFlag[1]), TextDrawHideForPlayer(playerid, rusFlag[2]), TextDrawHideForPlayer(playerid, rusFlag[3]);
                }
                case E_FLAG_ESTONIAN:
                {
                    TextDrawHideForPlayer(playerid, estFlag[0]), TextDrawHideForPlayer(playerid, estFlag[1]), TextDrawHideForPlayer(playerid, estFlag[2]), TextDrawHideForPlayer(playerid, estFlag[3]);
                }
                case E_FLAG_AUSTRIAN:
                {
                    TextDrawHideForPlayer(playerid, ausFlag[0]), TextDrawHideForPlayer(playerid, ausFlag[1]), TextDrawHideForPlayer(playerid, ausFlag[2]), TextDrawHideForPlayer(playerid, ausFlag[3]);
                }
                case E_FLAG_HUNGARIAN:
                {
                    TextDrawHideForPlayer(playerid, hunFlag[0]), TextDrawHideForPlayer(playerid, hunFlag[1]), TextDrawHideForPlayer(playerid, hunFlag[2]), TextDrawHideForPlayer(playerid, hunFlag[3]);
                }
                case E_FLAG_LITHUANIA:
                {
                    TextDrawHideForPlayer(playerid, litFlag[0]), TextDrawHideForPlayer(playerid, litFlag[1]), TextDrawHideForPlayer(playerid, litFlag[2]), TextDrawHideForPlayer(playerid, litFlag[3]);
                }
                case E_FLAG_LUXEMBOURG:
                {
                    TextDrawHideForPlayer(playerid, luxFlag[0]), TextDrawHideForPlayer(playerid, luxFlag[1]), TextDrawHideForPlayer(playerid, luxFlag[2]), TextDrawHideForPlayer(playerid, luxFlag[3]);
                }
                case E_FLAG_BULGARIAN:
                {
                    TextDrawHideForPlayer(playerid, bulFlag[0]), TextDrawHideForPlayer(playerid, bulFlag[1]), TextDrawHideForPlayer(playerid, bulFlag[2]), TextDrawHideForPlayer(playerid, bulFlag[3]);
                }
                case E_FLAG_GREEK:
                {
                    TextDrawHideForPlayer(playerid, grcFlag[0]), TextDrawHideForPlayer(playerid, grcFlag[1]), TextDrawHideForPlayer(playerid, grcFlag[2]);
                    TextDrawHideForPlayer(playerid, grcFlag[3]), TextDrawHideForPlayer(playerid, grcFlag[4]), TextDrawHideForPlayer(playerid, grcFlag[5]);
                    TextDrawHideForPlayer(playerid, grcFlag[6]), TextDrawHideForPlayer(playerid, grcFlag[7]), TextDrawHideForPlayer(playerid, grcFlag[8]);
                }
                case E_FLAG_POLAND:
                {
                    TextDrawHideForPlayer(playerid, polFlag[0]), TextDrawHideForPlayer(playerid, polFlag[1]), TextDrawHideForPlayer(playerid, polFlag[2]);
                }
                case E_FLAG_LATVIAN:
                {
                    TextDrawHideForPlayer(playerid, latFlag[0]), TextDrawHideForPlayer(playerid, latFlag[1]), TextDrawHideForPlayer(playerid, latFlag[2]);
                }
                case E_FLAG_FRANCE:
                {
                    TextDrawHideForPlayer(playerid, fraFlag[0]), TextDrawHideForPlayer(playerid, fraFlag[1]), TextDrawHideForPlayer(playerid, fraFlag[2]), TextDrawHideForPlayer(playerid, fraFlag[3]);
                }
                case E_FLAG_ITALY:
                {
                    TextDrawHideForPlayer(playerid, itaFlag[0]), TextDrawHideForPlayer(playerid, itaFlag[1]), TextDrawHideForPlayer(playerid, itaFlag[2]), TextDrawHideForPlayer(playerid, itaFlag[3]);
                }
                case E_FLAG_ROMANIAN:
                {
                    TextDrawHideForPlayer(playerid, romFlag[0]), TextDrawHideForPlayer(playerid, romFlag[1]), TextDrawHideForPlayer(playerid, romFlag[2]), TextDrawHideForPlayer(playerid, romFlag[3]);
                }
                case E_FLAG_BELGIAN:
                {
                    TextDrawHideForPlayer(playerid, belFlag[0]), TextDrawHideForPlayer(playerid, belFlag[1]), TextDrawHideForPlayer(playerid, belFlag[2]), TextDrawHideForPlayer(playerid, belFlag[3]);
                }
                case E_FLAG_SWEDEN:
                {
                    TextDrawHideForPlayer(playerid, sweFlag[0]), TextDrawHideForPlayer(playerid, sweFlag[1]), TextDrawHideForPlayer(playerid, sweFlag[2]), TextDrawHideForPlayer(playerid, sweFlag[3]);
                } 
                case E_FLAG_DENMARK:
                {
                    TextDrawHideForPlayer(playerid, denFlag[0]), TextDrawHideForPlayer(playerid, denFlag[1]), TextDrawHideForPlayer(playerid, denFlag[2]), TextDrawHideForPlayer(playerid, denFlag[3]);
                } 
                case E_FLAG_NORWAY:
                {
                    TextDrawHideForPlayer(playerid, norFlag[0]), TextDrawHideForPlayer(playerid, norFlag[1]), TextDrawHideForPlayer(playerid, norFlag[2]), TextDrawHideForPlayer(playerid, norFlag[3]), TextDrawHideForPlayer(playerid, norFlag[4]), TextDrawHideForPlayer(playerid, norFlag[5]);
                }
                case E_FLAG_ICELAND:
                {
                    TextDrawHideForPlayer(playerid, iceFlag[0]), TextDrawHideForPlayer(playerid, iceFlag[1]), TextDrawHideForPlayer(playerid, iceFlag[2]), TextDrawHideForPlayer(playerid, iceFlag[3]), TextDrawHideForPlayer(playerid, iceFlag[4]), TextDrawHideForPlayer(playerid, iceFlag[5]);
                }
                case E_FLAG_FAROESE:
                {
                    TextDrawHideForPlayer(playerid, farFlag[0]), TextDrawHideForPlayer(playerid, farFlag[1]), TextDrawHideForPlayer(playerid, farFlag[2]), TextDrawHideForPlayer(playerid, farFlag[3]), TextDrawHideForPlayer(playerid, farFlag[4]), TextDrawHideForPlayer(playerid, farFlag[5]);
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
                    TextDrawShowForPlayer(playerid, japaneseFlag[0]), TextDrawShowForPlayer(playerid, japaneseFlag[1]), TextDrawShowForPlayer(playerid, japaneseFlag[2]);
                }
                case E_FLAG_GERMANY:
                {
                    TextDrawShowForPlayer(playerid, germanyFlag[0]), TextDrawShowForPlayer(playerid, germanyFlag[1]), TextDrawShowForPlayer(playerid, germanyFlag[2]), TextDrawShowForPlayer(playerid, germanyFlag[3]);
                }   
                case E_FLAG_DUTCH:
                {
                    TextDrawShowForPlayer(playerid, dutchFlag[0]), TextDrawShowForPlayer(playerid, dutchFlag[1]), TextDrawShowForPlayer(playerid, dutchFlag[2]), TextDrawShowForPlayer(playerid, dutchFlag[3]);
                }  
                case E_FLAG_RUSSIAN:
                {
                    TextDrawShowForPlayer(playerid, rusFlag[0]), TextDrawShowForPlayer(playerid, rusFlag[1]), TextDrawShowForPlayer(playerid, rusFlag[2]), TextDrawShowForPlayer(playerid, rusFlag[3]);
                }   
                case E_FLAG_ESTONIAN:
                {
                    TextDrawShowForPlayer(playerid, estFlag[0]), TextDrawShowForPlayer(playerid, estFlag[1]), TextDrawShowForPlayer(playerid, estFlag[2]), TextDrawShowForPlayer(playerid, estFlag[3]);
                }
                case E_FLAG_AUSTRIAN:
                {
                    TextDrawShowForPlayer(playerid, ausFlag[0]), TextDrawShowForPlayer(playerid, ausFlag[1]), TextDrawShowForPlayer(playerid, ausFlag[2]), TextDrawShowForPlayer(playerid, ausFlag[3]);
                }
                case E_FLAG_HUNGARIAN:
                {
                    TextDrawShowForPlayer(playerid, hunFlag[0]), TextDrawShowForPlayer(playerid, hunFlag[1]), TextDrawShowForPlayer(playerid, hunFlag[2]), TextDrawShowForPlayer(playerid, hunFlag[3]);
                }
                case E_FLAG_LITHUANIA:
                {
                    TextDrawShowForPlayer(playerid, litFlag[0]), TextDrawShowForPlayer(playerid, litFlag[1]), TextDrawShowForPlayer(playerid, litFlag[2]), TextDrawShowForPlayer(playerid, litFlag[3]);
                }
                case E_FLAG_LUXEMBOURG:
                {
                    TextDrawShowForPlayer(playerid, luxFlag[0]), TextDrawShowForPlayer(playerid, luxFlag[1]), TextDrawShowForPlayer(playerid, luxFlag[2]), TextDrawShowForPlayer(playerid, luxFlag[3]);
                }
                case E_FLAG_BULGARIAN:
                {
                    TextDrawShowForPlayer(playerid, bulFlag[0]), TextDrawShowForPlayer(playerid, bulFlag[1]), TextDrawShowForPlayer(playerid, bulFlag[2]), TextDrawShowForPlayer(playerid, bulFlag[3]);
                }
                case E_FLAG_GREEK:
                {
                    TextDrawShowForPlayer(playerid, grcFlag[0]), TextDrawShowForPlayer(playerid, grcFlag[1]), TextDrawShowForPlayer(playerid, grcFlag[2]),
                    TextDrawShowForPlayer(playerid, grcFlag[3]), TextDrawShowForPlayer(playerid, grcFlag[4]), TextDrawShowForPlayer(playerid, grcFlag[5]),
                    TextDrawShowForPlayer(playerid, grcFlag[6]), TextDrawShowForPlayer(playerid, grcFlag[7]), TextDrawShowForPlayer(playerid, grcFlag[8]);
                }
                case E_FLAG_POLAND:
                {
                    TextDrawShowForPlayer(playerid, polFlag[0]), TextDrawShowForPlayer(playerid, polFlag[1]), TextDrawShowForPlayer(playerid, polFlag[2]);
                }
                case E_FLAG_LATVIAN:
                {
                    TextDrawShowForPlayer(playerid, latFlag[0]), TextDrawShowForPlayer(playerid, latFlag[1]), TextDrawShowForPlayer(playerid, latFlag[2]);
                }
                case E_FLAG_FRANCE:
                {              
                    TextDrawShowForPlayer(playerid, fraFlag[0]), TextDrawShowForPlayer(playerid, fraFlag[1]), TextDrawShowForPlayer(playerid, fraFlag[2]), TextDrawShowForPlayer(playerid, fraFlag[3]);
                }
                case E_FLAG_ITALY:
                {
                    TextDrawShowForPlayer(playerid, itaFlag[0]), TextDrawShowForPlayer(playerid, itaFlag[1]), TextDrawShowForPlayer(playerid, itaFlag[2]), TextDrawShowForPlayer(playerid, itaFlag[3]);
                }
                case E_FLAG_ROMANIAN:
                {
                    TextDrawShowForPlayer(playerid, romFlag[0]), TextDrawShowForPlayer(playerid, romFlag[1]), TextDrawShowForPlayer(playerid, romFlag[2]), TextDrawShowForPlayer(playerid, romFlag[3]);
                }
                case E_FLAG_BELGIAN:
                {
                    TextDrawShowForPlayer(playerid, belFlag[0]), TextDrawShowForPlayer(playerid, belFlag[1]), TextDrawShowForPlayer(playerid, belFlag[2]), TextDrawShowForPlayer(playerid, belFlag[3]);
                }
                case E_FLAG_SWEDEN:
                {
                    TextDrawShowForPlayer(playerid, sweFlag[0]), TextDrawShowForPlayer(playerid, sweFlag[1]), TextDrawShowForPlayer(playerid, sweFlag[2]), TextDrawShowForPlayer(playerid, sweFlag[3]);
                }
                case E_FLAG_DENMARK:
                {
                    TextDrawShowForPlayer(playerid, denFlag[0]), TextDrawShowForPlayer(playerid, denFlag[1]), TextDrawShowForPlayer(playerid, denFlag[2]), TextDrawShowForPlayer(playerid, denFlag[3]);
                }
                case E_FLAG_NORWAY:
                {
                    TextDrawShowForPlayer(playerid, norFlag[0]), TextDrawShowForPlayer(playerid, norFlag[1]), TextDrawShowForPlayer(playerid, norFlag[2]), TextDrawShowForPlayer(playerid, norFlag[3]), TextDrawShowForPlayer(playerid, norFlag[4]), TextDrawShowForPlayer(playerid, norFlag[5]);
                }
                case E_FLAG_ICELAND:
                {
                    TextDrawShowForPlayer(playerid, iceFlag[0]), TextDrawShowForPlayer(playerid, iceFlag[1]), TextDrawShowForPlayer(playerid, iceFlag[2]), TextDrawShowForPlayer(playerid, iceFlag[3]), TextDrawShowForPlayer(playerid, iceFlag[4]), TextDrawShowForPlayer(playerid, iceFlag[5]);
                }
                case E_FLAG_FAROESE:
                {
                    TextDrawShowForPlayer(playerid, farFlag[0]), TextDrawShowForPlayer(playerid, farFlag[1]), TextDrawShowForPlayer(playerid, farFlag[2]), TextDrawShowForPlayer(playerid, farFlag[3]), TextDrawShowForPlayer(playerid, farFlag[4]), TextDrawShowForPlayer(playerid, farFlag[5]);
                }
            }
        }
    }
}
                          
// --
// <summary>Creates a flag textdraw with position and size.</summary>
// --

stock CB_CreateFlag(flag, flagsize, Float:posx, Float:posy, bool:clickable = false)
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

                    if(clickable) 
                    {
                        japaneseFlag[2] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(japaneseFlag[2], 0.000000, 4);
                        TextDrawTextSize(japaneseFlag[2], 24.000000, 43);
                        TextDrawAlignment(japaneseFlag[2], 2);
                        TextDrawUseBox(japaneseFlag[2], 1);
                        TextDrawBoxColor(japaneseFlag[2], 0x00000000);
                        TextDrawSetSelectable(japaneseFlag[2], true);
                    }

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

                    if(clickable) 
                    {
                        germanyFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(germanyFlag[3], 0.000000, 4);
                        TextDrawTextSize(germanyFlag[3], 24.000000, 43);
                        TextDrawAlignment(germanyFlag[3], 2);
                        TextDrawUseBox(germanyFlag[3], 1);
                        TextDrawBoxColor(germanyFlag[3], 0x00000000);
                        TextDrawSetSelectable(germanyFlag[3], true);
                    }
                    
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

                    if(clickable) 
                    {
                        dutchFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(dutchFlag[3], 0.000000, 4);
                        TextDrawTextSize(dutchFlag[3], 24.000000, 43);
                        TextDrawAlignment(dutchFlag[3], 2);
                        TextDrawUseBox(dutchFlag[3], 1);
                        TextDrawBoxColor(dutchFlag[3], 0x00000000);
                        TextDrawSetSelectable(dutchFlag[3], true);
                    }
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

                    if(clickable) 
                    {
                        rusFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(rusFlag[3], 0.000000, 4);
                        TextDrawTextSize(rusFlag[3], 24.000000, 43);
                        TextDrawAlignment(rusFlag[3], 2);
                        TextDrawUseBox(rusFlag[3], 1);
                        TextDrawBoxColor(rusFlag[3], 0x00000000);
                        TextDrawSetSelectable(rusFlag[3], true);
                    }
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
                    
                    if(clickable) 
                    {
                        estFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(estFlag[3], 0.000000, 4);
                        TextDrawTextSize(estFlag[3], 24.000000, 43);
                        TextDrawAlignment(estFlag[3], 2);
                        TextDrawUseBox(estFlag[3], 1);
                        TextDrawBoxColor(estFlag[3], 0x00000000);
                        TextDrawSetSelectable(estFlag[3], true);
                    }
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
                    
                    
                    if(clickable) 
                    {
                        ausFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(ausFlag[3], 0.000000, 4);
                        TextDrawTextSize(ausFlag[3], 24.000000, 43);
                        TextDrawAlignment(ausFlag[3], 2);
                        TextDrawUseBox(ausFlag[3], 1);
                        TextDrawBoxColor(ausFlag[3], 0x00000000);
                        TextDrawSetSelectable(ausFlag[3], true);
                    }
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

                    if(clickable) 
                    {
                        hunFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(hunFlag[3], 0.000000, 4);
                        TextDrawTextSize(hunFlag[3], 24.000000, 43);
                        TextDrawAlignment(hunFlag[3], 2);
                        TextDrawUseBox(hunFlag[3], 1);
                        TextDrawBoxColor(hunFlag[3], 0x00000000);
                        TextDrawSetSelectable(hunFlag[3], true);
                    }
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

                    if(clickable) 
                    {
                        litFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(litFlag[3], 0.000000, 4);
                        TextDrawTextSize(litFlag[3], 24.000000, 43);
                        TextDrawAlignment(litFlag[3], 2);
                        TextDrawUseBox(litFlag[3], 1);
                        TextDrawBoxColor(litFlag[3], 0x00000000);
                        TextDrawSetSelectable(litFlag[3], true);
                    }
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
                    if(clickable) 
                    {
                        luxFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(luxFlag[3], 0.000000, 4);
                        TextDrawTextSize(luxFlag[3], 24.000000, 43);
                        TextDrawAlignment(luxFlag[3], 2);
                        TextDrawUseBox(luxFlag[3], 1);
                        TextDrawBoxColor(luxFlag[3], 0x00000000);
                        TextDrawSetSelectable(luxFlag[3], true);
                    }
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
                    if(clickable) 
                    {
                        bulFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(bulFlag[3], 0.000000, 4);
                        TextDrawTextSize(bulFlag[3], 24.000000, 43);
                        TextDrawAlignment(bulFlag[3], 2);
                        TextDrawUseBox(bulFlag[3], 1);
                        TextDrawBoxColor(bulFlag[3], 0x00000000);
                        TextDrawSetSelectable(bulFlag[3], true);
                    }
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

                    if(clickable) 
                    {
                        grcFlag[8] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(grcFlag[8], 0.000000, 4);
                        TextDrawTextSize(grcFlag[8], 24.000000, 43);
                        TextDrawAlignment(grcFlag[8], 2);
                        TextDrawUseBox(grcFlag[8], 1);
                        TextDrawBoxColor(grcFlag[8], 0x00000000);
                        TextDrawSetSelectable(grcFlag[8], true);
                    }
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

                    if(clickable) 
                    {
                        polFlag[2] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(polFlag[2], 0.000000, 4);
                        TextDrawTextSize(polFlag[2], 24.000000, 43);
                        TextDrawAlignment(polFlag[2], 2);
                        TextDrawUseBox(polFlag[2], 1);
                        TextDrawBoxColor(polFlag[2], 0x00000000);
                        TextDrawSetSelectable(polFlag[2], true);
                    }
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

                    if(clickable) 
                    {
                        latFlag[2] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(latFlag[2], 0.000000, 4);
                        TextDrawTextSize(latFlag[2], 24.000000, 43);
                        TextDrawAlignment(latFlag[2], 2);
                        TextDrawUseBox(latFlag[2], 1);
                        TextDrawBoxColor(latFlag[2], 0x00000000);
                        TextDrawSetSelectable(latFlag[2], true);
                    }
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

                    if(clickable) 
                    {
                        fraFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(fraFlag[3], 0.000000, 4);
                        TextDrawTextSize(fraFlag[3], 24.000000, 43);
                        TextDrawAlignment(fraFlag[3], 2);
                        TextDrawUseBox(fraFlag[3], 1);
                        TextDrawBoxColor(fraFlag[3], 0x00000000);
                        TextDrawSetSelectable(fraFlag[3], true);
                    }
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

                    if(clickable) 
                    {
                        itaFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(itaFlag[3], 0.000000, 4);
                        TextDrawTextSize(itaFlag[3], 24.000000, 43);
                        TextDrawAlignment(itaFlag[3], 2);
                        TextDrawUseBox(itaFlag[3], 1);
                        TextDrawBoxColor(itaFlag[3], 0x00000000);
                        TextDrawSetSelectable(itaFlag[3], true);
                    }
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

                    if(clickable) 
                    {
                        romFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(romFlag[3], 0.000000, 4);
                        TextDrawTextSize(romFlag[3], 24.000000, 43);
                        TextDrawAlignment(romFlag[3], 2);
                        TextDrawUseBox(romFlag[3], 1);
                        TextDrawBoxColor(romFlag[3], 0x00000000);
                        TextDrawSetSelectable(romFlag[3], true);
                    }
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

                    if(clickable) 
                    {
                        belFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(belFlag[3], 0.000000, 4);
                        TextDrawTextSize(belFlag[3], 24.000000, 43);
                        TextDrawAlignment(belFlag[3], 2);
                        TextDrawUseBox(belFlag[3], 1);
                        TextDrawBoxColor(belFlag[3], 0x00000000);
                        TextDrawSetSelectable(belFlag[3], true);
                    }
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

                    if(clickable) 
                    {
                        sweFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(sweFlag[3], 0.000000, 4);
                        TextDrawTextSize(sweFlag[3], 24.000000, 43);
                        TextDrawAlignment(sweFlag[3], 2);
                        TextDrawUseBox(sweFlag[3], 1);
                        TextDrawBoxColor(sweFlag[3], 0x00000000);
                        TextDrawSetSelectable(sweFlag[3], true);
                    }
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

                    if(clickable) 
                    {
                        denFlag[3] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(denFlag[3], 0.000000, 4);
                        TextDrawTextSize(denFlag[3], 24.000000, 43);
                        TextDrawAlignment(denFlag[3], 2);
                        TextDrawUseBox(denFlag[3], 1);
                        TextDrawBoxColor(denFlag[3], 0x00000000);
                        TextDrawSetSelectable(denFlag[3], true);
                    }
                } 
                case E_FLAG_NORWAY:
                {
                    norFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(norFlag[0], 0.000000, 2.928329);
                    TextDrawTextSize(norFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(norFlag[0], 2);
                    TextDrawColor(norFlag[0], -1);
                    TextDrawUseBox(norFlag[0], 1);
                    TextDrawBoxColor(norFlag[0], 0xC8102EFF);
                    TextDrawSetShadow(norFlag[0], 0);
                    TextDrawSetOutline(norFlag[0], 0);
                    TextDrawBackgroundColor(norFlag[0], 255);
                    TextDrawFont(norFlag[0], 1);
                    TextDrawSetProportional(norFlag[0], 1);
                    TextDrawSetShadow(norFlag[0], 0);

                    norFlag[1] = TextDrawCreate(posx - 5.627778, posy - 0.016663, "box");
                    TextDrawLetterSize(norFlag[1], 0.000000, 2.938473);
                    TextDrawTextSize(norFlag[1], 0.000000, 4.369962);
                    TextDrawAlignment(norFlag[1], 2);
                    TextDrawColor(norFlag[1], -1);
                    TextDrawUseBox(norFlag[1], 1);
                    TextDrawBoxColor(norFlag[1], -1);
                    TextDrawSetShadow(norFlag[1], 0);
                    TextDrawSetOutline(norFlag[1], 0);
                    TextDrawBackgroundColor(norFlag[1], 255);
                    TextDrawFont(norFlag[1], 1);
                    TextDrawSetProportional(norFlag[1], 1);
                    TextDrawSetShadow(norFlag[1], 0);

                    norFlag[2] = TextDrawCreate(posx - 0.2, posy + 11.666717, "box");
                    TextDrawLetterSize(norFlag[2], 0.000000, 0.386460);
                    TextDrawTextSize(norFlag[2], 0.000000, 40.849857);
                    TextDrawAlignment(norFlag[2], 2);
                    TextDrawColor(norFlag[2], -1);
                    TextDrawUseBox(norFlag[2], 1);
                    TextDrawBoxColor(norFlag[2], -1);
                    TextDrawSetShadow(norFlag[2], 0);
                    TextDrawSetOutline(norFlag[2], 0);
                    TextDrawBackgroundColor(norFlag[2], 255);
                    TextDrawFont(norFlag[2], 1);
                    TextDrawSetProportional(norFlag[2], 1);
                    TextDrawSetShadow(norFlag[2], 0);

                    norFlag[3] = TextDrawCreate(posx - 5.6, posy - 0.2, "box");
                    TextDrawLetterSize(norFlag[3], 0.000000, 2.942329);
                    TextDrawTextSize(norFlag[3], 0.000000, 0.760000);
                    TextDrawAlignment(norFlag[3], 2);
                    TextDrawColor(norFlag[3], -1);
                    TextDrawUseBox(norFlag[3], 1);
                    TextDrawBoxColor(norFlag[3], 0x003087FF);
                    TextDrawSetShadow(norFlag[3], 0);
                    TextDrawSetOutline(norFlag[3], 0);
                    TextDrawBackgroundColor(norFlag[3], 255);
                    TextDrawFont(norFlag[3], 1);
                    TextDrawSetProportional(norFlag[3], 1);
                    TextDrawSetShadow(norFlag[3], 0);

                    norFlag[4] = TextDrawCreate(posx - 0.2, posy + 13.183303, "box");
                    TextDrawLetterSize(norFlag[4], 0.000000, 0.020499);
                    TextDrawTextSize(norFlag[4], 0.000000, 41.258949);
                    TextDrawAlignment(norFlag[4], 2);
                    TextDrawColor(norFlag[4], -1);
                    TextDrawUseBox(norFlag[4], 1);
                    TextDrawBoxColor(norFlag[4], 0x003087FF);
                    TextDrawSetShadow(norFlag[4], 0);
                    TextDrawSetOutline(norFlag[4], 0);
                    TextDrawBackgroundColor(norFlag[4], 255);
                    TextDrawFont(norFlag[4], 1);
                    TextDrawSetProportional(norFlag[4], 1);
                    TextDrawSetShadow(norFlag[4], 0);

                    if(clickable) 
                    {
                        norFlag[5] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(norFlag[5], 0.000000, 4);
                        TextDrawTextSize(norFlag[5], 24.000000, 43);
                        TextDrawAlignment(norFlag[5], 2);
                        TextDrawUseBox(norFlag[5], 1);
                        TextDrawBoxColor(norFlag[5], 0x00000000);
                        TextDrawSetSelectable(norFlag[5], true);
                    }
                }
                case E_FLAG_ICELAND:
                {
                    iceFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(iceFlag[0], 0.000000, 2.928329);
                    TextDrawTextSize(iceFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(iceFlag[0], 2);
                    TextDrawColor(iceFlag[0], -1);
                    TextDrawUseBox(iceFlag[0], 1);
                    TextDrawBoxColor(iceFlag[0], 0x02529CFF);
                    TextDrawSetShadow(iceFlag[0], 0);
                    TextDrawSetOutline(iceFlag[0], 0);
                    TextDrawBackgroundColor(iceFlag[0], 255);
                    TextDrawFont(iceFlag[0], 1);
                    TextDrawSetProportional(iceFlag[0], 1);
                    TextDrawSetShadow(iceFlag[0], 0);

                    iceFlag[1] = TextDrawCreate(posx - 5.627778, posy - 0.016663, "box");
                    TextDrawLetterSize(iceFlag[1], 0.000000, 2.938473);
                    TextDrawTextSize(iceFlag[1], 0.000000, 4.369962);
                    TextDrawAlignment(iceFlag[1], 2);
                    TextDrawColor(iceFlag[1], -1);
                    TextDrawUseBox(iceFlag[1], 1);
                    TextDrawBoxColor(iceFlag[1], -1);
                    TextDrawSetShadow(iceFlag[1], 0);
                    TextDrawSetOutline(iceFlag[1], 0);
                    TextDrawBackgroundColor(iceFlag[1], 255);
                    TextDrawFont(iceFlag[1], 1);
                    TextDrawSetProportional(iceFlag[1], 1);
                    TextDrawSetShadow(iceFlag[1], 0);

                    iceFlag[2] = TextDrawCreate(posx - 0.2, posy + 11.666717, "box");
                    TextDrawLetterSize(iceFlag[2], 0.000000, 0.386460);
                    TextDrawTextSize(iceFlag[2], 0.000000, 40.849857);
                    TextDrawAlignment(iceFlag[2], 2);
                    TextDrawColor(iceFlag[2], -1);
                    TextDrawUseBox(iceFlag[2], 1);
                    TextDrawBoxColor(iceFlag[2], -1);
                    TextDrawSetShadow(iceFlag[2], 0);
                    TextDrawSetOutline(iceFlag[2], 0);
                    TextDrawBackgroundColor(iceFlag[2], 255);
                    TextDrawFont(iceFlag[2], 1);
                    TextDrawSetProportional(iceFlag[2], 1);
                    TextDrawSetShadow(iceFlag[2], 0);

                    iceFlag[3] = TextDrawCreate(posx - 5.6, posy - 0.2, "box");
                    TextDrawLetterSize(iceFlag[3], 0.000000, 2.942329);
                    TextDrawTextSize(iceFlag[3], 0.000000, 0.760000);
                    TextDrawAlignment(iceFlag[3], 2);
                    TextDrawColor(iceFlag[3], -1);
                    TextDrawUseBox(iceFlag[3], 1);
                    TextDrawBoxColor(iceFlag[3], 0xDC1E35FF);
                    TextDrawSetShadow(iceFlag[3], 0);
                    TextDrawSetOutline(iceFlag[3], 0);
                    TextDrawBackgroundColor(iceFlag[3], 255);
                    TextDrawFont(iceFlag[3], 1);
                    TextDrawSetProportional(iceFlag[3], 1);
                    TextDrawSetShadow(iceFlag[3], 0);

                    iceFlag[4] = TextDrawCreate(posx - 0.2, posy + 13.183303, "box");
                    TextDrawLetterSize(iceFlag[4], 0.000000, 0.020499);
                    TextDrawTextSize(iceFlag[4], 0.000000, 41.258949);
                    TextDrawAlignment(iceFlag[4], 2);
                    TextDrawColor(iceFlag[4], -1);
                    TextDrawUseBox(iceFlag[4], 1);
                    TextDrawBoxColor(iceFlag[4], 0xDC1E35FF);
                    TextDrawSetShadow(iceFlag[4], 0);
                    TextDrawSetOutline(iceFlag[4], 0);
                    TextDrawBackgroundColor(iceFlag[4], 255);
                    TextDrawFont(iceFlag[4], 1);
                    TextDrawSetProportional(iceFlag[4], 1);
                    TextDrawSetShadow(norFlag[4], 0);

                    if(clickable) 
                    {
                        iceFlag[5] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(iceFlag[5], 0.000000, 4);
                        TextDrawTextSize(iceFlag[5], 24.000000, 43);
                        TextDrawAlignment(iceFlag[5], 2);
                        TextDrawUseBox(iceFlag[5], 1);
                        TextDrawBoxColor(iceFlag[5], 0x00000000);
                        TextDrawSetSelectable(iceFlag[5], true);
                    }
                }
                case E_FLAG_FAROESE:
                {
                    farFlag[0] = TextDrawCreate(posx, posy, "box");
                    TextDrawLetterSize(farFlag[0], 0.000000, 2.928329);
                    TextDrawTextSize(farFlag[0], 0.000000, 41.000000);
                    TextDrawAlignment(farFlag[0], 2);
                    TextDrawColor(farFlag[0], -1);
                    TextDrawUseBox(farFlag[0], 1);
                    TextDrawBoxColor(farFlag[0], -1);
                    TextDrawSetShadow(farFlag[0], 0);
                    TextDrawSetOutline(farFlag[0], 0);
                    TextDrawBackgroundColor(farFlag[0], 255);
                    TextDrawFont(farFlag[0], 1);
                    TextDrawSetProportional(farFlag[0], 1);
                    TextDrawSetShadow(farFlag[0], 0);

                    farFlag[1] = TextDrawCreate(posx - 5.627778, posy - 0.016663, "box");
                    TextDrawLetterSize(farFlag[1], 0.000000, 2.938473);
                    TextDrawTextSize(farFlag[1], 0.000000, 4.369962);
                    TextDrawAlignment(farFlag[1], 2);
                    TextDrawColor(farFlag[1], -1);
                    TextDrawUseBox(farFlag[1], 1);
                    TextDrawBoxColor(farFlag[1], 0x0165BFFF);
                    TextDrawSetShadow(farFlag[1], 0);
                    TextDrawSetOutline(farFlag[1], 0);
                    TextDrawBackgroundColor(farFlag[1], 255);
                    TextDrawFont(farFlag[1], 1);
                    TextDrawSetProportional(farFlag[1], 1);
                    TextDrawSetShadow(farFlag[1], 0);

                    farFlag[2] = TextDrawCreate(posx - 0.2, posy + 11.666717, "box");
                    TextDrawLetterSize(farFlag[2], 0.000000, 0.386460);
                    TextDrawTextSize(farFlag[2], 0.000000, 40.849857);
                    TextDrawAlignment(farFlag[2], 2);
                    TextDrawColor(farFlag[2], -1);
                    TextDrawUseBox(farFlag[2], 1);
                    TextDrawBoxColor(farFlag[2], 0x0165BFFF);
                    TextDrawSetShadow(farFlag[2], 0);
                    TextDrawSetOutline(farFlag[2], 0);
                    TextDrawBackgroundColor(farFlag[2], 255);
                    TextDrawFont(farFlag[2], 1);
                    TextDrawSetProportional(farFlag[2], 1);
                    TextDrawSetShadow(farFlag[2], 0);

                    farFlag[3] = TextDrawCreate(posx - 5.6, posy - 0.2, "box");
                    TextDrawLetterSize(farFlag[3], 0.000000, 2.942329);
                    TextDrawTextSize(farFlag[3], 0.000000, 0.760000);
                    TextDrawAlignment(farFlag[3], 2);
                    TextDrawColor(farFlag[3], -1);
                    TextDrawUseBox(farFlag[3], 1);
                    TextDrawBoxColor(farFlag[3], 0xEE2436FF);
                    TextDrawSetShadow(farFlag[3], 0);
                    TextDrawSetOutline(farFlag[3], 0);
                    TextDrawBackgroundColor(farFlag[3], 255);
                    TextDrawFont(farFlag[3], 1);
                    TextDrawSetProportional(farFlag[3], 1);
                    TextDrawSetShadow(farFlag[3], 0);

                    farFlag[4] = TextDrawCreate(posx - 0.2, posy + 13.183303, "box");
                    TextDrawLetterSize(farFlag[4], 0.000000, 0.020499);
                    TextDrawTextSize(farFlag[4], 0.000000, 41.258949);
                    TextDrawAlignment(farFlag[4], 2);
                    TextDrawColor(farFlag[4], -1);
                    TextDrawUseBox(farFlag[4], 1);
                    TextDrawBoxColor(farFlag[4], 0xEE2436FF);
                    TextDrawSetShadow(farFlag[4], 0);
                    TextDrawSetOutline(farFlag[4], 0);
                    TextDrawBackgroundColor(farFlag[4], 255);
                    TextDrawFont(farFlag[4], 1);
                    TextDrawSetProportional(farFlag[4], 1);
                    TextDrawSetShadow(norFlag[4], 0);

                    if(clickable) 
                    {
                        farFlag[5] = TextDrawCreate(posx, posy, "_");
                        TextDrawLetterSize(farFlag[5], 0.000000, 4);
                        TextDrawTextSize(farFlag[5], 24.000000, 43);
                        TextDrawAlignment(farFlag[5], 2);
                        TextDrawUseBox(farFlag[5], 1);
                        TextDrawBoxColor(farFlag[5], 0x00000000);
                        TextDrawSetSelectable(farFlag[5], true);
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

// --
// ALS OnPlayerClickTextDRaw
// --

#if defined _ALS_OnPlayerClickTextDraw
    #undef OnPlayerClickTextDraw
#else
    #define _ALS_OnPlayerClickTextDraw
#endif
#define OnPlayerClickTextDraw CB_OnPlayerClickTextDraw
#if defined CB_OnPlayerClickTextDraw
    forward CB_OnPlayerClickTextDraw(playerid, Text:clickedid);
#endif
