#include <stdio.h>
#include <string.h>

/*
strcat(char* s1,char* s2);
    右辺の文字列を左辺の文字列変数に追加する。
        strcat(s,"World");
*/
void main() {

  char s[10] = "abc";

  //   文字列の結合
  strcat(s, "DEF");
  printf("s=%s\n", s);
}


/*
========== 実行結果： ==========

s=abcDEF

*/
