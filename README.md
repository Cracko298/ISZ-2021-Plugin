# ISZ-2021-Plugin
- Simple yet powerful plugin for ISZ-2021 (PC/Steam Port) with plentiful features.

## Downloads:
- **Download [Plugin Loader](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v1/PluginLoader.exe).**
- **Download [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v1/iszplugin.dll).**
- **Respository Link for [RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS).**

## Next Update Plans:
- **Add** ***UUU4*** **Support.**
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

## Building:

### Plugin-Loader
- **A Basic Wrapper for the DLL Plugin Loading.**
```
> g++ -o PluginLoader.exe -O3 -s mainapp.cpp
```
### RE-UE4SS Plugin
```
> g++ -shared -o iszplugin_lua.dll -O3 -s iszplugin_lua.cpp
```
### UUU Plugin
```
> g++ -shared -o iszplugin_uuu.dll -O3 -s iszplugin_uuu.cpp
```
### ISZ-Injector Plugin
```
> g++ -shared -o iszplugin_isz_inj.dll -O3 -s iszplugin_isz_inj.cpp
```

## Documentation/Dumps:
- **Want to make your own ISZ PC/Steam Plugins?**
- **You can make your own using these Dump Files [Here](https://github.com/Cracko298/ISZ-Cheat-Sheet).**
