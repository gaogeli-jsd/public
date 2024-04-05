#include<stdio.h>

void main(){

    printf(" main ---------- begin\n");

    int a = 100;
    FILE *fp;

    //「fprintfExample.txt」のファイルを書き込みモード（"w"）で開く
    fp = fopen("fprintfExample.txt", "w");

    //「fprintfExample.txt」に「aは100です」と書き込む
    fprintf(fp, "aは%dです\n", a);

    //「fprintfExample.txt」のファイルを閉じる
    fclose(fp);

    printf(" main ---------- end\n");

}