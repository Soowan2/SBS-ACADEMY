

// p�� a,b,c,d,e�� ��� ������ּ���.

#include <stdio.h>

int main(void) {

	int e = 50;
	int d = 40;
	int c = 30;
	int b = 20;
	int a = 10;

	printf("a�� �ּ� : %ld\n", (long)&a);
	printf("b�� �ּ� : %ld\n", (long)&b);
	printf("c�� �ּ� : %ld\n", (long)&c);
	printf("d�� �ּ� : %ld\n", (long)&d);
	printf("e�� �ּ� : %ld\n", (long)&e);

	int* p = &a;
	printf("p�� ��   : %ld\n", (long)p);

	// ���� ����

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", *(p - 8 * i));
	}

	// ���� ��


	// ��� :
	/*
	   10
	   20
	   30
	   40
	   50
	*/

	// ��ǻ�;� int 5���� �����ϰ� ������ �Ϸķ� �ٿ��� ������� �׸��� ���� �� �ּҸ� �˷���.

	// �ڷ���, ����, ���� �ּ�
	int arr[5]; // �迭

	// arr -> �迭�̸�, �� == ���� �ּҰ�(�迭 ����� ����� Ÿ������ ���)
	printf("%d\n", (int)arr);
	*arr = 10;
	printf("%d\n", (int)(arr + 1));
	*(arr + 1) = 20;
	printf("%d\n", (int)(arr + 2));
	*(arr + 2) = 30;
	printf("%d\n", (int)(arr + 3));
	*(arr + 3) = 40;

	printf("arr[0] : %d\n", (int)&arr[0]);
	printf("arr[1] : %d\n", (int)&arr[1]);

	printf("%d\n", *(arr + 0)); //*(arr + 0) �� arr[0]�� ����ǥ��
	printf("%d\n", arr[0]);     // arr + 1 �� &arr[1]�� ����ǥ�� (�迭�� �̸��� �ּҰ��̴�.)






	return 0;
}