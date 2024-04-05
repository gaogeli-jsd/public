#include <stdio.h>
#include <stdlib.h>

/*
   atof()
書式：　atof(char* s);
意味：　与えられた文字列を実数(double)に変える。
使用例：double d = atof("3.14");
*/
void main() {

  char s2[] = "12.345";

  double b;

  b = atof(s2);

  printf("b=%f\n", b);
}

/*
========== 実行結果： ==========

b=12.345000

*/
