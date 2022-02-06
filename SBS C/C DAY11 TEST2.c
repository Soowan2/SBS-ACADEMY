// 문제 : C언어에 있는 모든 포인터타입변수의 크기를 출력해주세요.

#include <stdio.h>

int main(void) {

	// int : 4
	// char : 1

	// sizeof : 변수나 자료형의 크기를 구하는 연산자
	// sizeof(int) // 함수의 리턴처럼 해당 자료혀의 크기를 반환

	// 정수타입
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(short));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(long));

	// 실수타입
	printf("%lu\n", sizeof(float));
	printf("%lu\n", sizeof(double));

	// 주소타입

	printf("%lu\n", sizeof(char*));
	printf("%lu\n", sizeof(short*));
	printf("%lu\n", sizeof(int*));
	printf("%lu\n", sizeof(long*));
	printf("%lu\n", sizeof(float*));
	printf("%lu\n", sizeof(double*));

	return 0;
}