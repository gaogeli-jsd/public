#include<stdio.h>

void main()
{
    int a = 5;
    int* pa;
    int** ppa;

    pa = &a;
    ppa = &pa;

    printf("\n a�̃A�h���X   = %p", &a);
    printf("\n a             = %d", a);

    printf("\n pa�̃A�h���X  = %p", pa);
    printf("\n pa            = %d", *pa);

    printf("\n ppa�̃A�h���X = %p", *ppa);
    printf("\n ppa           = %d", **ppa);
}

/*
==================== ���s���� ====================
 a�̃A�h���X   = 0000000C289FFBF4
 a             = 5
 pa�̃A�h���X  = 0000000C289FFBF4
 pa            = 5
 ppa�̃A�h���X = 0000000C289FFBF4
 ppa           = 5
*/
