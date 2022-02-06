#define _CRT_SECURE_NO_WARNINGS // scanf를 사용할때 오류가 나오지않게 해줌
#include<stdio.h>

int main(void) {


	// 입력 -> 


	float data;  // 입력값을 저장할 변수

	// printf("%d\n",data); // 서식문자

	// scanf("%f" , &data); // 입력

	// printf("사용자가 입력한 데이터 : %f", data); 


	// 여러개 입력받는 법
	int year;
	int month;
	int day;

	// 입력의 완료 : 공백 또는 줄바꿈
	// scanf("%d", &year);
	// scanf("%d", &month);
	// scanf("%d", &day);

	

	// 한번에 입력 받기
	printf("당신의 생일을 입력해주세요. (생년월일을 ,로 구분해주세요)\n");

	scanf("%d,%d,%d", &year, &month, &day); // 입력,입력,입력 으로 입력한다. (콤마를 이용하여 구분) -이나 공백을 이용하는것도 가능하다. 

	printf("%d년 %d월 %d일 입니다.\n", year, month, day);

	// 산술 연산자
	// 더하기 : +
	// 빼기 : -
	// 곱하기 : *
	// 나누기 : /
	// 나머지 : %

	// 논리 연산자

	return 0;
}