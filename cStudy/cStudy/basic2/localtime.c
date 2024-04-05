#include <stdio.h>
#include <time.h>

// localtime

int main(void) {
        //timer == NULLŽw’èŽž
        time_t timer = time(NULL);
        fprintf(stdout, "timer(NULL):%ld\n", timer);
        struct tm *tm = localtime(&timer);
        if(tm != NULL) {
            fprintf(stdout, "tm->tm_year [%d]\n" , tm->tm_year);
            fprintf(stdout, "tm->tm_mon  [%d]\n" , tm->tm_mon);
            fprintf(stdout, "tm->tm_mday [%d]\n" , tm->tm_mday);
            fprintf(stdout, "tm->tm_hour [%d]\n" , tm->tm_hour);
            fprintf(stdout, "tm->tm_min  [%d]\n" , tm->tm_min);
            fprintf(stdout, "tm->tm_sec  [%d]\n" , tm->tm_sec);
            fprintf(stdout, "tm->tm_wday [%d]\n" , tm->tm_wday);
            fprintf(stdout, "tm->tm_yday [%d]\n" , tm->tm_yday);
            fprintf(stdout, "tm->tm_isdst[%d]\n" , tm->tm_isdst);
        } else {
        	fprintf(stdout, "localtime error\n");
        }
}


/*
========== ŽÀsŒ‹‰ÊF ==========

timer(NULL):1711809183
tm->tm_year [124]
tm->tm_mon  [2]
tm->tm_mday [30]
tm->tm_hour [23]
tm->tm_min  [33]
tm->tm_sec  [3]
tm->tm_wday [6]
tm->tm_yday [89]
tm->tm_isdst[0]

*/