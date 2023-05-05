#include <windows.h>

#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevinstance, LPSTR lpCmdLine, int nShowCmd)
{
    MessageBox(NULL, TEXT("Hello, Win32 SDK"), TEXT("Welcome"), MB_OK);

    ExitProcess(EXIT_SUCCESS);
}

/*
    typedef char CHAR;
    typedef unsigned short wchar_t;
    typedef wchar_t WCHAR;
    MessageBox(HWND, CHAR*, CHAR*, DWORD);  // ASCII

    MessageBox(HWND, WCHAR*, WCHAR*, DWORD);    // UNICODE

    MessageBox(HWND, CHAR*, CHAR*, CHAR*);
    MessageBox(HWND, WCHAR*, WCHAR*, DWORD);

    #ifdef UNICODE
    #define MessageBox MessageboxW
    #else
    #define MessageBox MessageBoxA
    #endif
*/