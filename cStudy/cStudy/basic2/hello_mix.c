#include <stdio.h>

// hello_mix

int main(void) {

  printf("C����͏K����芵���\n");
  printf("����ɂ��́B���̖��O��%s�ł��B\n�N���%d�΂ł��B\n", "�R�c���Y", 20);
  printf("�C�j�V�����́A%c�ł��B\n", 'Y');
  printf("%f + %f = %f\n", 1.2, 2.7, 1.2 + 2.7);

  char a[] = "Hello";
  printf("%s Geli\n", a);

  FILE *fp;
  fp = fopen("file1.txt", "w");
  if (fp = NULL) {
    return -1;
  } else {
    fputs(a, fp);
    printf("open ok\n");
  }
  fclose(fp);

  return 0;
}

/*
==================== ���s���ʁF ====================

C����͏K����芵���
����ɂ��́B���̖��O�͎R�c���Y�ł��B
�N���20�΂ł��B
�C�j�V�����́AY�ł��B
1.200000 + 2.700000 = 3.900000
Hello Geli
open ok

*/