#include <stdio.h>

/*
変数はコンピュータのメモリ中にあるため、アドレスが存在します。
例えば、aという変数があると、&aとすることに より、
変数のアドレスを取得することができます。
*/
void main() {
  int a = 100;      //  int型の変数
  double b = 123.4; //  double型の変数
  float c = 123.4f; //  float型の変数(数値の後ろにfつける)
  char d = 'a';     //  char型の変数
  printf("aの値は%d、大きさは%dbyte、アドレスは0x%x\n", a, sizeof(int), &a);
  printf("bの値は%f、大きさは%dbyte、アドレスは0x%x\n", b, sizeof(double), &b);
  printf("cの値は%f、大きさは%dbyte、アドレスは0x%x\n", c, sizeof(float), &c);
  printf("dの値は%c、大きさは%dbyte、アドレスは0x%x\n", d, sizeof(char), &d);
}

/*
==================== 実行結果： ====================
aの値は100、大きさは4byte、アドレスは0x4c1ff71c
bの値は123.400000、大きさは8byte、アドレスは0x4c1ff710
cの値は123.400002、大きさは4byte、アドレスは0x4c1ff70c
dの値はa、大きさは1byte、アドレスは0x4c1ff70b
*/