#include <stdio.h>
#include <stdlib.h>
 
void main() {
    FILE* file;
    int i,size;
    //  �������ރf�[�^
    char* rdata;
    //�o�C�i���f�[�^�̏�������
    file = fopen( "test.bin", "rb" );
    if( file == NULL ){
        printf( "�t�@�C���I�[�v���Ɏ��s���܂����B\n" );
        exit( 1 );
    }
    //  �t�@�C���̍Ō�܂ŃV�[�N
    fseek(file, 0, SEEK_END);
    //  �t�@�C���̑傫�����擾
    size = ftell(file);
    //  �������̃T�C�Y�����A�z��𓮓I�ɐ���
    rdata = (char*)malloc(sizeof(char)*size);
    //  �Ă�̍Ō�܂Ń|�C���^��߂�
    fseek(file,0,SEEK_SET);
    fread( rdata, sizeof(char), size, file );
    fclose(file);          // �t�@�C�����N���[�Y(����)
    //  ���ʂ�\��
    for(i = 0; i < size ; i++){
        printf("%x ",rdata[i]);
    }
    printf("\n");
    //  ���������
    free(rdata);
}