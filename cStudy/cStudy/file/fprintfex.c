#include<stdio.h>

void main(){

    printf(" main ---------- begin\n");

    int a = 100;
    FILE *fp;

    //�ufprintfExample.txt�v�̃t�@�C�����������݃��[�h�i"w"�j�ŊJ��
    fp = fopen("fprintfExample.txt", "w");

    //�ufprintfExample.txt�v�Ɂua��100�ł��v�Ə�������
    fprintf(fp, "a��%d�ł�\n", a);

    //�ufprintfExample.txt�v�̃t�@�C�������
    fclose(fp);

    printf(" main ---------- end\n");

}