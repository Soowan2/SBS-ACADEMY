
#include <stdio.h>
// ȫ�浿���� ¦���� ������ �����ϰ� ������ּ���.
typedef struct _student {
	int num;
	int age;
	char name[20];

	struct _student* friend;
}student;

void introduce(student s) {
	printf("�ȳ��ϼ��� ���� %d�� %d�� %s�̰��, ���� ¦���� 3�� 22�� Ȳ�����Դϴ�.", s.num, s.age, s.name, s.friend->num, s.friend->age, s.friend->name);
}

int main(void) {
	
	student s2 = { 3,22,"Ȳ����" };
	student s3 = { 2,21,"ȫ���" };
	student s1 = { 1,20,"ȫ�浿",&s2 };

	introduce(s1);
	// ��� : �ȳ��ϼ��� ���� 1�� 20�� ȫ�浿�̰��, ���� ¦���� 3�� 22�� Ȳ�����Դϴ�.


	// ¦���� �ٲ�����ϴ�. �Ʒ��� ���� ������ּ���.


	// ��� : �ȳ��ϼ��� ���� 1�� 20�� ȫ�浿�̰��, ���� ¦���� 2�� 21�� ȫ����Դϴ�.

	return 0;
}