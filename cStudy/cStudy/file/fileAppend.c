/*
 * - �e�L�X�g�t�@�C���ɒǋL -
 */
#include <stdio.h>
 
int main(void){
 
  /* �ǋL���镶������i�[ */
  char ch[100];
 
  /* �t�@�C���|�C���^ */
  FILE *fp;
 
  /* �t�@�C����ǋL���[�h�ŃI�[�v�� */
  fp = fopen("file.txt", "a");
 
  /* �t�@�C�����K�؂ɓǂݍ��܂�Ă��邩���m�F */
  if( fp == NULL ) {
     perror("�t�@�C���̓ǂݍ��݂Ɏ��s�I\n");
     return 1;
  }
 
  /* �ǋL���镶����̓��� */
  printf("�ǋL���镶���� = ");
  fgets(ch, sizeof(ch), stdin);
 
  /* ���͂�����������t�@�C���ɏ������� */
  fprintf(fp, "%s", ch);
  fclose(fp);
 
  return 0;
}
