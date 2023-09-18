#include <Windows.h>

typedef int (*MyFunctionType)(int, int);

int LoadAndCallDLL() {
    const char* dllName = "iszplugin_uuu.dll";

    HMODULE hModule = LoadLibraryA(dllName);

    if (hModule != NULL) {
        MyFunctionType myFunction = (MyFunctionType)GetProcAddress(hModule, "MyFunction");

        if (myFunction != NULL) {
            int result = myFunction(2, 3);
            return result;
        } else {
            return -1;
        }

        FreeLibrary(hModule);
    } else {
        return -2;
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        int result = LoadAndCallDLL();
    }
    return TRUE;
}
