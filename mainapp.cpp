#include <iostream>
#include <windows.h>

typedef void (*ResetWalkFunc)();
typedef void (*JumpingFunc)();
typedef void (*StatusFunc)();
typedef void (*FastTimeFunc)();
typedef void (*NormalTimeFunc)();
typedef void (*WalkFunc)();
typedef void (*VehcileFunc)();
typedef void (*DestroyFunc)();
typedef void (*AmmoFunc)();
typedef void (*WeaponFunc)();
typedef void (*ReloadFunc)();
typedef void (*CreditsFunc)();

int main() {
    HINSTANCE dllHandle = LoadLibrary("iszplugin.dll"); 

    if (dllHandle == NULL) {
        std::cerr << "Failed to load the DLL Plugin." << std::endl;
        Sleep(4000);
        std::exit(0);
    }

    CreditsFunc credit = reinterpret_cast<CreditsFunc>(GetProcAddress(dllHandle, "Credits"));

    JumpingFunc Jump = reinterpret_cast<JumpingFunc>(GetProcAddress(dllHandle, "Jumping"));
    WalkFunc Walk = reinterpret_cast<WalkFunc>(GetProcAddress(dllHandle, "Walkspeed"));
    ResetWalkFunc ResetWalk = reinterpret_cast<ResetWalkFunc>(GetProcAddress(dllHandle, "ResetWalk"));
    FastTimeFunc FastTime = reinterpret_cast<FastTimeFunc>(GetProcAddress(dllHandle, "FastTime"));
    NormalTimeFunc NormalTime = reinterpret_cast<NormalTimeFunc>(GetProcAddress(dllHandle, "NormalTime"));
    StatusFunc Stats = reinterpret_cast<StatusFunc>(GetProcAddress(dllHandle, "Status"));
    VehcileFunc Fuel = reinterpret_cast<VehcileFunc>(GetProcAddress(dllHandle, "Vehcile"));
    DestroyFunc Destroy = reinterpret_cast<DestroyFunc>(GetProcAddress(dllHandle, "ResetVehcile"));
    AmmoFunc Ammo = reinterpret_cast<AmmoFunc>(GetProcAddress(dllHandle, "InfAmmo"));
    ReloadFunc Reload = reinterpret_cast<ReloadFunc>(GetProcAddress(dllHandle, "NoReload"));
    WeaponFunc Weapon = reinterpret_cast<WeaponFunc>(GetProcAddress(dllHandle, "InfWeapon"));

    if (credit == NULL) {
        std::cerr << "Failed to Find Allocated Memory for DLL Plugin." << std::endl;
        FreeLibrary(dllHandle);
        Sleep(4000);
        std::exit(0);
    }

    credit();
    std::cout << "\n" << std::endl;

    std::cout << "Spacebar      = Jump" << std::endl;
    std::cout << "Period        = Hyper Speed" << std::endl;
    std::cout << "Comma         = Reset Speed" << std::endl;
    std::cout << "Up-Arrow      = Spam Days" << std::endl;
    std::cout << "Down-Arrow    = Stop Spamming Days" << std::endl;
    std::cout << "Numkey 6      = Infinite Status" << std::endl;
    std::cout << "Numkey 7      = No Fuel/Engine Parts Needed" << std::endl;
    std::cout << "Numkey 8      = Reset All Vehciles" << std::endl;
    std::cout << "Numkey 9      = Infinite Ammo" << std::endl;
    std::cout << "Numkey 0      = Infinite Weapon Durrability" << std::endl;
    std::cout << "Minus Key     = No Reload\n" << std::endl;
    std::cout << "Escape + Control      = Close Plugin" << std::endl;

    while (1 != 2) {
        if (GetAsyncKeyState(VK_OEM_PERIOD) & 0x8000) // Period Updates Speed
        {
            Sleep(10);
            Walk();
        }

        if (GetAsyncKeyState(VK_OEM_COMMA) & 0x8000) // Comma Resets Speed
        {
            Sleep(10);
            ResetWalk();
        }

        if (GetAsyncKeyState(VK_SPACE) & 0x8000) // Space Jumps Player
        {
            Sleep(10);
            Jump();
        }

        if (GetAsyncKeyState(VK_UP) & 0x8000) // Up Arrow Speeds Updates Day Speed
        {
            Sleep(10);
            FastTime();
        }

        if (GetAsyncKeyState(VK_DOWN) & 0x8000) // Down Arrow Resets Day Speed
        {
            Sleep(10);
            NormalTime();
        }

        if (GetAsyncKeyState(0x36) & 0x8000) // Numkey 6 Inf Health/Stats
        {
            Sleep(10);
            Stats();
        }

        if (GetAsyncKeyState(0x37) & 0x8000) // Numkey 7 Fuel & Helicopter Not Need Fuel/Parts
        {
            Sleep(10);
            Fuel();
        }

        if (GetAsyncKeyState(0x38) & 0x8000) // Numkey 8 Resets Vehciles
        {
            Sleep(10);
            Destroy();
        }

        if (GetAsyncKeyState(0x39) & 0x8000) // Numkey 9 Enables Inf Ammo
        {
            Sleep(10);
            Ammo();
        }

        if (GetAsyncKeyState(0x30) & 0x8000) // Numkey 0 Enables Inf Weapon Durrability
        {
            Sleep(10);
            Weapon();
        }

        if (GetAsyncKeyState(0x6D) & 0x8000) // Minus Key Enables no Reload
        {
            Sleep(10);
            Reload();
        }

        if ((GetAsyncKeyState(VK_ESCAPE) & 0x8000) && (GetAsyncKeyState(VK_CONTROL) & 0x8000))
        {
            break;
        }

    }

    FreeLibrary(dllHandle);
    std::exit(0);
}