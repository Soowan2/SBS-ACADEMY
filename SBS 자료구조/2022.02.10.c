#include<Stdio.h>

int main(void) {

	// �����Ҵ� -> ������Ÿ��, ����
	// - �� : �޸� ���� ����
	// - �� : �������� ���ϴ�. ������ ������ �ȵȴ�
	// �����Ҵ� -> ��Ÿ��, ��
	// - �� : ������ ������ �ǰ�, ������ ȿ�������� ���
	// - �� : �޸� ������ ��ƴ�.
	//

	// ���� ��ü�� �ʹ� ����.
	// int* arr = (int*)malloc(1000);

	 // free(arr); // ���� �Ϸ�.

	int a = 10;
	int* pa = &a;

	printf("%d\n", pa);

	int** ppa = &pa; // ����������
	int*** pppa = &ppa; // ����������

	// ���������� -> 2���� ���
	// ���������� -> 3���� ���

	int arr1[] = { 1,2,3 }; // arr1 -> int�� �ּ� (int*)
	int arr2[] = { 4,5,6 }; // arr2 -> int�� �ּ� (int*)
	int arr3[] = { 7,8,9 };

	// 2���� �迭
	int* darr[] = { arr1, arr2, arr3 }; // darr -> int*�� �ּ� (int**)
	char* darr2[] = { arr1, arr2, arr3 };

	*darr; // 1���� �ּ�
	
	printf("%d\n", * (*(darr + 1) + 1));
	printf("%d\n", *(darr[1] + 1)); 
	printf("%d\n", darr[1][1]); 

	*darr; // darr -> int** -> 4����Ʈ �о��.
	*darr2; // darr2 -> char** -> 4����Ʈ �о��.


	return 0;
}