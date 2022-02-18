#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct Person {
	int age;
	char name[20];
	char address[20];
};
int main(void) {

	// 회원 추가와 조회 기능을 메뉴화 시킨 후 반복적으로 수행할 수 있게 만들어주세요.

	// 예시
	/*
	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : 1
	나이를 입력해주세요 : 20[엔터]
	이름을 입력해주세요 : 홍길동[엔터]
	주소를 입력해주세요 : 대전[엔터]
	주소록이 추가되었습니다.
	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : 1
	나이를 입력해주세요 : 50[엔터]
	이름을 입력해주세요 : 임꺽정[엔터]
	주소를 입력해주세요 : 경기[엔터]
	주소록이 추가되었습니다.
	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : 1
	나이를 입력해주세요 : 23[엔터]
	이름을 입력해주세요 : 황진이[엔터]
	주소를 입력해주세요 : 서울[엔터]
	주소록이 추가되었습니다.
	메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : 2
	== 전체 회원 리스트 ==
	1번째 사람의 나이, 이름 : 20, 홍길동, 대전
	2번째 사람의 나이, 이름 : 50, 임꺽정, 경기
	3번째 사람의 나이, 이름 : 23, 황진이, 서울

	*/
	int menu = 0;
	int count = 0;
	struct Person* people = (struct Person*)malloc(sizeof(struct Person) * 100);
	while (1)
	{
		printf("메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : ");
		scanf("%d", &menu);

		if (menu == 1)
		{
			printf("나이를 입력해주세요 : ");
			scanf("%d", &people[count].age);
			printf("이름을 입력해주세요 : ");
			scanf("%s", people[count].name);
			printf("주소를 입력해주세요 : ");
			scanf("%s", people[count].address);
			count++;

		}
		else if (menu == 2)
		{
			for (int i = 0; i < count; i++)
			{
				printf("%d번째 사람의 나이, 이름, 주소 : %d, %s, %s\n", i + 1, people[i].age, people[i].name, people[i].address);
			}
		}
	}
	return 0;
}