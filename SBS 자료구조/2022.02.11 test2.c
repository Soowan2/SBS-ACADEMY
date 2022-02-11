// 문제 : 사람의 나이를 저장해주세요.
// 조건 : 새로운 배열을 만들어서 사용할 수 없습니다. 

// 입출력예시
/*
사람의 숫자를 입력해주세요. : 2[엔터]

1번째 사람의 나이를 입력해주세요 : 33[엔터]
1번째 사람의 이름을 입력해주세요 : aaa[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
2번째 사람의 이름을 입력해주세요 : bbb[엔터]

1번째 사람의 나이, 이름 : 33, aaa
2번째 사람의 나이, 이름 : 50, bbb

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int num;
	int ages[3];
	char names[3][4]; // 3자리의 문자열을 저장하기 위해선 4바이트의 공간이 필요하다. NULL까지 들어가야 하므로
	
	printf("사람의 숫자를 입력해주세요 : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("%d번째 사람의 나이를 입력해주세요 : ", i + 1);
		scanf("%d", ages + i);
		printf("%d번째 사람의 이름을 입력해주세요 : ", i + 1);
		scanf("%s", names[i]);
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d번째 사람의 나이 : %d\n", i + 1, ages[i]);
		
		printf("%d번째 사람의 이름 : %s\n", i + 1, names[i]); // 문자열을 읽기 위해선 주소를 가져와야 한다.
		
	}

	return 0;
}