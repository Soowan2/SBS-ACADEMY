#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void) {

	int count;
	printf("����� ���� �Է����ּ��� : ");
	scnaf("%d", &count);

	int* ages = (int*)malloc(count * count * sizeof(int)); // ���� �����
	char** names = (char**)malloc(count * sizeof(char*)); // �̸� �����
	// char(*names2)[20] = malloc(count * sizeof()); // 2���� �迭 ������

	char(*parr)[20] = (char(*)[20])malloc(sizeof(char*) * count);




	return 0;
}