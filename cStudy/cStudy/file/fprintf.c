/*
 * - ���͂�����������t�@�C���ɏ������� -
 */
#include <stdio.h>
 
int main(void){
 
  /* ���͂�����������i�[ */
  char ch[100];
 
  /* �t�@�C���|�C���^ */
  FILE *fp;
 
  /* �t�@�C�����������݃��[�h�ŃI�[�v�� */
  fp = fopen("file.txt", "w");
 
  /* �t�@�C�����K�؂ɓǂݍ��܂�Ă��邩���m�F */
  if( fp == NULL ) {
     perror("�t�@�C���̓ǂݍ��݂Ɏ��s�I\n");
     return 1;
  }
 
  /* ������̓��� */
  printf("���������͂��Ă������� = ");
  fgets(ch, sizeof(ch), stdin);
 
  /* ���͂�����������t�@�C���ɏ������� */
  fprintf(fp, "%s", ch);
  fclose(fp);
 
  return 0;
}
