
#include <stdio.h>
// 홍길동에게 짝궁의 정보를 저장하고 출력해주세요.
typedef struct _student {
	int num;
	int age;
	char name[20];

	struct _student* friend;
}student;

void introduce(student s) {
	printf("안녕하세요 저는 %d번 %d살 %s이고요, 저의 짝궁은 3번 22살 황진이입니다.", s.num, s.age, s.name, s.friend->num, s.friend->age, s.friend->name);
}

int main(void) {
	
	student s2 = { 3,22,"황진이" };
	student s3 = { 2,21,"홍길순" };
	student s1 = { 1,20,"홍길동",&s2 };

	introduce(s1);
	// 출력 : 안녕하세요 저는 1번 20살 홍길동이고요, 저의 짝궁은 3번 22살 황진이입니다.


	// 짝궁이 바뀌었습니다. 아래와 같이 출력해주세요.


	// 출력 : 안녕하세요 저는 1번 20살 홍길동이고요, 저의 짝궁은 2번 21살 홍길순입니다.

	return 0;
}