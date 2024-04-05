#include <time.h> // time
#include <stdio.h> // printf
#include <stdlib.h> // srand, rand
#include <unistd.h> // sleep

// gTime

int main(){

    int second = 2;
    time_t start_time, end_time;
    char* c_time_string;

    start_time = time(NULL);// time()関数が返すのは、1970年1月1日からの経過秒数です。
                            // システムのローカル時間を返す。
    printf(" *** start time = %ld\n", start_time);

    c_time_string = ctime(&start_time);
    printf("Current time is :  %s", c_time_string);


    srand((unsigned int)time(NULL)); // time()関数によりシードが毎回変わる。
    printf(" *** 生成した乱数  = %d\n", rand()); // 異なる乱数が出力されます。

    // 何かしらの処理
    for (int i = 0; i < 10000000; i++);

    printf("%d秒間止まります。\n", second);
    sleep(second);
    printf("%d秒間止まりました。\n", second);

    end_time = time(NULL);
    printf(" *** end time = %ld\n", end_time);

    c_time_string = ctime(&end_time);
    printf("Current time is :  %s", c_time_string);

    printf(" *** Execution time = %ld\n", end_time - start_time);

    return 0;
}


/*
==================== 実行結果： ====================

 *** start time = 1711808904
Current time is :  Sat Mar 30 23:28:24 2024
 *** 生成した乱数  = 23441
2秒間止まります。
2秒間止まりました。
 *** end time = 1711808907
Current time is :  Sat Mar 30 23:28:27 2024
 *** Execution time = 3

*/ 