#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	// 문제 : 변수 i의 값을 바꿔주세요.
    // 조건 : i의 값을 직접 바꾸는 것은 안됩니다.
    // 조건 : `i = 50;` 은 안됩니다.

	int i = 30;

	// 수정가능지역 시작

	 int* pi = &i;
	 *pi = 50;

	// 수정가능지역 끝

	printf("i : %d\n", i);
	// 출력 => i : 50


	// 문제 : 변수 c의 값을 변경해주세요.
    // 조건 : c의 값을 직접 바꾸는 것은 안됩니다.
    // 조건 : `c = 220;` 은 안됩니다.


	unsigned char c = 200;

	// 수정 가능 지역 시작

	unsigned char* d = &c;
	*d = 220;

	// 수정 가능 지역 끝

	printf("c : %d\n", c);
	//출력 => c : 220



	return 0;
}