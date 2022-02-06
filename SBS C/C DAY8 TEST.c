#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	//  연월일 입력받아 그대로 출력하기

	int year;
	int month;
	int day;

	scanf("%d.%d.%d", &year, &month, &day);
	printf("%04d.%02d.%02d", year, month, day);


	// 주민번호 입력받아 형태 바꿔 출력하기

	int a;
	int b;

	scanf("%d-%d", &a, &b);

	printf("%06d%07d", a, b);

}