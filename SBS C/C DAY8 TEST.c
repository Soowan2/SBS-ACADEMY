#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	//  ������ �Է¹޾� �״�� ����ϱ�

	int year;
	int month;
	int day;

	scanf("%d.%d.%d", &year, &month, &day);
	printf("%04d.%02d.%02d", year, month, day);


	// �ֹι�ȣ �Է¹޾� ���� �ٲ� ����ϱ�

	int a;
	int b;

	scanf("%d-%d", &a, &b);

	printf("%06d%07d", a, b);

}