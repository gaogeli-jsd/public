#include <ctype.h>    /* ctype.hをインクルード */
#include <stdio.h>

void
check_char(char c)
{
    printf("check '%c'\n", c);

    if (isalpha(c)) {    /* アルファベットかどうか */
	printf("'%c' is alphabet\n", c);
    }
    if (isdigit(c)) {    /* 数字かどうか */
	printf("'%c' is digit char\n", c);
    }
    if (isupper(c)) {    /* 大文字かどうか */
	printf("'%c' is uppercase char\n", c);
	printf("lowercase of '%c' is '%c'\n", c, tolower(c));
    }
    if (islower(c)) {    /* 小文字かどうか */
	printf("'%c' is lowercase char\n", c);
	printf("uppercase of '%c' is '%c'\n", c, toupper(c));
    }
    if (isspace(c)) {    /* 空白文字かどうか */
	printf("'%c' is white space\n", c);
    }

    printf("\n");
}

int
main(void)
{
    int c;

    printf("input character=");
    c = getchar();    /* 1文字入力 */
    check_char(c);    /* 入力した文字をチェック */

    return 0;
}