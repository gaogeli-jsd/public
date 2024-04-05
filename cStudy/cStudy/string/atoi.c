#include <stdio.h>
#include <stdlib.h>

/*
   atoi()
書式：　atoi(char* s);
意味：　与えられた文字列を整数(int)に変える。
使用例：int n = atoi("100");
*/
void main() {
  char s1[] = "1000";
  int a;
  a = atoi(s1);
  printf("a=%d \n", a);
}


/*
========== 実行結果： ==========

a=1000

*/
