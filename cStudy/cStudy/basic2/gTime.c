#include <time.h> // time
#include <stdio.h> // printf
#include <stdlib.h> // srand, rand
#include <unistd.h> // sleep

// gTime

int main(){

    int second = 2;
    time_t start_time, end_time;
    char* c_time_string;

    start_time = time(NULL);// time()�֐����Ԃ��̂́A1970�N1��1������̌o�ߕb���ł��B
                            // �V�X�e���̃��[�J�����Ԃ�Ԃ��B
    printf(" *** start time = %ld\n", start_time);

    c_time_string = ctime(&start_time);
    printf("Current time is :  %s", c_time_string);


    srand((unsigned int)time(NULL)); // time()�֐��ɂ��V�[�h������ς��B
    printf(" *** ������������  = %d\n", rand()); // �قȂ闐�����o�͂���܂��B

    // ��������̏���
    for (int i = 0; i < 10000000; i++);

    printf("%d�b�Ԏ~�܂�܂��B\n", second);
    sleep(second);
    printf("%d�b�Ԏ~�܂�܂����B\n", second);

    end_time = time(NULL);
    printf(" *** end time = %ld\n", end_time);

    c_time_string = ctime(&end_time);
    printf("Current time is :  %s", c_time_string);

    printf(" *** Execution time = %ld\n", end_time - start_time);

    return 0;
}


/*
==================== ���s���ʁF ====================

 *** start time = 1711808904
Current time is :  Sat Mar 30 23:28:24 2024
 *** ������������  = 23441
2�b�Ԏ~�܂�܂��B
2�b�Ԏ~�܂�܂����B
 *** end time = 1711808907
Current time is :  Sat Mar 30 23:28:27 2024
 *** Execution time = 3

*/ 