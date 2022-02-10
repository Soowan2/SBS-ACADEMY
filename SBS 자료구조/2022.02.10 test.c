#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	/*

	1번째 사람의 이름을 입력해주세요 : aaa[엔터]
	2번째 사람의 이름을 입력해주세요 : bbb[엔터]
	3번째 사람의 이름을 입력해주세요 : ccc[엔터]
	4번째 사람의 이름을 입력해주세요 : ddd[엔터]
	5번째 사람의 이름을 입력해주세요 : eee[엔터]

	1번째 사람의 이름 : aaa
	2번째 사람의 이름 : bbb
	3번째 사람의 이름 : ccc
	4번째 사람의 이름 : ddd
	5번째 사람의 이름 : eee

	*/
	char names[100];

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 사람의 이름을 입력해주세요 : ", i+1);
		scanf("%s", names + 20*i);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 사람의 이름 : %s\n",i+1, &names[20*i]); // 배열을 읽어올때에는 주소를 불러와야한다.
	}

	return 0;
}