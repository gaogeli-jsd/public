#include <stdio.h>
#include <string.h> // strcpy�֐��̗��p����ꍇ�A
                    // ���̂悤�Ɂustring.h�v��ǂݍ��ޕK�v������܂��B

/*
C����ɂ́u������̌^�v���p�ӂ���Ă��Ȃ��̂ŁA
���̂悤�ɕϐ��ɕ�����������邱�Ƃ͂ł��܂���B
�ϐ� = "������";
���̂��߁AC����ŁA�ϐ��ɕ������������ꍇ�ɂ́ustrcpy�֐��v���g���܂��B
*/ 
int main()
{
  char string[10] = "Hello";    // ������ + 1 ���T�C�Y
                                // [=] ���g����̂͏������̎�����
  printf("%s\n", string); 
  strcpy(string, "ABCDE1234"); // 
  printf("%s\n", string);
  strcpy(string, "ABCDE���{");  // �w��̃T�C�Y���傫�ȕ������ݒ肷��ƁA
                                // compile�̎��A overflows the destination �G���[
  printf("%s\n", string);
  return 0;
}


/*
========== ���s���ʁF ==========

Hello
ABCDE1234
ABCDE���{

*/
