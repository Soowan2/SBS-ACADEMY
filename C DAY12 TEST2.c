// ���� : char ���� b�� �̿����� �ʰ� b�� ���� �Ѽ�
// ���� : ������ ������ ����ؼ� ���� �����ؾ� �Ѵ�.
// ���� : �������� �������� b ��� ������ ����ϸ�(����ϸ�) �ȵ˴ϴ�.

#include <stdio.h>

int main(void) {

	int a = 1;
	int b = 5;

	printf("== ������ �ּ� ==\n");
	printf("&a : %ld\n", (long)&a);
	printf("&b : %ld\n", (long)&b);

	// ������������ ����


	int* pa = &a;
	
	*pa += 1;

	// char�� 1 int�� 4 �� ������ �ڷ����� byte ��ŭ�� ��ĭ

	int* pb = pa + 8; // x4 �� �Ź���..

	*pb += 5;


	//printf("p : %ld\n", (long)p);
	// ������������ ��

	printf("== ������ �� ==\n");
	printf("a : %d\n", a);
	// ��� => a : 2
	printf("b : %d\n", b);
	// ��� => b : 10

	return 0;
}