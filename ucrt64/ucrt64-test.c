#include <windows.h>
int APIENTRY WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, PSTR cmdline, int cmdshow)
{
    TCHAR name[MAX_PATH];
    GetModuleFileName(NULL, name, MAX_PATH);
    return MessageBox(NULL, cmdline, name, 0);
}