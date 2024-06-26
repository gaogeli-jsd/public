#include <stdio.h>
 
void show(int,int,int);

/*
変数には値のほかに、その値を格納するアドレスがある。
つまり、変数には値とアドレス、二つの側面があるのです。
ポインタに変数のアドレスを設定するときは、原則的に同じ型のポインタ変数でするようにする。
例えば、「int a」であれば、「int *p」、 
        「double d」であれば、「double *pd」といったように、
対応する型をあわせる。
型が違っても、コンパイルエラーにはなりませんが、
実行時に致命的なエラーになる可能性があります。
*/ 
void main(){
    int a  = 100;    //  整数型変数a
    int b  = 200;    //  整数型変数b
    int *p = NULL;  //  整数型のポインタ変数p  NULLで初期化
    p = &a;         //  pにaのアドレスを代入
    show(a, b, *p);                   // a = 100 b = 200 *p = 100
    *p = 300;       //  *pに値を代入
    show(a, b, *p);                   // a = 300 b = 200 *p = 300
    p = &b;         //  pにbのアドレスを代入
    show(a, b, *p);                   // a = 300 b = 200 *p = 200
    *p = 400;       //  *pに値を代入
    show(a, b, *p);                   // a = 300 b = 400 *p = 400
}
 
void show(int n1,int n2,int n3){
    printf("a = %d ,  b = %d ,  *p = %d\n",n1,n2,n3);
}

/*

==================== 実行結果 ====================
a = 100 ,  b = 200 ,  *p = 100
a = 300 ,  b = 200 ,  *p = 300
a = 300 ,  b = 200 ,  *p = 200
a = 300 ,  b = 400 ,  *p = 400

通常の変数とポインタ変数の比較(intの場合)
            通常の変数	ポインタ変数	解説
宣言        int a;      int* p;         ポインタ変数は、変数の先頭に*をつける
値	        a	        *p	            ポインタ変数で値を示すには、先頭に*をつける必要がある。
アドレス	&a	        p	            通常の変数は、値を入れるが前提だが、ポインタ変数はアドレスを入れる
*/
