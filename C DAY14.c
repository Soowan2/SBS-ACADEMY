#include<stdio.h>

void print_arr(int arr[10]) {
	printf("%u\n", sizeof(arr));

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main(void) {


	int arr[10] = { 0, };

	int* parr = arr;

	parr[0] = 0; // �����͸� �迭�� ��� ����!

	// �迭�� �����ʹ� ��������� �и��� �ٸ���!
	// 1. �ʱⰪ
	// �迭 �̸� : ���� �ּ� 
	// ������ : �����Ⱚ
	// 
	// 2. ���� ����
	// �迭 �̸� : ���� ���� �Ұ�
	// ������ : ���� ����
	// 
	// 3. ũ��
	// �迭�̸� : �迭�� ũ�� 
	// ������ : 8 byte 

	


	printf("%u\n", sizeof(arr)); // int �� �迭�̱� ������ 4 byte x 10
	printf("%u\n", sizeof(parr)); // 8 byte
	

	// �迭�� �Լ��� �ѱ� ��  ����.

	print_arr(arr); // print_arr �Լ����� arr�� ũ�⸦ ���ϸ� 8 �� ������ ���
	                // �迭�� �Ѿ ���� �ƴ� �����Ͱ� �Ѿ ��.







}