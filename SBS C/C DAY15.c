#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	// a ~ z ���� ������ּ���.

	printf("a b c d e f g h i j k l m n o p q r s t u v w x y z\n");

	// char c = "a"; // x -> ����(��)��
	char c = 'a';    // o -> ���Ϲ���

	// 'a' ���ڴ� ������.
	printf("%c\n", 97);

	for (int i = 97; i < 97 + 26; i++)
	{
		printf("%c ", i);
	}

	printf("\n");


	printf("%s\n", "a");  // ����(��)��
	printf("%c\n", 'a'); // ���� ��

	printf("%u\n", sizeof("a")); // + NULL����
	printf("%u\n", sizeof("hello")); // + NULL����
	printf("%u\n", sizeof(c)); // �ϳ��� ���ڴ� 1 byte

	"hello"; // �̸��� hello�̰�, ���� h�� �ּ�, ������ char*
	         // ���ͷ� ���ڿ� 

	char str[] = { 104,101,108,108,111,0 };
	char* pstr = "hello";

	for (int i = 0; i < 6; i++)
	{
		printf("%c", pstr[i]);
	}

	// �Ʒ� 3���� ���� �迭
	char str1[] = { 97,98,99,0 };
	char str2[] = { 'a','b','c',0 };
	char str3[] = "abc";

	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%c", str3[i]);
	}


	



}