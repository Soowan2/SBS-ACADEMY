#include <stdio.h>
struct Student {
	int no;
	char name[20];
	int age;
	int sage;
	char subject[20];
	char sname[20];
};

void introduce(struct Student s) {
	printf("안녕하세요 저는 %d번 %d살 %s이고요, ", s.no, s.age, s.name);
	printf("저의 담임선생님은 %d살 %s의 %s 선생님이십니다.\n", s.sage, s.subject, s.sname);
}

int main(void) {
	// 각 학생들에게 담임 선생님 정보를 저장하고 출력해주세요.

	struct Student s1 = { 1, "홍길동", 20, 45, "역사과목", "이순신"};
	struct Student s2 = { 2, "홍길순", 21, 52, "체육과목", "임꺽정"};

	introduce(s1);
	// 출력 : 안녕하세요 저는 1번 20살 홍길동이고요, 저의 담임선생님은 45살 역사과목의 이순신 선생님이십니다.
	introduce(s2);
	// 출력 : 안녕하세요 저는 2번 21살 홍길순이고요, 저의 담임선생님은 52살 체육과목의 임꺽정 선생님이십니다.


	// 두 사람의 담임선생임이 바뀌었습니다. 아래와 같이 출력해주세요. 
	struct Student s1 = { 1, "홍길동", 20, 52, "체육과목", "임꺽정" };
	struct Student s2 = { 2, "홍길순", 21, 45, "역사과목", "이순신" };

	introduce(s1);
	// 출력 : 안녕하세요 저는 1번 20살 홍길동이고요, 저의 담임선생님은 52살 체육과목의 임꺽정 선생님이십니다.
	introduce(s2);
	// 출력 : 안녕하세요 저는 2번 21살 홍길순이고요, 저의 담임선생님은 45살 역사과목의 이순신 선생님이십니다.

	return 0;
}