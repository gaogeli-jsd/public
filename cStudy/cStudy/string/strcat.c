#include <stdio.h>
#include <string.h>

/*
strcat(char* s1,char* s2);
    �E�ӂ̕���������ӂ̕�����ϐ��ɒǉ�����B
        strcat(s,"World");
*/
void main() {

  char s[10] = "abc";

  //   ������̌���
  strcat(s, "DEF");
  printf("s=%s\n", s);
}


/*
========== ���s���ʁF ==========

s=abcDEF

*/
