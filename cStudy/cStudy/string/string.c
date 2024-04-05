#include <stdio.h>
#include <string.h> // strcpy関数の利用する場合、
                    // このように「string.h」を読み込む必要があります。

/*
C言語には「文字列の型」が用意されていないので、
次のように変数に文字列を代入することはできません。
変数 = "文字列";
そのため、C言語で、変数に文字列を代入する場合には「strcpy関数」を使います。
*/ 
int main()
{
  char string[10] = "Hello";    // 文字数 + 1 がサイズ
                                // [=] が使えるのは初期化の時だけ
  printf("%s\n", string); 
  strcpy(string, "ABCDE1234"); // 
  printf("%s\n", string);
  strcpy(string, "ABCDE日本");  // 指定のサイズより大きな文字列を設定すると、
                                // compileの時、 overflows the destination エラー
  printf("%s\n", string);
  return 0;
}


/*
========== 実行結果： ==========

Hello
ABCDE1234
ABCDE日本

*/
