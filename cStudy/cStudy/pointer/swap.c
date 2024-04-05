#include <stdio.h>

// swap.c

void swap(int a, int b);
void swap2(int *a, int *b);

void main(){
    printf(" main ---------- begin\n");
    int x = 5;
    int y = 6;
    printf(" main --- x = %d,  y = %d\n", x, y);
    printf(" main --- &x = %d,  &y = %d\n", &x, &y);
    swap(x, y);
    printf(" main --- x = %d,  y = %d\n", x, y);
    swap2(&x, &y);
    printf(" main --- x = %d,  y = %d\n", x, y);
    printf(" main --- &x = %d,  &y = %d\n", &x, &y);
    printf(" main ---------- end\n");
}

// 値参照
void swap(int a, int b){
    printf(" --- swap ---------- begin\n");
    printf(" --- swap --- a = %d,  b = %d\n", a, b);
    printf(" --- swap --- &a = %d,  &b = %d\n", &a, &b);
    int tmp = a;
    a = b;
    b = tmp;
    printf(" --- swap --- a = %d,  b = %d\n", a, b);
    printf(" --- swap --- &a = %d,  &b = %d \n", &a, &b);
    printf(" --- swap ---------- end\n");
}

// アドレス参照
void swap2(int *a, int *b){
    printf(" --- swap2 ---------- begin\n");
    printf(" --- swap2 --- *a = %d,  *b = %d\n", *a, *b);
    printf(" --- swap2 --- a = %d,  b = %d\n", a, b);
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf(" --- swap2 --- *a = %d,  *b = %d\n", *a, *b);
    printf(" --- swap2 --- a = %d,  b = %d\n", a, b);
    printf(" --- swap2 ---------- end\n");
}


/*
==================== 実行結果 ====================
 main ---------- begin
 main --- x = 5,  y = 6
 --- swap ---------- begin
 --- swap --- a = 5,  b = 6
 --- swap --- a = 6,  b = 5
 --- swap ---------- end
 main --- x = 5,  y = 6
 --- swap2 ---------- begin
 --- swap2 --- *a = 5,  *b = 6
 --- swap2 --- *a = 6,  *b = 5
 --- swap2 ---------- end
 main --- x = 6,  y = 5
 main ---------- end
*/
