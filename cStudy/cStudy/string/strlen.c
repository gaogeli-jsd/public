#include <stdio.h>
#include <string.h>

/*
������̒����Ƃ́Achar�^�̔z���0�Ԃ̕�������A
�Ō��'\0'�ɂ��ǂ蒅���܂łɓ����Ă��镶���̐����w���܂��B
*/
void main() {

  char s[10] = "abcdef";
  int len;

  printf("s=%s\n", s);

  //   ������̒���
  len = strlen(s);
  printf("������̒����F%d\n", len);
}


/*
========== ���s���ʁF ==========

s=abcdef
������̒����F6

*/