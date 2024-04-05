#include <stdio.h>
 
void main(){
    //   ポインタをNULLで初期化。
    int *p = NULL;
    //   アドレスを指定しないまま値を代入
    *p = 1;

    printf(" *p = %d\n", *p);
}


/*

==================== 実行結果 ====================
echo %ERRORLEVEL%
-1073741819

*/
