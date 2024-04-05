/*
 * gethostname_test
 * - ホスト名を取得 -
 */
#include <stdio.h>
#include <winsock2.h>
 
int main(void)
{
 
  /* ホスト名 */
  char hostname[128];
 
  /* ホスト名を取得 */
  gethostname(hostname, sizeof(hostname));
 
  /* 取得したホスト名を出力 */
  printf("ホスト名: %s\n", hostname);
 
  return 0;
}

/*
==================== 実行結果： ====================

*/