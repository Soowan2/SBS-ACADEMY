// ���� : ����ü�� �����ؼ� �ҽ��ڵ带 �����ϰ� �ٲ��ּ���.

#include <stdio.h>

struct Person
{
	int age;
	char name[20];
	char home[20];
	char food[20];
};

void introduce(struct Person p1) {
	printf("== �Ұ� ���� ==\n");
	printf("�̸� : %s\n", p1.name);
	printf("���� : %d��\n", p1.age);
	printf("���� : %s\n", p1.home);
	printf("== �Ұ� �� ==\n");
}

void talk(struct Person p1) {
	printf("�̾߱� ���� : �ȳ��ϼ���. ���� %d��, %s �Դϴ�. �� ������ %s ������...\n", p1.age, p1.name, p1.home);
}
// �Լ�, ����ü ���� - �Լ� �ۿ�

int main() {

	struct Person p1 = { 20,"ȫ�浿","�Ѿ�","������" };

	struct Person p2 = { 45,"�Ӳ���","���","����" };

	introduce(p1);
	talk(p1);

	introduce(p2);
	talk(p2);

	return 0;
}
