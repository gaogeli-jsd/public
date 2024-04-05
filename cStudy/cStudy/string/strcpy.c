#include <stdio.h>
#include <string.h>

/*
strcpy(char* s1,char* s2);
右辺の文字列を左辺の文字列変数にコピーする。
        strcpy(s,"Hello");
*/
void main() {

  char s[10];

  //   文字列のコピー
  strcpy(s, "ABC");
  printf("s=%s\n", s);
}


/*
========== 実行結果： ==========

s=ABC

*/
