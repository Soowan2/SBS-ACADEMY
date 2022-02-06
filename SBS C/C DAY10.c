#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void test3() {
	printf("3\n");
}

void test2() {
	test3();
	printf("2\n");
}

void test1() {
	test2();
	printf("1\n");
}

int main(void) {

	// 스택메모리
	// 스택 -> 가장 나중에 들어온 자료를 가장 먼저 처리하는 구조
	
	test1();

	char a = 20; 
	
	// 어디에 저장했니? -> 위치(포인터) 알려줘
	// & (주소연산자) 

	// 주소출력   
	printf("%p\n", &a);
	printf("%p\n", &a); // 16진수로 주소 출력
	printf("%d\n",(int)&a); // 10진수로 형변환

	// 값을 가져오기
	printf("%d\n", a); // 이름으로 가져오기
	printf("%d\n", *&a); // 포인터로 가져오기(역참조) => 주소값 앞에 * : a의 포인터에 저장되어있는 값 가져오기

	// 주소값 저장 -> 주소 변수 : 자료형 + *
	char* pa = &a;
	
	int b = 10000;
	int* pb = &b;

	printf("%d\n", *pa);
	printf("%d\n", *pb);



	return 0;
}