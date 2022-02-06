#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// 1. 숫자 두개 받아서 출력하기

	int a;
	int b;

	printf("숫자 두개를 입력하세요 (숫자는 , 로 구분) : ");
	scanf("%d,%d", &a, &b);

	printf("입력한 숫자는 : %d, %d 입니다.\n", a, b);


	  // 2. 숫자 두개 받아서 더한 값 출력하기

	printf("입력한 두 숫자를 더한 값은 : %d\n", a + b);

	  // 3. 숫자 3개 받아서 출력하기

	int c;
	int d;
	int f;

	printf("숫자 3개를 입력하세요 (숫자는 , 로 구분) : ");
	scanf("%d,%d,%d", &c, &d, &f);
	printf("입력한 숫자는 %d, %d, %d 입니다.\n", c, d, f);
	  
	// 4. 숫자 3개 받아서 모두 곱하고 결과 출력하기
	
	printf("입력한 숫자의 곱은 : %d\n", c * d * f);
	
	// 5. 실수 1개를 입력받아 출력하기

	float g;

	printf("실수 1개를 입력하세요 : ");
	scanf("%f", &g);
	printf("%f", g);

	return 0;
}