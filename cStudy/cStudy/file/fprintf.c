/*
 * - 入力した文字列をファイルに書き込む -
 */
#include <stdio.h>
 
int main(void){
 
  /* 入力した文字列を格納 */
  char ch[100];
 
  /* ファイルポインタ */
  FILE *fp;
 
  /* ファイルを書き込みモードでオープン */
  fp = fopen("file.txt", "w");
 
  /* ファイルが適切に読み込まれているかを確認 */
  if( fp == NULL ) {
     perror("ファイルの読み込みに失敗！\n");
     return 1;
  }
 
  /* 文字列の入力 */
  printf("文字列を入力してください = ");
  fgets(ch, sizeof(ch), stdin);
 
  /* 入力した文字列をファイルに書き込む */
  fprintf(fp, "%s", ch);
  fclose(fp);
 
  return 0;
}
