#include <stdio.h>

int main(void) {

  /* カウンタ変数の宣言 */
  int i;

  /* 繰り返し処理 */
  for (i = 0; i < 10; ++i) {
    if (i == 5)
      continue;
    printf("Hello! %d\n", i);
  }

  return 0;
}

/*
========== 実行結果： ==========
Hello! 0
Hello! 1
Hello! 2
Hello! 3
Hello! 4
Hello! 6
Hello! 7
Hello! 8
Hello! 9
*/
