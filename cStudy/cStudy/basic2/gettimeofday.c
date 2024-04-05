#include <stdio.h>
#include <sys/time.h>

// gettimeofday

int main() {

  struct timeval current_time;

  gettimeofday(&current_time, NULL);

  printf("seconds : %ld\nmicro seconds : %ld", current_time.tv_sec,
         current_time.tv_usec);

  return 0;
}

/*
==================== ÀsŒ‹‰ÊF ====================
seconds : 1711808574
micro seconds : 857446
*/