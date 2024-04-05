#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void check_char(char charList[]);
/*
文字列の長さとは、char型の配列の0番の文字から、
最後に'\0'にたどり着くまでに入っている文字の数を指します。
*/
void main() {

  int len;
  /*
   char *password = "AAA111";


   len = strlen(password);
   printf(" password = >>>%s<<<\n", password);
   printf(" password の長さ：%d\n", len);

   int strLength = 20;
   char myString[strLength];
   memset(myString, 0x00, sizeof(myString));
   memcpy(myString, password, strLength);
 */
  char myString1[] = "1234567";
  char myString2[] = "ABabg";
  char myString3[] = "ABab 123";
  char myString4[] = "3";
  check_char(myString1);
  check_char(myString2);
  check_char(myString3);
  check_char(myString4);
}
void check_char(char charList[]) {
  int len;
  len = strlen(charList);

  int i;
  int digit_flag = 0;
  int alphabet_flag = 0;
  int uppercase_flag = 0;
  int lowercase_flag = 0;
  int space_flag = 0;
  int policy_code = 0;

  printf("\n----------------------------------------------------\n");
  printf(" =====   charList    =   >>>%s<<<\n", charList);

  char myChar;
  for (i = 0; i < len; i++) {

    myChar = charList[i];
    printf("i = %d, myChar = %c\n", i, myChar);

    if (isalpha(myChar)) { /* アルファベットかどうか */
      alphabet_flag = 1;
    }
    if (isdigit(myChar)) { /* 数字かどうか */
      digit_flag = 1;
    }
    if (isupper(myChar)) { /* 大文字かどうか */
      uppercase_flag = 1;
    }
    if (islower(myChar)) { /* 小文字かどうか */
      lowercase_flag = 1;
    }
    if (isspace(myChar)) { /* 空白文字かどうか */
      space_flag = 1;
    }
  }

  if ((digit_flag == 1) && (uppercase_flag == 0)) {
    policy_code = 1;
  } else if ((digit_flag == 0) && (uppercase_flag == 1)) {
    policy_code = 2;
  } else if ((digit_flag == 1) && (uppercase_flag == 1)) {
    policy_code = 3;
  }

  printf("alphabet_flag  = %d\n", alphabet_flag);
  printf("digit_flag     = %d\n", digit_flag);
  printf("uppercase_flag = %d\n", uppercase_flag);
  printf("lowercase_flag = %d\n", lowercase_flag);
  printf("space_flag     = %d\n", space_flag);
  printf(" ● policy_code = %d\n", policy_code);
}
/*
========== 実行結果： ==========

s=abcdef
文字列の長さ：6

*/