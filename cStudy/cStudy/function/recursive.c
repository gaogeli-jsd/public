#include <stdio.h>
 
void recursive(int);
 
void main(){
    recursive(1);
}
 
void recursive(int a)
{
    printf("a=%d\n", a);
    if (a < 5){  
        //  �ċA�Ăяo��
        recursive(a + 1);
    }
}

/*
========== ���s���ʁF ==========
a=1
a=2
a=3
a=4
a=5
*/
