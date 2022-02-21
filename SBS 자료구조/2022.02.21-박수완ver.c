// ���� : ȸ���� ���� �̸� ������ �ʰ� �Ѹ� �Է��� ������ �������ּ���. ȸ���� ���� �� �� ���� ������ ����, ���� �迭 ��� ����� �� ������ ���� ����� ȸ�� �������� �ռ� 3���� ��� ����ó�� ���� �����ؾ��մϴ�.

// ����
/*
�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ) : 1
���̸� �Է����ּ��� : 20[����]
�̸��� �Է����ּ��� : ȫ�浿[����]
�ּҸ� �Է����ּ��� : ����[����]
�ּҷ��� �߰��Ǿ����ϴ�.
�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ) : 1
���̸� �Է����ּ��� : 50[����]
�̸��� �Է����ּ��� : �Ӳ���[����]
�ּҸ� �Է����ּ��� : ���[����]
�ּҷ��� �߰��Ǿ����ϴ�.
�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ) : 1
���̸� �Է����ּ��� : 23[����]
�̸��� �Է����ּ��� : Ȳ����[����]
�ּҸ� �Է����ּ��� : ����[����]
�ּҷ��� �߰��Ǿ����ϴ�.
�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ) : 2
== ��ü ȸ�� ����Ʈ ==
1��° ����� ����, �̸� : 20, ȫ�浿, ����
2��° ����� ����, �̸� : 50, �Ӳ���, ���
3��° ����� ����, �̸� : 23, Ȳ����, ����

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

	target = head; // ��ũ�帮��Ʈ�� ù��° ���(���)

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
		printf("�޴��� �������ּ���(1. �ּҷ� �߰�, 2. �ּҷ� ��ȸ) : ");
		scanf("%d", &num);
		if (num == 1)
		{
			Person* head = (Person*)malloc(sizeof(Person));
		
			printf("���̸� �Է����ּ��� : ");
			scanf("%d", &(head->age));
			printf("�̸��� �Է����ּ��� : ");
			scanf("%s", head->name);
			printf("�ּҸ� �Է����ּ��� : ");
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
				printf("%d��° ����� ����, �̸�, �ּ� : %d, %s, %s\n", i + 1, first->age, first->name, first->address);

				first = first->next;
			}
		}
	}
	return 0;
}