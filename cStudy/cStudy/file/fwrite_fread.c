#include <stdio.h>
#include <stdlib.h>                     //  declaration of 'exit'
 
void main() {
    FILE* file;
    int i;
    // �������ރf�[�^
    char wdata[] = { 0x10 , 0x1a , 0x1e , 0x1f };
    char rdata[4];

    // �o�C�i���f�[�^�̏�������
    file = fopen( "test.bin", "wb" );
    if( file == NULL ){
        printf( " === 13 === �t�@�C���I�[�v���Ɏ��s���܂����B\n" );
        exit( 1 );
    }

    fwrite( wdata, sizeof(char), sizeof(wdata), file );
    // fwrite(�f�[�^,�f�[�^�̃o�C�g��,�f�[�^�̐�,�t�@�C���|�C���^);

    fclose(file);                       // �t�@�C�����N���[�Y(����)

    // �o�C�i���f�[�^�̓ǂݍ���
    file = fopen( "test.bin", "rb" );
    if( file == NULL ){
        printf( " === 21 === �t�@�C���I�[�v���Ɏ��s���܂����B\n" );
        exit( 1 );
    }

    fread( rdata, sizeof(char), sizeof(rdata), file );
    // fread(�f�[�^,�f�[�^�̃o�C�g��,�f�[�^�̐�,�t�@�C���|�C���^);
    
    fclose(file);                       // �t�@�C�����N���[�Y(����)
    // ���ʂ�\��
    for(i = 0; i < sizeof(rdata) ; i++){
        printf("%x ",rdata[i]);
    }
    printf("\n");
}