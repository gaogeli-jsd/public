/*
 * gethostname_test
 * - �z�X�g�����擾 -
 */
#include <stdio.h>
#include <winsock2.h>
 
int main(void)
{
 
  /* �z�X�g�� */
  char hostname[128];
 
  /* �z�X�g�����擾 */
  gethostname(hostname, sizeof(hostname));
 
  /* �擾�����z�X�g�����o�� */
  printf("�z�X�g��: %s\n", hostname);
 
  return 0;
}

/*
==================== ���s���ʁF ====================

*/