#include <stdio.h>
 
int main(void){
 
  /* �J�E���^�ϐ��̐錾 */
  int i;
 
  /* �J��Ԃ����� */
  for(i=0;i<10;++i) {
    printf("Hello! %d\n", i);
    if(i==5)
      break;
  }
 
  return 0;
}
