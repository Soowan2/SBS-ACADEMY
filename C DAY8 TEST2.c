#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 리턴타입 함수이름(매개변수(여러개 가능)) { 바디 }
void 다국어인사(int lang) {
	if (lang == 3) {
		printf("봉쥬르\n");
	}
	else if (lang == 1) {
		printf("안녕하세요\n");
	}
	else if (lang == 2) {
		printf("하이\n");
	}
}

void 다국어인사2(int lang, int count) {
	for (int a = 0; a < count; a++) {
		다국어인사(lang);
	}
}

int main(void) {

	다국어인사2(2, 3);

}