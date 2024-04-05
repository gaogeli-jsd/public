#include <stdio.h>

// hello_mix

int main(void) {

  printf("C言語は習うより慣れよ\n");
  printf("こんにちは。私の名前は%sです。\n年齢は%d歳です。\n", "山田太郎", 20);
  printf("イニシャルは、%cです。\n", 'Y');
  printf("%f + %f = %f\n", 1.2, 2.7, 1.2 + 2.7);

  char a[] = "Hello";
  printf("%s Geli\n", a);

  FILE *fp;
  fp = fopen("file1.txt", "w");
  if (fp = NULL) {
    return -1;
  } else {
    fputs(a, fp);
    printf("open ok\n");
  }
  fclose(fp);

  return 0;
}

/*
==================== 実行結果： ====================

C言語は習うより慣れよ
こんにちは。私の名前は山田太郎です。
年齢は20歳です。
イニシャルは、Yです。
1.200000 + 2.700000 = 3.900000
Hello Geli
open ok

*/