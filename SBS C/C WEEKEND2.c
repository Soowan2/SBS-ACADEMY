#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	/*
어떤 차의 높이가 170cm 입니다..

이 차는 3개의 터널을 차례대로 지나게 될 것입니다.

터널의 높이가 차의 높이보다 같거나 낮다면 차는 터널과 충돌하여 사고가 납니다.

터널의 높이를 차례대로 3개 입력하고 터널을 무사히 잘 통과하면 PASS 를 출력하고, 사고가 난다면 CRASH 를 출력하세요.

첫번째 터널 높이 입력 : 172
두번째 터널 높이 입력 : 179
세번째 터널 높이 입력 : 182

결과 : PASS

첫번째 터널 높이 입력 : 172
두번째 터널 높이 입력 : 169
세번째 터널 높이 입력 : 182

결과 : CRASH

*/
	int car = 170;
	int height1;
	int height2;
	int height3;

	printf("첫번째 터널 높이 입력 : ");
	scanf("%d", &height1);
	
	printf("두번째 터널 높이 입력 : ");
	scanf("%d", &height2);
	
	printf("세번째 터널 높이 입력 : ");
	scanf("%d", &height3);

	if(car < height1 && car < height2 && car < height3)
	{ 
		printf("PASS");
	}

	else
	{
		printf("CRASH");
	}



}