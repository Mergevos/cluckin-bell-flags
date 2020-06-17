# cluckin-bell-flags

Include made by Cluckin-Bell organization. This include brings you up to 20 and more flags, but currently there are 2.

# Installation

Simply install by:
```
sampctl package install Cluckin-Bell/cluckin-bell-flags
```
Or, if you haven't been using sampctl download, and put files into 
`pawno/include/` folder

# Functions 

```
stock CB_CreateFlagForPlayer(playerid, flag, flagsize, Float:posx, Float:posy)
```
Where ```playerid``` is id Flag's creating for  
```flag``` - flag to create  
```flagsize``` - desired flagsize  
```Float:posx / Float:posy``` - desired position where flags are going to be created  

# Coming soon

A lot of new functions and sizes. Currently there's just 1 size. 
A function like ```CB_SetFlagClickable``` should be included into next update, together with ```OnPlayerClickFlag``` callback
