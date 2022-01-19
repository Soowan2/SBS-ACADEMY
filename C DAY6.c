#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	
	
	int score;

	printf("성적을 입력하세요 : ");
	scanf("%d", &score);

	if (score >= 101) {
		printf("잘못된 성적입력입니다.\n");
	}

	else if (score < 0) {
		printf("잘못된 성적입력입니다.\n");
	}

	else if (score >= 90) {
		printf("A\n");
	}

	else if (score >= 80) {
		printf("B\n");
	}

	else if (score >= 70) {
		printf("C\n");
	}
	
	
	
	
	// 2개 중 하나 선택 : 남/녀 , 할인대상 , 감염여부 , 동전의 앞/뒤 , 참/거짓 , 홀/짝

	// 짝수 조건

	int num = 2;
	
	if (num % 2 == 0) {
		printf("짝수\n");
	}
	else {
		printf("홀수\n");
	}

	// else if : 다양한 조건을 택 1 하기 위함
	// else : 위에서 따진 조건을 모두 만족하지 않는 경우 마지막에 처리

	// 논리연산자
	// 논리곱(and) - && : 두 논리값이 모두 1일 때만 1 나머진 0 -> 모두 만족
	// 논리합(or) - || : 두 논리값이 모두 0일 때만 0 나머진 1 -> 하나라도 만족




	return 0;
}