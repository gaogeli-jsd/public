//マルチバイト文字列の文字数を数える

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//ファイルの最大サイズ
#define BUFFER 1024

//UTF-8の文字チェックに使用する
//2進数で1000_0000
#define MSB1 0x80

//UTF-8のBOM
const unsigned char UTF8BOM[] = { 0xef, 0xbb, 0xbf };

//文字コードの種類
enum CharacterCode
{
	SJIS,
	EUCJP,
	UTF8
};

//ファイルを読み取り、終端にNULL文字を付加した文字列を
//第二引数の配列に格納する
//戻り値:
//成功=文字列のサイズ
//失敗=負数
int ReadTextFile(const char* file, char str[])
{
	//fopen_s関数がない環境用に
	//fopen関数を使用
	FILE *fp = fopen(file, "r");
	if (fp == NULL)
		return -1;

	//バイナリで読み取り
	int size = fread(str, sizeof(char), BUFFER - 1, fp);
	fclose(fp);

	//データの終端にNULL文字を追加
	str[size] = '\0';

	return size + 1;
}

//UTF-8のBOMチェック
//BOM付きなら0以外を返す
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
//文字のバイト数を返す
int CharacterByte_SJIS(const char* s, size_t n)
{
	unsigned char c = (unsigned char)*s;
	if (((c >= 0x81) && (c <= 0x9f)) || ((c >= 0xe0) && (c <= 0xfc)))
		return 2;
	return 1;
}

//EUC-JP
//文字のバイト数を返す
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
//文字のバイト数を返す
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

//マルチバイト文字列の文字数を返す
//NULL文字がない文字列が渡される可能性を考慮して
//len以上のバイト数は読み取らない
int MyMBStrlen(const char *str, int len, enum CharacterCode code)
{
	int(*func)(unsigned char*, size_t); //関数ポインタ

	//文字コードに合わせてロケールを設定
	//setlocale関数が成功すればmblen関数を使用
	//失敗した場合は自作関数を使用
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

	int count = 0; //文字数
	int byte; //一文字のバイト数

	//NULL文字が出現するか
	//読み取ったバイト数がlenに達するまでループ
	while (*str != '\0' && len > 0) 
	{
		byte = func(str, MB_CUR_MAX);
		if (byte <= 0) //0以下が返ってきたらエラーとする
			return 0;

		//一文字のバイト数だけポインタを進める
		str += byte;

		len -= byte;
		count++;
	}

	return count;
}

int main()
{
	//読み込むファイル名を指定
	const char *file = "test.txt";

	//このプログラムは文字コードを自動判別してくれるわけではない
	//読み込むファイルの文字コードを指定
	enum CharacterCode code = SJIS;

	char str[BUFFER];
	int length = ReadTextFile(file, str);
	if (length < 0)
	{
		printf("%sのオープンに失敗しました。\n", file);
		printf("Enterキーで終了。\n");
		getchar();
		return 0;
	}

	//UTF-8ならばBOMチェック
	//BOM付きならポインタを3進める
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

	//コンソール画面は現在の環境以外の文字コードは
	//文字化けするので注意
	printf("%s\n", pstr);

	printf("%d", MyMBStrlen(pstr, length, code));

	getchar();
}