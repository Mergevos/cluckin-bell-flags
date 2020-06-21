# cluckin-bell-flags

Include made by Cluckin-Bell organization. This include brings you up to 20 and more flags

# Installation

Simply install by:
```
sampctl package install Cluckin-Bell/cluckin-bell-flags
```
Or, if you haven't been using sampctl download, and put files into 
`pawno/include/` folder

# Maintenance

This include is currently under development, we're looking for people to help us. 

# Functions 

```
stock CB_CreateFlag(flag, flagsize, Float:posx, Float:posy, bool:clickable = false)
```
```flag``` - flag to create  
```flagsize``` - desired flagsize  
```Float:posx / Float:posy``` - desired position where flags are going to be created  
```bool:clickable``` - sets whether the flag may be selected or not, not by default 

```
stock CB_HideFlagForPlayer(playerid, flag, flagsize)
```
```playerid``` - player to hide flag  
```flag``` - flag to hide  
```flagsize``` - flagsize to hide  

```
stock CB_ShowFlagForPlayer(playerid, flag, flagsize)
```
```playerid``` - player to show flag  
```flag``` - flag to show  
```flagsize``` - flagsize to show  

# Callbacks 

```
public OnPlayerClickFlag(playerid, flag, flagsize)
```
```playerid``` - player who clicked the flag  
```flag``` - clicked flag  
```flagsize``` - clicked flag's flagsize  

# Coming soon

A lot of new flags & sizes. Currently there's just 1 size. 
