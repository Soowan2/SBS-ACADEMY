// ���� : C�� �ִ� ��� ������Ÿ�Ժ����� ũ�⸦ ������ּ���.

#include <stdio.h>

int main(void) {

	// int : 4
	// char : 1

	// sizeof : ������ �ڷ����� ũ�⸦ ���ϴ� ������
	// sizeof(int) // �Լ��� ����ó�� �ش� �ڷ����� ũ�⸦ ��ȯ

	// ����Ÿ��
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(short));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long));

	// �Ǽ�Ÿ��
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));

	// �ּ�Ÿ��

	printf("%lu\n", sizeof(char*));
	printf("%lu\n", sizeof(short*));
	printf("%lu\n", sizeof(int*));
	printf("%lu\n", sizeof(long*));
	printf("%lu\n", sizeof(float*));
	printf("%lu\n", sizeof(double*));

	return 0;
}