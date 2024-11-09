#include <stdio.h>
#include <shlobj.h>
#include <windows.h>
 
// 添加不可删除文件
BOOL SetImmunity(char *FilePath,char *FileName)
{
    char file[2048] = { 0 };
 
    strncpy(file, FilePath, strlen(FilePath));
    strcat(file, FileName);
    BOOL bRet = CreateDirectory(file, NULL);
    if (bRet)
    {
        strcat(file, "\\anti...\\");
        bRet = CreateDirectory(file, NULL);
        if (bRet)
        {
            SetFileAttributes(file, FILE_ATTRIBUTE_HIDDEN);
            return TRUE;
        }
    }
    return FALSE;
}
void ClearImmunity(char *FilePath, char *FileName)
{
    char file[2048] = { 0 };
 
    strncpy(file, FilePath, strlen(FilePath));
    strcat(file, FileName);
 
    strcat(file, "\\anti...\\");
    RemoveDirectory(file);
 
    ZeroMemory(file, MAX_PATH);
    strncpy(file, FilePath, strlen(FilePath));
    strcat(file, FileName);
    RemoveDirectory(file);
}
 
int main(int argc, char * argv[])
{
    char *Fuk[4] = { "你", "好", "世", "界" };
    int FukLen = sizeof(Fuk) / sizeof(int);
 
    TCHAR Destop[MAX_PATH];
    SHGetSpecialFolderPath(NULL, Destop, CSIDL_DESKTOP, FALSE);  
 
    for (int x = 0; x < FukLen; x++)
    {
        ClearImmunity("c://", Fuk[x]);
    }
 
    system("pause");
    return 0;
}
