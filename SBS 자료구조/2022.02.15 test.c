// 문제 : 구조체를 도입해서 소스코드를 간단하게 바꿔주세요.

#include <stdio.h>

struct Person
{
	int age;
	char name[20];
	char home[20];
	char food[20];
};

void introduce(struct Person p1) {
	printf("== 소개 시작 ==\n");
	printf("이름 : %s\n", p1.name);
	printf("나이 : %d살\n", p1.age);
	printf("고향 : %s\n", p1.home);
	printf("== 소개 끝 ==\n");
}

void talk(struct Person p1) {
	printf("이야기 시작 : 안녕하세요. 저는 %d살, %s 입니다. 제 고향인 %s 에서는...\n", p1.age, p1.name, p1.home);
}
// 함수, 구조체 정의 - 함수 밖에

int main() {

	struct Person p1 = { 20,"홍길동","한양","떡볶이" };

	struct Person p2 = { 45,"임꺽정","평양","떡국" };

	introduce(p1);
	talk(p1);

	introduce(p2);
	talk(p2);

	return 0;
}
