# ISZ-2021-Plugin
[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.me/cracko298)
- **Simple yet powerful plugin for ISZ-2021 (PC/Steam Port) with plentiful features.**
- **Supports "[RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS)", "[ISZCI](https://github.com/ISZ-Hacker-Organization/ISZ-VS-Injector)", and "[UUU4](https://framedsc.com/GeneralGuides/universal_ue4_consoleunlocker.htm)".**

## Downloads:
- **Download [Plugin Loader](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v2/PluginLoader.exe) (Version v3.0).**
- **Download The "ISZ-Injector" [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v3/iszplugin_isz_inj.dll) (Version v3.0).**
- **Download The "RE-UE4SS" [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v3/iszplugin_lua.dll) (Version v3.0).**
- **Download The "UUU4" [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v3/iszplugin_uuu.dll) (Version v3.0).**
- **Download The "Complete Package" [ISZ-Plugin-Packages](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v3/iszplugin_package.zip) (Version v3.0).**

## Next Update Plans:
- **Add EVEN More Codes (or Add Alternate Codes).**

## Plugin Codes:
```
Spacebar        = Jump
Period          = Hyper Speed
Comma           = Reset Speed
Up-Arrow        = Spam Days
Down-Arrow      = Stop Spamming Days
Numkey 6        = Infinite Status
Numkey 7        = No Fuel/Engine Parts Needed
Numkey 8        = Reset All Vehciles
Numkey 9        = Infinite Ammo
Numkey 0        = Infinite Weapon Durrability
Plus Key        = No Reload
Star Key        = Enable Zoombing on Non-Rifles
Tilde Key       = Unlimited Weapon Range
Forward Slash   = Go Invisible

Esc + Ctrl      = Close Plugin/Cheats
```

# FaQ:
### Why are there so many version of the Same Plugin?
- **This is so the User who wishes to Install the Plugin, can do it on a plethera of Different Platforms for Hacking UE4 Games.**

### Can this do Much more than just Load the iszplugin.dll Files?
- **Nothing is stopping you from developing your Own custom Loader with your own Codes/Cheats, just understand/follow the MIT License.**

### Will this Get Me Banned?
- **No, this is an External Program that in-of itself cannot get you Banned by itself.**
- **Using a thing like "RE-UE4SS", and "UUU4" could technically get you banned if used to Cheat Online. Otherwise they are 100% Legal & Safe.**

### Will this support UMU/UML (Unreal Mod Unlocker/Loader)?
- **The plan in the future is to fully support these platforms. But for now, only things that can load the Console are Fully Supported.**

### Do these work Online?
- **Yes, however I strongly advise against this, cheating online can ruin the game for others. And possibly if reported, could get you VAC Banned.**

### Can I use ISZ_J and/or ISZ_R?
- **Yes! Infact both of these codes/cheats are avaliable in "THIS" Plugin! Same controls, with more functionality (Faster and Better Super Speed).**

### Do you accept donations?
- **Yes! I accept donations via PayPal.**

### Why is this open-source?
- **I love helping others get into Modding anyway I can. Albeit this is a simple cheat, but it is open-source to allow YOU to experiment and make your own Codes.**

### Why "ISZ-Plugin" vs. "ISZ-Hack-Tool"?
- **ISZ-Plugin allows YOU to be in control of your own Game. Instead of just having preset conditions and Modified Save-Games.**

# Building:

### Plugin-Loader
- **A Basic Wrapper for the DLL Plugin Loading.**
```
> g++ -o PluginLoader.exe -O3 -s mainapp.cpp
```
### RE-UE4SS Plugin
- **[RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS) (UE4 Lua Subsystem) Plugin.**
```
> g++ -shared -o iszplugin_lua.dll -O3 -s iszplugin_lua.cpp
```
### UUU4 Plugin
- **[UUU4](https://framedsc.com/GeneralGuides/universal_ue4_consoleunlocker.htm) (Universal UE4 Unlocker) Plugin.**
```
> g++ -shared -o iszplugin_uuu.dll -O3 -s iszplugin_uuu.cpp
```
### ISZ-Injector Plugin
- **[ISZCI](https://github.com/ISZ-Hacker-Organization/ISZ-VS-Injector) (ISZ Console Injector) Plugin.**
```
> g++ -shared -o iszplugin_isz_inj.dll -O3 -s iszplugin_isz_inj.cpp
```

## Documentation/Dumps:
- **Want to make your own ISZ PC/Steam Plugins?**
- **You can make your own using these Dump Files [Here](https://github.com/Cracko298/ISZ-Cheat-Sheet).**

## Call 'iszplugin.dll' files Yourself:
### Function Names:
```
Credits();
Jumping();
Walkspeed();
ResetWalk();
FastTime();
NormalTime();
Status();
Vehcile();
ResetVehcile();
InfAmmo();
NoReleoad();
InfWeapon();
Invisible();
Zoom();
Range();
```

# Credits:
- **[@Cracko298](https://github.com/Cracko298) - Head/Lead Researcher & Developer of Plugin.**
- **[@YT-Toaster](https://github.com/YT-Toaster) - Co-Developer & Researcher of Plugin.**
- **[@KingBlueJay](https://github.com/Kingbluejay) - Tested-Out Plugin Offline and Online Codes.**
- **[@GageCover](https://github.com/gagec0420) - Tested-Out Plugin Offline & Online Codes.**
- **And everyone else who helped use, and test out the plugin!**

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.me/cracko298)

