
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct Person {
	int age;
	char* name;
	char* address;
};

int main(void) {

	//int age = 30;
	//char name[20] = "�̼���";
	//char address[20] = "����";

	//printf("�ȳ��ϼ��� %d�� %s��� %s�Դϴ�.\n", age, address, name);


	//// 1���� ��� ����
	//struct Person p1;

	//p1.age = 20;

	//// ���ڿ� ī�� �Լ� -> strcpy(������ �ּ�, ���� ��� �ּ�);
	//// p1.name; // ���� ���� -> api
	//strcpy(p1.name, "ȫ�浿");
	//strcpy(p1.address, "����");

	//printf("�ȳ��ϼ��� %d�� %s��� %s�Դϴ�.\n", p1.age, p1.address, p1.name);

	// ����ü �迭
	struct Person people[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &people[i].age);
		scanf("%s", &people[i].name);
		scanf("%s", &people[i].address);
	}

	return 0;
}