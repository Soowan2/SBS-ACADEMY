#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	// 두개의 값을 입력받아서 더해주는 프로그램

	int num1;
	int num2;

	// 반복문 : 특정 코드를 반복한다.

	//반복문 제어 
	// break : 반복문을 그 즉시 종료한다.
	//continue : 그 즉시 다음 회차로 넘어간다.
    while(1)
	{
		

		printf("두개의 숫자를 공백으로 구분하여 입력해주세요(종료를 원하시면 0을 2번 입력해주세요) : ");
		scanf("%d %d", &num1, &num2);

		if (num1 == 0) {
			if (num2 == 0) {
				break;
			}
		}

		printf("%d + %d = %d\n", num1, num2, num1 + num2);

	}

	int count = 0;

	while (1) 
	{
		if (count == 10) {
			break;
		}

		printf("aa\n");

		count += 1; // 복합대입연산자 : count에 1을 더해준다. count = count + 1; 과 같은 표현이다.
		// count++; // 1씩 증가. 
	}

	int count2 = 0;

	while (count2 < 10)
	{
		printf("bb\n");

		count2++;

	}

	// for (변수 ; 범위 ; 증감) { }
	// for (시작 ; 끝 ; 증가량) { }
	//특정 횟수 반복할 때에는 for문을 사용 
	for (int count = 0; count < 10; count++)
	{
		
		printf("%d\n",count);

	}


	// 1. 반복문 : while, for
	// while : 범위가 없는 경우
	// for : 범위가 있는 경우, 수열을 다루는 경우

	// 반복문을 제어하는 법 : 반복횟수를 세서 반복 조건을 만족시키거나 , break 를 사용하여 원할 때 빠져나간다.

	




	return 0;
}
