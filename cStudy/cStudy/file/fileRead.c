/*
 * - テキストファイルの読み込みと出力 -
 */
#include <stdio.h>
 
int main(){
 
  /* 読み込んだテキストを格納 */
  char ch;
 
  /* ファイルポインタ */
  FILE *fp;
 
  /* ファイルオープン */
  fp = fopen("file.txt", "r");
 
  /* ファイルが適切に読み込まれているかを確認 */
  if( fp == NULL ) {
     perror("ファイルの読み込みに失敗！\n");
     return 5;
  }
 
  /* テキストの読み込み&出力 */
  printf("▼===== テキストファイルの内容 =====▼\n");
  while( ( ch = fgetc(fp) ) != EOF ) {
    printf("%c", ch);
  }
 
  /* ファイルクローズ */
  fclose(fp);
 
  return 0;
}
