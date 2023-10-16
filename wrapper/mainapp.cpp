#include <iostream>
#include <windows.h>
#include <TlHelp32.h>
#include <cstdlib>
#include <string>

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
typedef void (*HiddenFunc)();
typedef void (*RangeFunc)();
typedef void (*ZoomFunc)(); 

bool TerminateSecondInstance(const wchar_t* processName) {
    bool foundFirstInstance = false;

    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

    if (hSnapshot == INVALID_HANDLE_VALUE) {
        return false;
    }

    PROCESSENTRY32 pe32;
    pe32.dwSize = sizeof(PROCESSENTRY32);

    if (Process32First(hSnapshot, &pe32)) {
        do {
            // Converts the process name to wide char string
            wchar_t wProcessName[MAX_PATH];
            if (MultiByteToWideChar(CP_ACP, 0, pe32.szExeFile, -1, wProcessName, MAX_PATH) > 0) {
                if (wcscmp(wProcessName, processName) == 0) {
                    if (foundFirstInstance) {
                        // Terminate the second instance
                        HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, pe32.th32ProcessID);
                        if (hProcess != nullptr) {
                            TerminateProcess(hProcess, 0);
                            CloseHandle(hProcess);
                            CloseHandle(hSnapshot);
                            return true; // Terminated the second instance (successful termanation)
                        }
                    }
                    foundFirstInstance = true;
                }
            }
        } while (Process32Next(hSnapshot, &pe32));
    }

    CloseHandle(hSnapshot);
    return false; // Second instance not found or couldn't be terminated
}

int main() {
    const wchar_t* processName = L"PluginLoader.exe";
    TerminateSecondInstance(processName);

    HINSTANCE dllHandle = nullptr;
    
    int choice;
    std::cout << "Choose the plugin to load:" << std::endl;
    std::cout << "1. iszplugin_uuu.dll" << std::endl;
    std::cout << "2. iszplugin_lua.dll" << std::endl;
    std::cout << "3. iszplugin_isz_inj.dll" << std::endl;
    std::cin >> choice;
    std::system("clear");

    switch (choice) {
        case 1:
            dllHandle = LoadLibrary("iszplugin_uuu.dll");
            std::cout << "iszplugin_uuu.dll loaded...\n" << std::endl;
            break;
        case 2:
            dllHandle = LoadLibrary("iszplugin_lua.dll");
            std::cout << "iszplugin_lua.dll loaded...\n" << std::endl;
            break;
        case 3:
            dllHandle = LoadLibrary("iszplugin_isz_inj.dll");
            std::cout << "iszplugin_isz_inj.dll loaded...\n" << std::endl;
            break;
        default:
            std::cerr << "Invalid choice." << std::endl;
            Sleep(4000);
            std::exit(1);
    }

    if (dllHandle == NULL) {
        std::cerr << "Failed to load the DLL Plugin." << std::endl;
        Sleep(2000);
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

    HiddenFunc Hidden = reinterpret_cast<HiddenFunc>(GetProcAddress(dllHandle, "Invisible"));
    ZoomFunc Zoom = reinterpret_cast<ZoomFunc>(GetProcAddress(dllHandle, "Zoom"));
    RangeFunc Range = reinterpret_cast<RangeFunc>(GetProcAddress(dllHandle, "Range"));

    if (credit == NULL) {
        std::cerr << "Failed to Find Allocated Memory for DLL Plugin." << std::endl;
        FreeLibrary(dllHandle);
        Sleep(2000);
        std::exit(0);
    }

    credit();
    std::cout << "\n" << std::endl;

    int number = 0;

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
    std::cout << "Plus Key      = No Reload" << std::endl;
    std::cout << "Star Key      = Enable Zooming on Non-Rifles" << std::endl;
    std::cout << "Tilde Key     = Unlimited Weapon Range" << std::endl;
    std::cout << "Forward Slash     = Go Invisible\n" << std::endl;
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

        if (GetAsyncKeyState(VK_OEM_PLUS) & 0x8000) // Plus Key Enables no Reload
        {
            Sleep(10);
            Reload();
        }

        if (GetAsyncKeyState(VK_DIVIDE) & 0x8000) // Forward Slash Enables Invisibility
        {
            Sleep(10);
            Hidden();
        }

        if (GetAsyncKeyState(VK_MULTIPLY) & 0x8000) // Star Key Enables Zooming
        {
            Sleep(10);
            Zoom();
        }
        
        if (GetAsyncKeyState(VK_OEM_3) & 0x8000) // Tilde Key Enables Inf Range
        {
            Sleep(10);
            Range();
        }
        

        if ((GetAsyncKeyState(VK_ESCAPE) & 0x8000) && (GetAsyncKeyState(VK_CONTROL) & 0x8000))
        {
            break;
        }

    }

    FreeLibrary(dllHandle);
    std::exit(0);
}