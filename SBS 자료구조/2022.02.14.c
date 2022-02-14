#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void) {

	int count;
	printf("사람의 수를 입력해주세요 : ");
	scnaf("%d", &count);

	int* ages = (int*)malloc(count * count * sizeof(int)); // 나이 저장소
	char** names = (char**)malloc(count * sizeof(char*)); // 이름 저장소
	// char(*names2)[20] = malloc(count * sizeof()); // 2차원 배열 포인터

	char(*parr)[20] = (char(*)[20])malloc(sizeof(char*) * count);




	return 0;
}