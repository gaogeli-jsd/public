#include <stdio.h>

// swap

//  �ϐ��̒l����ւ����s���֐�
void swap(int*,int*);
 
void main(){
    int a = 1,b = 2;
    printf("a = %d,  b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d,  b = %d\n",a,b);
}
 
//  �l�̓���ւ�
void swap(int* num1,int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

/*
==================== ���s���ʁF ====================
a = 1,  b = 2
a = 2,  b = 1
*/