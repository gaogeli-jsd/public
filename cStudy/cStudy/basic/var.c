#include <stdio.h>

/* �ϐ���p�����v�Z */

void main() {
  /* �g�p����ϐ��̒�` */
  int a;        // �ϐ��̐錾
  int b = 3;    //  �������Ƒ���𓯎��ɍs���B
  int add, sub; //  �����̕ϐ��𓯎��ɐ錾
  double avg;   //  int�ȊO�̕ϐ���錾

  a = 6; //  ����i�ŏ��ɒl������̂ŁA�h�������h�ƌ����B
  add = a + b;         //  a,b�̘a�����߂�B
  sub = a - b;         //  a,b�̍������߂�B
  avg = (a + b) / 2.0; //  a,b�̕��ϒl�����߂�B

  printf("%d + %d = %d\n", a, b, add);       // 6 + 3 = 9
  printf("%d - %d = %d\n", a, b, sub);       // 6 - 3 = 3
  printf("%d��%d�̕��ϒl�F%f\n", a, b, avg); // 6��3�̕��ϒl�F4.500000
}


/*
========== ���s���ʁF ==========
6 + 3 = 9
6 - 3 = 3
6��3�̕��ϒl�F4.500000

*/
