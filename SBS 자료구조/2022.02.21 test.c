// ���� : ����� 3�� ����� ���� ��������� ����Ű�� ������ּ���.
// ���� : �������������� ���������մϴ�.
// ��Ʈ : ������ ������ NULL �� ������ �ƹ��͵� �Ȱ���Ų�ٴ� �� �Դϴ�.
#include <stdio.h>
#include <stdlib.h>

// ������������ ����
// ���⼭ ����ü�� �������ּ���.
typedef struct Person {
	char* name;
	struct Person* next;
} Person;
// ������������ ��


void link_person(Person* head, Person* person) {

	Person* target = NULL;

	target = head; // ��ũ�帮��Ʈ�� ù��° ���(���)

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
	p1->name = "�ϳ�";
	p1->next = NULL;
	Person* p2 = (Person*)malloc(sizeof(Person));
	p2->name = "�γ�";
	p2->next = NULL;

	Person* p3 = (Person*)malloc(sizeof(Person));
	p3->name = "����";
	p3->next = NULL;

	Person* p4 = (Person*)malloc(sizeof(Person));
	p4->name = "�糪";
	p4->next = NULL;

	Person* p5 = (Person*)malloc(sizeof(Person));
	p5->name = "����";
	p5->next = NULL;

	// ������������ ����

	link_person(p1, p2);
	link_person(p1, p3);
	link_person(p1, p4);
	link_person(p1, p5);

	// ������������ ��

	//printf("������ ����� �̸��� %s �Դϴ�.", p1->next->next->name);
	print_all_name(p1);


	return 0;
}