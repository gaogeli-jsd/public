#include <stdio.h>

/*
�ϐ��̓R���s���[�^�̃��������ɂ��邽�߁A�A�h���X�����݂��܂��B
�Ⴆ�΁Aa�Ƃ����ϐ�������ƁA&a�Ƃ��邱�Ƃ� ���A
�ϐ��̃A�h���X���擾���邱�Ƃ��ł��܂��B
*/
void main() {
  int a = 100;      //  int�^�̕ϐ�
  double b = 123.4; //  double�^�̕ϐ�
  float c = 123.4f; //  float�^�̕ϐ�(���l�̌���f����)
  char d = 'a';     //  char�^�̕ϐ�
  printf("a�̒l��%d�A�傫����%dbyte�A�A�h���X��0x%x\n", a, sizeof(int), &a);
  printf("b�̒l��%f�A�傫����%dbyte�A�A�h���X��0x%x\n", b, sizeof(double), &b);
  printf("c�̒l��%f�A�傫����%dbyte�A�A�h���X��0x%x\n", c, sizeof(float), &c);
  printf("d�̒l��%c�A�傫����%dbyte�A�A�h���X��0x%x\n", d, sizeof(char), &d);
}

/*
==================== ���s���ʁF ====================
a�̒l��100�A�傫����4byte�A�A�h���X��0x4c1ff71c
b�̒l��123.400000�A�傫����8byte�A�A�h���X��0x4c1ff710
c�̒l��123.400002�A�傫����4byte�A�A�h���X��0x4c1ff70c
d�̒l��a�A�傫����1byte�A�A�h���X��0x4c1ff70b
*/