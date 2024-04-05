#include <ctype.h>    /* ctype.h���C���N���[�h */
#include <stdio.h>

void
check_char(char c)
{
    printf("check '%c'\n", c);

    if (isalpha(c)) {    /* �A���t�@�x�b�g���ǂ��� */
	printf("'%c' is alphabet\n", c);
    }
    if (isdigit(c)) {    /* �������ǂ��� */
	printf("'%c' is digit char\n", c);
    }
    if (isupper(c)) {    /* �啶�����ǂ��� */
	printf("'%c' is uppercase char\n", c);
	printf("lowercase of '%c' is '%c'\n", c, tolower(c));
    }
    if (islower(c)) {    /* ���������ǂ��� */
	printf("'%c' is lowercase char\n", c);
	printf("uppercase of '%c' is '%c'\n", c, toupper(c));
    }
    if (isspace(c)) {    /* �󔒕������ǂ��� */
	printf("'%c' is white space\n", c);
    }

    printf("\n");
}

int
main(void)
{
    int c;

    printf("input character=");
    c = getchar();    /* 1�������� */
    check_char(c);    /* ���͂����������`�F�b�N */

    return 0;
}