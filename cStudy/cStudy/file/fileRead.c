/*
 * - �e�L�X�g�t�@�C���̓ǂݍ��݂Əo�� -
 */
#include <stdio.h>
 
int main(){
 
  /* �ǂݍ��񂾃e�L�X�g���i�[ */
  char ch;
 
  /* �t�@�C���|�C���^ */
  FILE *fp;
 
  /* �t�@�C���I�[�v�� */
  fp = fopen("file.txt", "r");
 
  /* �t�@�C�����K�؂ɓǂݍ��܂�Ă��邩���m�F */
  if( fp == NULL ) {
     perror("�t�@�C���̓ǂݍ��݂Ɏ��s�I\n");
     return 5;
  }
 
  /* �e�L�X�g�̓ǂݍ���&�o�� */
  printf("��===== �e�L�X�g�t�@�C���̓��e =====��\n");
  while( ( ch = fgetc(fp) ) != EOF ) {
    printf("%c", ch);
  }
 
  /* �t�@�C���N���[�Y */
  fclose(fp);
 
  return 0;
}
