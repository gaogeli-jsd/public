#include <stdio.h>

int main(void) {

  /* �J�E���^�ϐ��̐錾 */
  int i;

  /* �J��Ԃ����� */
  for (i = 0; i < 10; ++i) {
    if (i == 5)
      continue;
    printf("Hello! %d\n", i);
  }

  return 0;
}

/*
========== ���s���ʁF ==========
Hello! 0
Hello! 1
Hello! 2
Hello! 3
Hello! 4
Hello! 6
Hello! 7
Hello! 8
Hello! 9
*/
