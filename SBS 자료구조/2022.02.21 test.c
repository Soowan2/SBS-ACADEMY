// 문제 : 사람을 3명 만들고 각각 다음사람을 가리키게 만들어주세요.
// 조건 : 수정가능지역만 수정가능합니다.
// 힌트 : 포인터 변수에 NULL 을 넣으면 아무것도 안가리킨다는 뜻 입니다.
#include <stdio.h>
#include <stdlib.h>

// 수정가능지역 시작
// 여기서 구조체를 정의해주세요.
typedef struct Person {
	char* name;
	struct Person* next;
} Person;
// 수정가능지역 끝


void link_person(Person* head, Person* person) {

	Person* target = NULL;

	target = head; // 링크드리스트의 첫번째 사람(노드)

	for (int i = 0; ; i++) {
		if (target->next == NULL) {
			break;
		}

		target = target->next;
	}

	target->next = person;

}

void print_all_name(Person* head) {
	Person* target = NULL;

	target = head;

	for (int i = 0; ; i++) {

		printf("%s\n", target->name);

		target = target->next;

		if (target == NULL) {
			break;
		}
	}
}

int main(void) {
	Person* p1 = (Person*)malloc(sizeof(Person));
	p1->name = "하나";
	p1->next = NULL;
	Person* p2 = (Person*)malloc(sizeof(Person));
	p2->name = "두나";
	p2->next = NULL;

	Person* p3 = (Person*)malloc(sizeof(Person));
	p3->name = "세나";
	p3->next = NULL;

	Person* p4 = (Person*)malloc(sizeof(Person));
	p4->name = "사나";
	p4->next = NULL;

	Person* p5 = (Person*)malloc(sizeof(Person));
	p5->name = "오나";
	p5->next = NULL;

	// 수정가능지역 시작

	link_person(p1, p2);
	link_person(p1, p3);
	link_person(p1, p4);
	link_person(p1, p5);

	// 수정가능지역 끝

	//printf("마지막 사람의 이름은 %s 입니다.", p1->next->next->name);
	print_all_name(p1);


	return 0;
}