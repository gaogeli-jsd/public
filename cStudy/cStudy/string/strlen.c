#include <stdio.h>
#include <string.h>

/*
文字列の長さとは、char型の配列の0番の文字から、
最後に'\0'にたどり着くまでに入っている文字の数を指します。
*/
void main() {

  char s[10] = "abcdef";
  int len;

  printf("s=%s\n", s);

  //   文字列の長さ
  len = strlen(s);
  printf("文字列の長さ：%d\n", len);
}


/*
========== 実行結果： ==========

s=abcdef
文字列の長さ：6

*/