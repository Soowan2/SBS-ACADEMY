#include <stdio.h>
struct Teacher {
	int tage;
	char tname[20];
	char tsubject[20];
};
struct Student {
	int no;
	char name[20];
	int age;


	struct Teacher teacher;
};

void introduce(struct Student s) {
	printf("�ȳ��ϼ��� ���� %d�� %d�� %s�̰��, ���� ���Ӽ������� %d�� %s������ %s �������̽ʴϴ�.\n", s.no, s.age, s.name, s.teacher.tage, s.teacher.tsubject, s.teacher.tname);
}

int main(void) {
	// �� �л��鿡�� ���� ������ ������ �����ϰ� ������ּ���.
	struct Teacher t1 = { 45,"�̼���","����" };
	struct Teacher t2 = { 52,"�Ӳ���","ü��" };

	struct Student s1 = { 1, "ȫ�浿", 20, t1};
	struct Student s2 = { 2, "ȫ���", 21, t2};

	introduce(s1);
	// ��� : �ȳ��ϼ��� ���� 1�� 20�� ȫ�浿�̰��, ���� ���Ӽ������� 45�� ��������� �̼��� �������̽ʴϴ�.
	introduce(s2);
	// ��� : �ȳ��ϼ��� ���� 2�� 21�� ȫ����̰��, ���� ���Ӽ������� 52�� ü�������� �Ӳ��� �������̽ʴϴ�.


	// �� ����� ���Ӽ������� �ٲ�����ϴ�. �Ʒ��� ���� ������ּ���. 

	s1.teacher = t2;
	s2.teacher = t1;

	introduce(s1);
	// ��� : �ȳ��ϼ��� ���� 1�� 20�� ȫ�浿�̰��, ���� ���Ӽ������� 52�� ü�������� �Ӳ��� �������̽ʴϴ�.
	introduce(s2);
	// ��� : �ȳ��ϼ��� ���� 2�� 21�� ȫ����̰��, ���� ���Ӽ������� 45�� ��������� �̼��� �������̽ʴϴ�.

	return 0;
}