#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float area(int r) {

	float result = r * r * 3.14;

	return result; // 함수를 값으로 만들어준다.

}


int main(void) {

	//반지름 3 인 원의 넓이

	area(3);

	printf("%f\n", area(3) / 2);
}