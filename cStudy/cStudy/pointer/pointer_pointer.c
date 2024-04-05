#include<stdio.h>

void main()
{
    int a = 5;
    int* pa;
    int** ppa;

    pa = &a;
    ppa = &pa;

    printf("\n aのアドレス   = %p", &a);
    printf("\n a             = %d", a);

    printf("\n paのアドレス  = %p", pa);
    printf("\n pa            = %d", *pa);

    printf("\n ppaのアドレス = %p", *ppa);
    printf("\n ppa           = %d", **ppa);
}

/*
==================== 実行結果 ====================
 aのアドレス   = 0000000C289FFBF4
 a             = 5
 paのアドレス  = 0000000C289FFBF4
 pa            = 5
 ppaのアドレス = 0000000C289FFBF4
 ppa           = 5
*/
