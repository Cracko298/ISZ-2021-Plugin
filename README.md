[![paypal](https://github.com/Cracko298/ISZ-2021-Plugin/blob/main/payp.png)](https://www.paypal.me/cracko298)

# ISZ-2021-Plugin
- **Simple yet powerful plugin for ISZ-2021 (PC/Steam Port) with plentiful features.**
- **Supports "[RE-UE4SS](https://github.com/UE4SS-RE/RE-UE4SS)", "[ISZCI](https://github.com/ISZ-Hacker-Organization/ISZ-VS-Injector)", and "[UUU4](https://framedsc.com/GeneralGuides/universal_ue4_consoleunlocker.htm)".**

## Downloads:
- **Download [Plugin Loader](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v4/PluginLoader.exe) (Version v4.0).**
- **Download [Auto Loader](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v4/iszplg_loader.dll) (Version v1.0).**
- **Download The "ISZ-Injector" [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v4/iszplugin_isz_inj.dll) (Version v4.0).**
- **Download The "RE-UE4SS" [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v4/iszplugin_lua.dll) (Version v4.0).**
- **Download The "UUU4" [ISZ-Plugin](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v4/iszplugin_uuu.dll) (Version v4.0).**
- **Download The "Complete Package" [ISZ-Plugin-Packages](https://github.com/Cracko298/ISZ-2021-Plugin/releases/download/v4/iszplugin_package.zip) (Version v4.0).**

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
- **As of version "v4" the release has now included Loading the ISZ-2021-Plugin "PluginLoader.exe" which is needed as it's a wrapper for the Plugin.**

### Do these work Online?
- **Yes, however I strongly advise against this, cheating online can ruin the game for others. And possibly if reported, could get you VAC Banned.**

### Can I use [ISZ_J](https://github.com/Cracko298/ISZ_J) and/or [ISZ_R](https://github.com/Cracko298/ISZ_R)?
- **Yes! Infact both of these codes/cheats are avaliable in "THIS" Plugin! Same controls, with more functionality (Faster and Better Super Speed).**

### Do you accept donations?
- **Yes! I accept donations via [PayPal](https://www.paypal.me/cracko298).**

### Why is this open-source?
- **I love helping others get into Modding anyway I can. Albeit this is a simple cheat, but it is open-source to allow YOU to experiment and make your own Codes.**

### Why "ISZ-Plugin" vs. "ISZ-Hack-Tool"?
- **ISZ-Plugin allows YOU to be in control of your own Game. Instead of just having preset conditions and Modified Save-Games.**

### Where do I put the "Automatic Loader" *.dll File?
- **You can put it into the "UnrealModUnlockerPlugins" Folder using UMU, or the "Mods" Folder for both RE-UE4SS and UML. (Note: That the PluginLoader/Wrapper is required along with iszplugin).**

### Does this support Switch/Linux/MacOS?
- **No, it doesn't support HorizonOS (Switch), MacOS, or Linux Operating Systems. And likely won't ever support these platforms.**


# Building:

### Automatic-Loader (Requires Plugin-Loader)
- **Supports Automatic Loading the "ISZ-2021-Plugin" with UMU, RE-UE4SS, and UML.**
```
> g++ -shared -o iszplg_loader.dll -O3 -s iszplg_load.cpp
```
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

### Example Calling:
```cpp
#include <iostream>
#include <windows.h>
#include <TlHelp32.h>
#include <cstdlib>
#include <string>

typedef void (*HiddenFunc)();

int main() {

    HINSTANCE dllHandle = nullptr;
    dllHandle = LoadLibrary("iszplugin_uuu.dll");

    if (dllHandle == NULL) {
        std::cerr << "Failed to load the DLL Plugin." << std::endl;
        Sleep(2000);
        std::exit(0);
    }

    HiddenFunc Hidden = reinterpret_cast<HiddenFunc>(GetProcAddress(dllHandle, "Invisible"));

    if (Hidden == NULL) {
        std::cerr << "Failed to Find Allocated Memory for DLL Plugin." << std::endl;
        FreeLibrary(dllHandle);
        Sleep(2000);
        std::exit(0);
    }

    while (1==1){
    if (GetAsyncKeyState(VK_DIVIDE) & 0x8000) // Forward Slash Enables Invisibility
        {
            Sleep(10);
            Hidden();
        }
    }

    if ((GetAsyncKeyState(VK_ESCAPE) & 0x8000) && (GetAsyncKeyState(VK_CONTROL) & 0x8000))
        {
            break;
        }
  }

FreeLibrary(dllHandle);
std::exit(0);

}

```


# Credits:
- **[@Cracko298](https://github.com/Cracko298) - Head/Lead Researcher & Developer of Plugin.**
- **[@YT-Toaster](https://github.com/YT-Toaster) - Co-Developer & Researcher of Plugin.**
- **[@KingBlueJay](https://github.com/Kingbluejay) - Tested-Out Plugin Offline and Online Codes.**
- **[@GageCover](https://github.com/gagec0420) - Tested-Out Plugin Offline & Online Codes.**
- **And everyone else who helped use, and test out the plugin!**

