// 문제 : 회원의 수를 미리 정하지 않고 한명씩 입력할 때마다 저장해주세요. 회원의 수를 알 수 없기 때문에 정적, 동적 배열 모두 사용할 수 없으며 서로 흩어진 회원 정보들을 앞선 3명의 사람 문제처럼 서로 연결해야합니다.

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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _Person {
	int age;
	char* name;
	char* address;
	struct _Person* next;
}Person;

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

int main(void) {
	int num = 0;
	int count = 0;
	Person* first = NULL;

	for (int i = 0;; i++)
	{
		printf("메뉴를 선택해주세요(1. 주소록 추가, 2. 주소록 조회) : ");
		scanf("%d", &num);
		if (num == 1)
		{
			Person* head = (Person*)malloc(sizeof(Person));
		
			printf("나이를 입력해주세요 : ");
			scanf("%d", &(head->age));
			printf("이름를 입력해주세요 : ");
			scanf("%s", head->name);
			printf("주소를 입력해주세요 : ");
			scanf("%s", head->address);

			head->next = NULL;
			
			if (count == 0)
			{
				first = head;
			}
			else
			{
				link_person(first,head);
			}
			count++;
		}
		if (num == 2)
		{

			for (int i = 0;; i++)
			{
				if (first == NULL)
				{
					break;
				}
				printf("%d번째 사람의 나이, 이름, 주소 : %d, %s, %s\n", i + 1, first->age, first->name, first->address);

				first = first->next;
			}
		}
	}
	return 0;
}