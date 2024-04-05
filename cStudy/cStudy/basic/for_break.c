#include <stdio.h>

int main(void) {

  /* カウンタ変数の宣言 */
  int i;

  /* 繰り返し処理 */
  for (i = 0; i < 10; ++i) {
    printf("Hello! %d\n", i);
    if (i == 5)
      break;
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
Hello! 5
*/
