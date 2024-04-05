//�}���`�o�C�g������̕������𐔂���

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//�t�@�C���̍ő�T�C�Y
#define BUFFER 1024

//UTF-8�̕����`�F�b�N�Ɏg�p����
//2�i����1000_0000
#define MSB1 0x80

//UTF-8��BOM
const unsigned char UTF8BOM[] = { 0xef, 0xbb, 0xbf };

//�����R�[�h�̎��
enum CharacterCode
{
	SJIS,
	EUCJP,
	UTF8
};

//�t�@�C����ǂݎ��A�I�[��NULL������t�������������
//�������̔z��Ɋi�[����
//�߂�l:
//����=������̃T�C�Y
//���s=����
int ReadTextFile(const char* file, char str[])
{
	//fopen_s�֐����Ȃ����p��
	//fopen�֐����g�p
	FILE *fp = fopen(file, "r");
	if (fp == NULL)
		return -1;

	//�o�C�i���œǂݎ��
	int size = fread(str, sizeof(char), BUFFER - 1, fp);
	fclose(fp);

	//�f�[�^�̏I�[��NULL������ǉ�
	str[size] = '\0';

	return size + 1;
}

//UTF-8��BOM�`�F�b�N
//BOM�t���Ȃ�0�ȊO��Ԃ�
int CheckBOM_UTF8(const char* str)
{
	for (int i = 0; i < 3; i++)
	{
		if ((unsigned char)*(str + i) != UTF8BOM[i])
		{
			return -1;
		}
	}
	return 0;
}

//Shift_JIS
//�����̃o�C�g����Ԃ�
int CharacterByte_SJIS(const char* s, size_t n)
{
	unsigned char c = (unsigned char)*s;
	if (((c >= 0x81) && (c <= 0x9f)) || ((c >= 0xe0) && (c <= 0xfc)))
		return 2;
	return 1;
}

//EUC-JP
//�����̃o�C�g����Ԃ�
int CharacterByte_EUCJP(const char *s, size_t n)
{
	unsigned char c = (unsigned char)*s;
	if (c == 0x8f)
		return 3;
	if (((c >= 0xa1) && (c <= 0xfe)) || c == 0x8e)
		return 2;
	return 1;
}

//UTF-8
//�����̃o�C�g����Ԃ�
int CharacterByte_UTF8(const char *s, size_t n)
{
	unsigned char c = (unsigned char)*s;
	if (!(c & MSB1))
		return 1;
	c <<= 2;
	if (!(c & MSB1))
		return 2;
	c <<= 1;
	if (!(c & MSB1))
		return 3;
	return 4;
}

//�}���`�o�C�g������̕�������Ԃ�
//NULL�������Ȃ������񂪓n�����\�����l������
//len�ȏ�̃o�C�g���͓ǂݎ��Ȃ�
int MyMBStrlen(const char *str, int len, enum CharacterCode code)
{
	int(*func)(unsigned char*, size_t); //�֐��|�C���^

	//�����R�[�h�ɍ��킹�ă��P�[����ݒ�
	//setlocale�֐������������mblen�֐����g�p
	//���s�����ꍇ�͎���֐����g�p
	switch (code)
	{
	case SJIS:
		if (setlocale(LC_ALL, ".932") == NULL &&
			setlocale(LC_ALL, "ja_JP.sjis") == NULL)
			func = CharacterByte_SJIS;
		else
			func = mblen;
		break;
	case EUCJP:
		if (setlocale(LC_ALL, ".20932") == NULL &&
			setlocale(LC_ALL, "ja_JP.eucjp") == NULL)
			func = CharacterByte_EUCJP;
		else
			func = mblen;
		break;
	case UTF8:
		if (setlocale(LC_ALL, ".65001") == NULL &&
			setlocale(LC_ALL, "ja_JP.utf8") == NULL)
			func = CharacterByte_UTF8;
		else
			func = mblen;
		break;
	default:
		return 0;
	}

	int count = 0; //������
	int byte; //�ꕶ���̃o�C�g��

	//NULL�������o�����邩
	//�ǂݎ�����o�C�g����len�ɒB����܂Ń��[�v
	while (*str != '\0' && len > 0) 
	{
		byte = func(str, MB_CUR_MAX);
		if (byte <= 0) //0�ȉ����Ԃ��Ă�����G���[�Ƃ���
			return 0;

		//�ꕶ���̃o�C�g�������|�C���^��i�߂�
		str += byte;

		len -= byte;
		count++;
	}

	return count;
}

int main()
{
	//�ǂݍ��ރt�@�C�������w��
	const char *file = "test.txt";

	//���̃v���O�����͕����R�[�h���������ʂ��Ă����킯�ł͂Ȃ�
	//�ǂݍ��ރt�@�C���̕����R�[�h���w��
	enum CharacterCode code = SJIS;

	char str[BUFFER];
	int length = ReadTextFile(file, str);
	if (length < 0)
	{
		printf("%s�̃I�[�v���Ɏ��s���܂����B\n", file);
		printf("Enter�L�[�ŏI���B\n");
		getchar();
		return 0;
	}

	//UTF-8�Ȃ��BOM�`�F�b�N
	//BOM�t���Ȃ�|�C���^��3�i�߂�
	char* pstr;
	if (code == UTF8 && CheckBOM_UTF8(str) == 0)
	{
		pstr = str + 3;
		length -= 3;
	}	
	else
	{
		pstr = str;
	}

	//�R���\�[����ʂ͌��݂̊��ȊO�̕����R�[�h��
	//������������̂Œ���
	printf("%s\n", pstr);

	printf("%d", MyMBStrlen(pstr, length, code));

	getchar();
}