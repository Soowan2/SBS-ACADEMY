// ���� : ����� 3�� ����� ���� ��������� ����Ű�� ������ּ���.
// ���� : �������������� ���������մϴ�.
// ��Ʈ : ������ ������ NULL �� ������ �ƹ��͵� �Ȱ���Ų�ٴ� �� �Դϴ�.

#include <stdio.h>

// ������������ ����
// ���⼭ ����ü�� �������ּ���.
typedef struct _Person {
	char* name;
	struct _Person* next;
} Person;
// ������������ ��

int main(void) {


	Person p1;
	p1.name = "�ϳ�";

	Person p2;
	p2.name = "�γ�";

	Person p3;
	p3.name = "����";

	// ������������ ����
	p1.next = &p2;
	p2.next = &p3;
	p3.next = NULL;
	// ������������ ��

	printf("������ ����� �̸��� %s �Դϴ�.", p1.next->next->name);
	// ��� : ������ ����� �̸��� �����Դϴ�.


	return 0;
}