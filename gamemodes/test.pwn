#include <a_samp>

//#define @_PRINT__

#include <CB_Flags>
#include <YSI_Visual\y_commands>

#define FILTERSCRIPT

public OnGameModeInit()
{
    print("Bububf");
    CB_CreateFlag(E_FLAG_INDONESIA, E_FLAG_MEDIUM, 100.0, 100.0, true);
    CB_CreateFlag(E_FLAG_DUTCH, E_FLAG_MEDIUM, 170.0, 170.0, true);
    CB_CreateFlag(E_FLAG_GERMANY, E_FLAG_MEDIUM, 200.0, 200.0, true);
    return 1;
}

public OnPlayerSpawn(playerid)
{
    return 1;
}

public OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    return 1;
}

public OnPlayerClickFlag(playerid, flag, flagsize)
{
    if(flag == E_FLAG_INDONESIA || flag == E_FLAG_GREEK) {
        SendClientMessage(playerid, -1, "imsim");
    }
    return 1;
}

YCMD:testtt(playerid, params[], help)
{
    CancelSelectTextDraw(playerid);
    new Float: X, Float: Y, Float: Z;
    GetPlayerPos(playerid, X, Y, Z);
    CreateVehicle(411, X, Y , Z, 0.0, 0, 0, -1);
    return 1;
}

YCMD:test1(playerid, params[], help)
{
    CB_ShowFlagForPlayer(playerid, E_FLAG_INDONESIA, E_FLAG_MEDIUM); CB_ShowFlagForPlayer(playerid, E_FLAG_DUTCH, E_FLAG_MEDIUM);
    CB_ShowFlagForPlayer(playerid, E_FLAG_GERMANY, E_FLAG_MEDIUM);
    SelectTextDraw(playerid, -1);
    SendClientMessage(playerid, -1, "const message[]");
    
    return 1;
}

main(){}
