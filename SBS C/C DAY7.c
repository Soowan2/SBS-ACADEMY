#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 함수 => 코드를 저장하는 것 : void 제목 () {}
void gugu(int dan) {
	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
}

int main(void) {
	// 데이터가 많아지면 -> 데이터 구조화
	// 코드가 많아지면 -> 구조화 (코드정리)


	//일정량의 코드가 넘어가면 함수 없이는 불가능하다.

	for (int dan = 2; dan <= 9; dan++) {
		gugu(dan); // 함수 사용 -> 호출
	}


	return 0;
}