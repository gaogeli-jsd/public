#include <stdio.h>
#include <stdlib.h>

/*
   atof()
�����F�@atof(char* s);
�Ӗ��F�@�^����ꂽ�����������(double)�ɕς���B
�g�p��Fdouble d = atof("3.14");
*/
void main() {

  char s2[] = "12.345";

  double b;

  b = atof(s2);

  printf("b=%f\n", b);
}

/*
========== ���s���ʁF ==========

b=12.345000

*/
