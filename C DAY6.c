#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	
	
	int score;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if (score >= 101) {
		printf("�߸��� �����Է��Դϴ�.\n");
	}

	else if (score < 0) {
		printf("�߸��� �����Է��Դϴ�.\n");
	}

	else if (score >= 90) {
		printf("A\n");
	}

	else if (score >= 80) {
		printf("B\n");
	}

	else if (score >= 70) {
		printf("C\n");
	}
	
	
	
	
	// 2�� �� �ϳ� ���� : ��/�� , ���δ�� , �������� , ������ ��/�� , ��/���� , Ȧ/¦

	// ¦�� ����

	int num = 2;
	
	if (num % 2 == 0) {
		printf("¦��\n");
	}
	else {
		printf("Ȧ��\n");
	}

	// else if : �پ��� ������ �� 1 �ϱ� ����
	// else : ������ ���� ������ ��� �������� �ʴ� ��� �������� ó��

	// ��������
	// ����(and) - && : �� ������ ��� 1�� ���� 1 ������ 0 -> ��� ����
	// ����(or) - || : �� ������ ��� 0�� ���� 0 ������ 1 -> �ϳ��� ����




	return 0;
}