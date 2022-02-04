#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	// a ~ z 까지 출력해주세요.

	printf("a b c d e f g h i j k l m n o p q r s t u v w x y z\n");

	// char c = "a"; // x -> 문자(배)열
	char c = 'a';    // o -> 단일문자

	// 'a' 문자는 정수다.
	printf("%c\n", 97);

	for (int i = 97; i < 97 + 26; i++)
	{
		printf("%c ", i);
	}

	printf("\n");


	printf("%s\n", "a");  // 문자(배)열
	printf("%c\n", 'a'); // 문자 열

	printf("%u\n", sizeof("a")); // + NULL문자
	printf("%u\n", sizeof("hello")); // + NULL문자
	printf("%u\n", sizeof(c)); // 하나의 문자는 1 byte

	"hello"; // 이름이 hello이고, 값은 h의 주소, 유형은 char*
	         // 리터럴 문자열 

	char str[] = { 104,101,108,108,111,0 };
	char* pstr = "hello";

	for (int i = 0; i < 6; i++)
	{
		printf("%c", pstr[i]);
	}

	// 아래 3개는 같은 배열
	char str1[] = { 97,98,99,0 };
	char str2[] = { 'a','b','c',0 };
	char str3[] = "abc";

	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%c", str3[i]);
	}


	



}