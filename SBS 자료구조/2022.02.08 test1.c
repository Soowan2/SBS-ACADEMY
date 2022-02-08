// scanf를 이용해 단어 하나를 word에 저장해주세요.
// 그리고 word가 love이면 I love you. 를 출력하세요
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char word[200];
	// word : 시작 주소값.

	scanf("%s", word);
	printf("%s\n", word);
	printf("%c\n", *word);
	printf("%c\n", *(word + 3)); // word 의 4번째 글자

	int flag = 0;

	for (int i = 0; i < 5; i++)
	{
		if (word[i] != "love"[i])
		{
			flag = 1;
		}
	}

	if (flag == 0)
	{
		printf("I love you.");
	}

	return 0;
}
