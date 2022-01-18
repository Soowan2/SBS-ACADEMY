#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

  // 다양한 수열(수의 규칙적인 나열)을 출력해주세요.

  // 1. 1 ~ 100까지 출력
	
	for (int count = 1; count < 101; count++)
	{
		printf("%d\n", count);
	}

  // 2. -25 ~ 50까지 출력
	
	for (int count = -25; count != 51; count++)
	{
		printf("%d\n", count);
	}

  // 3. 1 ~ 100 까지 짝수만 출력

	for (int count = 2; count < 101; count += 2)
	{
		printf("%d\n", count);
	}

  // 4. 100 ~ 200 사이의 홀수만 출력

	for (int count = 101; count < 201; count+=2)
	{
		printf("%d\n", count);
	}

  // 5. 1 ~ 500 사이의 수 중 4의 배수만 출력

	for (int count = 4; count < 501; count += 4)
	{
		printf("%d\n", count);
	}

  // 6. 1 ~ 1000 사이의 수 중 1000의 약수만 출력 -> 1000 % a == 0
  // 약수 -> 1000을 a로 나누었을 때 나누어 떨어지면 a를 1000의 약수라고 한다.
  // 약수는 1 ~ 자기자신만 대상 수로 한다.
  // 나누어 떨어진다는 것은 나누었을 때 나머지가 0이라는 것을 의미한다.

	for (int count = 1; count < 1001; count++)
	{
		if (1000 % count == 0) {
			printf("%d\n", count);
		}
		continue;
	}

  // 7. 1 ~ 1000 사이의 수 중 3의 배수 이면서 5의 배수인 수만 출력

	for (int count = 1; count < 1001; count++)
	{
		if (count % 15 == 0) {
			printf("%d\n", count);
		}
		continue;
	}

 }