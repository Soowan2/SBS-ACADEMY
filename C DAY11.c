#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void change(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main(void) {

	// �ڷ����� ������ ���� 
	// 1. ũ��
	// 2. ����

	//char c;  // 1
	//char* pc;

	//short s; // 2
	//short* ps;

	//int i; // 4
	//int* pi;

	//long l; // 4
	//long* pl;

	//float f; // 4
	//float* pf;

	//double d; // 8
	//double* pd;

	//// ������ ������ ũ��� : 4?  8

	//printf("%u\n", sizeof(char*));
	//printf("%u\n", sizeof(short*));
	//printf("%u\n", sizeof(int*));
	//printf("%u\n", sizeof(long*));

	//// �������� Ÿ�Ը��� �۵��� �ٸ���.

	//char num3 = 1;
	//short num2 = 1;
	//int num1 = 1;
	//double num4 = 3.0;

	//// �����ͺ����� ����Ǵ� �ּҰ��� �׳� �ּҰ�.
	//// �ּҸ� ã�� �� � ũ��� �о�� � �������� �ؼ��ؾ������� �����ͺ����� Ÿ�Կ� ���� ����

	//char* pn1 = &num3;
 //   double* pn3 = &num4;

	//printf("%f\n", *pn3); // 0x30
	//printf("%d\n", *pn1); // 0x10  

	// ������ �� ����??
	// ���� -> �ʿ�

	// ���ӵ� �ڷḦ �ٷ� �� �ִ�. -> �迭

	// �ٸ� �޸� ������ ������ �� �ִ�.

	// �ڷᱸ���� ���� �� �ִ�.

	int a = 10;
	int b = 20;

	change(&a, &b);

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;

}