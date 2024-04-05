#include <stdio.h>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>

#define BUFSIZE MAX_PATH
#define BUFFERSIZE 32

void main()
{

    TCHAR Buffer[BUFSIZE];
    DWORD dwRet;

    TCHAR iniFullPath[BUFSIZE];

    dwRet = GetCurrentDirectory(BUFSIZE, Buffer);

    printf("HelloWorld.\n");

    if (dwRet == 0)
    {
        printf("GetCurrentDirectory failed (%d)\n", GetLastError());
        return;
    }
    else
    {
        printf(" CurrentDirectory is : (%s)\n", Buffer);
    }

    strcpy(iniFullPath, Buffer);
    strcat(iniFullPath, "\\test.ini");
    printf(" iniFullPath is : (%s)\n", iniFullPath);

    // iniファイルの書き込み(なければ作成)
    WritePrivateProfileString(
        "section1",
        "key1",
        "value1",
        iniFullPath);

    WCHAR buf[BUFFERSIZE];

    // WINBASEAPI DWORD WINAPI
    //  GetPrivateProfileStringA (LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpDefault,
    // LPSTR lpReturnedString, DWORD nSize, LPCSTR lpFileName);
    LPSTR lpReturnedString;
    // 文字列を読み出す
    //    StringBuilder sb = new StringBuilder(1024);
    TCHAR returnedString[MAX_PATH];
    printf("hello --- 51 --- ");
    GetPrivateProfileString(
        "section1",
        "key1",
        NULL,
        returnedString,
        BUFFERSIZE,
        iniFullPath);

    printf(" returnedString is : (%s)\n", returnedString);
    printf("hello --- 61 --- ");
}


/*
==================== 実行結果： ====================
HelloWorld.
 CurrentDirectory is : (C:\__BASE\__c\cStudy\ini)
 iniFullPath is : (C:\__BASE\__c\cStudy\ini\test.ini)
hello --- 51 ---  returnedString is : (value1)
hello --- 61 ---
*/