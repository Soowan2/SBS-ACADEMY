#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main(void) {

	// ����ڰ� ���ϴ� ��ŭ �����͸� �������ּ���.
	// �޸𸮸� ȿ�������� ������ּ���.
	int count = 0;
	printf("������ ���� ������ �Է��ϼ��� : ");
	scanf("%d", &count);
	int* arr = (int*)malloc(count*sizeof(int));


	// ������ ���� ���� : 5

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &arr[i]);
	}
	// 1��° �� : 1
	// 2��° �� : 2
	// 3��° �� : 3
	// 4��° �� : 4
	// 5��° �� : 5

	for (int i = 0; i < count; i++)
	{
		printf("%d ", arr[i]);
	}

	// ��� : 1 2 3 4 5

	return 0;
}