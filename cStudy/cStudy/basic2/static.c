#include <stdio.h>

// static

void foo();

void main() {
  int i;
  for (i = 0; i < 4; i++) {
    foo();
  }
}

void foo() {
  static int num = 0; //  �ŏ��Ɉ�x�������s�����
  printf("num = %d\n", num);
  num++;
}

/*
==================== ���s���ʁF ====================
num=0
num=1
num=2
num=3
*/