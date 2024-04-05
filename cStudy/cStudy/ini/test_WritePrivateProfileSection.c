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

    // ini�t�@�C���̏�������(�Ȃ���΍쐬)
    WritePrivateProfileSection(
        "section1",
        "key1=abc\0" // �������ɃR���}���������Ƃɒ���
        "key2=����������\0"
        "key3=���{��\0",
        iniFullPath);

     TCHAR returnedString[MAX_PATH];
    GetPrivateProfileString(
        "section1",
        "key3",
        NULL,
        returnedString,
        BUFFERSIZE,
        iniFullPath);

    printf(" returnedString is : (%s)\n", returnedString);

}
