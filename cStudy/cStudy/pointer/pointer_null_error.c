#include <stdio.h>
 
void main(){
    //   �|�C���^��NULL�ŏ������B
    int *p = NULL;
    //   �A�h���X���w�肵�Ȃ��܂ܒl����
    *p = 1;

    printf(" *p = %d\n", *p);
}


/*

==================== ���s���� ====================
echo %ERRORLEVEL%
-1073741819

*/
