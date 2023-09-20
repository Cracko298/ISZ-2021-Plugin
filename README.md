# ISZ-2021-Plugin
- **Simple yet powerful plugin for ISZ-2021 (PC/Steam Port) with plentiful features.**
- **Supports "[RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS)", "[ISZ-Injector](https://github.com/ISZ-Hacker-Organization/ISZ-VS-Injector)", and "[UUU4](https://framedsc.com/GeneralGuides/universal_ue4_consoleunlocker.htm)".**

## Downloads:
- **Download [Plugin Loader](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v2/PluginLoader.exe) (Version v2.0).**
- **Download The "ISZ-Injector" [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v2/iszplugin_isz_inj.dll) (Version v2.0).**
- **Download "The RE-UE4SS" [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v2/iszplugin_lua.dll) (Version v2.0).**
- **Download "The UUU4" [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v2/iszplugin_uuu.dll) (Version v2.0).**
- **Respository Link for [RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS).**

## Next Update Plans:
- **Add More Codes.**
- **Fix the "No Reload" Code (Keybind Issue).**

## Plugin Codes:
```
Spacebar      = Jump
Period        = Hyper Speed
Comma         = Reset Speed
Up-Arrow      = Spam Days
Down-Arrow    = Stop Spamming Days
Numkey 6      = Infinite Status
Numkey 7      = No Fuel/Engine Parts Needed
Numkey 8      = Reset All Vehciles
Numkey 9      = Infinite Ammo
Numkey 0      = Infinite Weapon Durrability
Minus Key     = No Reload
```

# FaQ:
### Why are there so many version of the Same Plugin?
- **This is so the User who wishes to Install the Plugin, can do it on a plethera of Different Platforms for Hacking UE4 Games.**

### Can this do Much more than just Load the iszplugin.dll Files?
- **Nothing is stopping you from developing your Own custom Loader with your own Codes/Cheats, just understand the MIT License.**

### Will this Get Me Banned?
- **No, this is an External Program that in-of itself cannot get you Banned by itself.**
- **Using a thing like "RE-UE4SS", and "UUU4" could technically get you banned if used to Cheat Online. Otherwise they are 100% Legal & Safe.**

### Will this support UMU/UML (Unreal Mod Unlocker/Loader)?
- **The plan in the future is to fully support these platforms. But for now, only things that can load the Console are Fully Supported.**

### Do these work Online?
- **Yes, however I strongly advise against this, cheating online can ruin the game for others. And possibly if reported, could get you VAC Banned.**

## Building:

### Plugin-Loader
- **A Basic Wrapper for the DLL Plugin Loading.**
```
> g++ -o PluginLoader.exe -O3 -s mainapp.cpp
```
### RE-UE4SS Plugin
- **RE-UE4SS (UE4 Lua Subsystem) Plugin.**
```
> g++ -shared -o iszplugin_lua.dll -O3 -s iszplugin_lua.cpp
```
### UUU4 Plugin
- **UUU4 (Universal UE4 Unlocker) Plugin.**
```
> g++ -shared -o iszplugin_uuu.dll -O3 -s iszplugin_uuu.cpp
```
### ISZ-Injector Plugin
- **ISZ-Console-Injector Plugin.**
```
> g++ -shared -o iszplugin_isz_inj.dll -O3 -s iszplugin_isz_inj.cpp
```

## Documentation/Dumps:
- **Want to make your own ISZ PC/Steam Plugins?**
- **You can make your own using these Dump Files [Here](https://github.com/Cracko298/ISZ-Cheat-Sheet).**
