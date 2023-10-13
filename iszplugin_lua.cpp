#include <Windows.h>

bool g_Running = false;
const WORD backtickKeyCode = VK_F10; // RE-UE4SS Console Code.

extern "C"
{
int printf(const char *format, ...);
}


void PressKey(WORD key)
{
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = key;
    input.ki.dwFlags = 0;
    SendInput(1, &input, sizeof(INPUT));

    input.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &input, sizeof(INPUT));
}

void TypeString(const char* str)
{
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == '_')
        {
            INPUT inputs[2] = {};

            inputs[0].type = INPUT_KEYBOARD;
            inputs[0].ki.wVk = VK_SHIFT;

            inputs[1].type = INPUT_KEYBOARD;
            inputs[1].ki.wVk = VK_OEM_MINUS;

            SendInput(2, inputs, sizeof(INPUT));

            inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;
            SendInput(2, inputs, sizeof(INPUT));
        }
        else
        {
            WORD keyCode = VkKeyScanA(str[i]); 

            if (keyCode & 0x0100)
            {
                PressKey(VK_SHIFT);
            }

            PressKey(keyCode & 0xFF);

            if (keyCode & 0x0100)
            {
                PressKey(VK_SHIFT);
            }
        }
    }
}



extern "C" __declspec(dllexport) void Jumping()
{
    const char* textToType = "set Character bPressedJump True"; // Jump

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void Status()
{
    const char* textToType = "set ISZCharacter health 1000000"; // Inf Health

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);

    const char* textToType0 = "set ISZCharacter m_Thirst 1000000"; // Inf Water

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType0);
    PressKey(VK_RETURN);

    const char* textToType1 = "set ISZCharacter m_Hunger 1000000"; // Inf Food

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType1);
    PressKey(VK_RETURN);
    
    const char* textToType2 = "set ISZCharacter m_Battery 1000000"; // Inf Charge

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType2);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void FastTime()
{
    const char* textToType = "set Actor CustomTimeDilation 1500"; // Buggy Fast Time

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void NormalTime()
{
    const char* textToType = "set Actor CustomTimeDilation 1"; // Normal Time

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void Walkspeed()
{
    const char* textToType = "set CharacterMovementComponent MaxWalkSpeed 10000";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);

    const char* textToType0 = "set CharacterMovementComponent MaxWalkSpeedCrouched 10000";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType0);
    PressKey(VK_RETURN);

    const char* textToType1 = "set CharacterMovementComponent MaxAcceleration 100000";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType1);
    PressKey(VK_RETURN);

    const char* textToType2 = "set CharacterMovementComponent GroundFriction 100000";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType2);
    PressKey(VK_RETURN);

    const char* textToType3 = "set CharacterMovementComponent WalkableFloorZ -360";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType3);
    PressKey(VK_RETURN);

    const char* textToType4 = "set CharacterMovementComponent WalkableFloorAngle -360";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType4);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void ResetWalk()
{
    const char* textToType = "set CharacterMovementComponent MaxWalkSpeed 600";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void Vehcile()
{
    const char* textToType = "set ISZVehicle m_Fuel 100";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);

    const char* textToType1 = "set ISZHeli m_EngineParts 1000";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType1);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void ResetVehcile()
{
    const char* textToType = "DestroyPawns";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void InfAmmo()
{
    const char* textToType = "set ShooterWeapon m_Count 1000000000";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void InfWeapon()
{
    const char* textToType = "set ShooterWeapon m_Health 1000000000";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void NoReload()
{
    const char* textToType = "set ShooterWeapon CurrentAmmoInClip 1000000000";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);
}

extern "C" __declspec(dllexport) void Invisible()
{
    const char* textToType = "set Actor bHidden True";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);

}

extern "C" __declspec(dllexport) void Range()
{
    const char* textToType = "set InstantWeaponData WeaponRange 1000000000";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);

}

extern "C" __declspec(dllexport) void Zoom()
{
    const char* textToType = "set WeaponData bCanZoom True";

    Sleep(50);
    PressKey(backtickKeyCode);
    TypeString(textToType);
    PressKey(VK_RETURN);

}

extern "C" __declspec(dllexport) void Credits()
{
    printf("=== Plugin Developers ===\n");
    printf("Cracko298   &   ToasterYT");
}

extern "C" __declspec(dllexport) void StopTyping() // Failsafe
{
    g_Running = false;
}