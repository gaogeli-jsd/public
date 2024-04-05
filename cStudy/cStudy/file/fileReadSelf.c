#include <stdio.h>
 
int main(void){
 
  /* ƒJƒEƒ“ƒ^•Ï”‚ÌéŒ¾ */
  int i;
 
  /* ŒJ‚è•Ô‚µˆ— */
  for(i=0;i<10;++i) {
    printf("Hello! %d\n", i);
    if(i==5)
      break;
  }
 
  return 0;
}
