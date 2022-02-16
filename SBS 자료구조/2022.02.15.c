
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct Person {
	int age;
	char* name;
	char* address;
};

int main(void) {

	//int age = 30;
	//char name[20] = "이순신";
	//char address[20] = "서울";

	//printf("안녕하세요 %d살 %s사는 %s입니다.\n", age, address, name);


	//// 1명의 사람 정보
	//struct Person p1;

	//p1.age = 20;

	//// 문자열 카피 함수 -> strcpy(목적지 주소, 복사 대상 주소);
	//// p1.name; // 문자 복사 -> api
	//strcpy(p1.name, "홍길동");
	//strcpy(p1.address, "대전");

	//printf("안녕하세요 %d살 %s사는 %s입니다.\n", p1.age, p1.address, p1.name);

	// 구조체 배열
	struct Person people[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &people[i].age);
		scanf("%s", &people[i].name);
		scanf("%s", &people[i].address);
	}

	return 0;
}