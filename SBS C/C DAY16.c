#include<stdio.h>

int k = 10; // 전역변수

int main(void) {

	int a = 10; // 지역변수

	
	printf("%p\n", &a); // 포인터, 주소, 위치값, 일련번호

	// 포인터 값
	// 공간에 저장되어 있는 값.

	// 역참조 -> 주소 찾아가기 -> 공간이 나옴 ====> *주소
	 

	// int* pa = &a; // 저장해서 사용.

	// *&a;
	// *pa;

	// int i = 1000000;

	// short* pa = &i;

	// printf("%d\n", *pa);


	int b = 10;
	int c = 20;

	printf("%d\n", (int)&b);
	printf("%d\n", (int)&c);

	// int* pb = &b - 12; // 주소를 연산하면 주소가 나온다.
	// 주소 연산은 단순한 산술 연산이 아니고 해당 주소 자료형의 크기만큼 이동하는것.

	

	int* pb = &b;

	printf("%d\n", *pb);

	pb = pb - 3;

	printf("%d\n", (int)pb);
	printf("%d\n", *pb);

	// 배열 선언 -> 자료형 크기 X 개수 만큼 연속된 메모리 제공.
	int arr1[3];
	char arr2[12];
	short arr3[6];
	
	int* parr1 = arr1;

	// 배열 변수명(배열 이름) -> 주소값
	// 배열 -> 타입, 길이, 배열 이름

	// (arr1 + 1) == arr1[1]

	return 0;
}