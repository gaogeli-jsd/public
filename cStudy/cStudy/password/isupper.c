#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {

  int digit_flag = 0;
  int alphabet_flag = 0;
  int uppercase_flag = 0;
  int lowercase_flag = 0;
  int space_flag = 0;

  int i;
  char str[] = "Aa Bb 1-2*3 Cc";

  printf("大文字を抽出:");
  for (i = 0; i < 15; i++) {
      printf("%c", str[i]);
  }
  printf("\n");

  printf("大文字を抽出:");
  for (i = 0; i < 15; i++) {
    if (isupper(str[i]) != 0)
      printf("%c", str[i]);
  }
  printf("\n");

  printf("大文字を抽出:");
  for (i = 0; i < 15; i++) {
    if (isupper(str[i]) != 0) {
      printf("%d", 1);
    } else {
      printf("%d", 0);
    };
  }
 printf("\n");
  printf("大文字を抽出2:");
  for (i = 0; i < 15; i++) {
    if (isupper(str[i]) != 0) {
      uppercase_flag = 1;
      printf("%d,  %c, %d\n", i, str[i], uppercase_flag);
    }
  }

  printf("\n小文字を抽出:");
  for (i = 0; i < 15; i++) {
    if (islower(str[i]) != 0)
      printf("%c", str[i]);
  }

  printf("alphabet_flag  = %d\n", alphabet_flag);
  printf("digit_flag     = %d\n", digit_flag);
  printf("uppercase_flag = %d\n", uppercase_flag);
  printf("lowercase_flag = %d\n", lowercase_flag);
  printf("space_flag     = %d\n", space_flag);
  return 0;
}

/*
https://simd.jugem.jp/?eid=108
*/