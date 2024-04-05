#include <stdio.h>
 
int main(){
    int returnCode = 0;
    char s1[4] = { 'a','b','c','\0' };  //  文字列"abc"
    char s2[] = "HelloWorld.";          //  文字列"HelloWorld."
    char s3[10];                        //  最大10文字まで入る文字列
    //  文字列の入力
    printf("文字列を入力してください。:");
    scanf("%s",s3); //  文字列の入力
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);
    printf("s3 = %s\n",s3);
    return returnCode;
}


/*
========== 実行結果： ==========

文字列を入力してください。:xyz
s1 = abc
s2 = HelloWorld.
s3 = xyz

*/