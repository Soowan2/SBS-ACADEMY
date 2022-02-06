#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void change(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main(void) {

	// 자료형을 나누는 기준 
	// 1. 크기
	// 2. 유형

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

	//// 포인터 유형의 크기는 : 4?  8

	//printf("%u\n", sizeof(char*));
	//printf("%u\n", sizeof(short*));
	//printf("%u\n", sizeof(int*));
	//printf("%u\n", sizeof(long*));

	//// 포인터의 타입마다 작동이 다르다.

	//char num3 = 1;
	//short num2 = 1;
	//int num1 = 1;
	//double num4 = 3.0;

	//// 포인터변수에 저장되는 주소값은 그냥 주소값.
	//// 주소를 찾은 후 어떤 크기로 읽어와 어떤 유형으로 해석해야할지는 포인터변수의 타입에 의해 결정

	//char* pn1 = &num3;
 //   double* pn3 = &num4;

	//printf("%f\n", *pn3); // 0x30
	//printf("%d\n", *pn1); // 0x10  

	// 포인터 왜 쓰냐??
	// 지역 -> 초월

	// 연속된 자료를 다룰 수 있다. -> 배열

	// 다른 메모리 공간을 참조할 수 있다.

	// 자료구조를 만들 수 있다.

	int a = 10;
	int b = 20;

	change(&a, &b);

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;

}