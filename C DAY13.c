

// p로 a,b,c,d,e를 모두 출력해주세요.

#include <stdio.h>

int main(void) {

	int e = 50;
	int d = 40;
	int c = 30;
	int b = 20;
	int a = 10;

	printf("a의 주소 : %ld\n", (long)&a);
	printf("b의 주소 : %ld\n", (long)&b);
	printf("c의 주소 : %ld\n", (long)&c);
	printf("d의 주소 : %ld\n", (long)&d);
	printf("e의 주소 : %ld\n", (long)&e);

	int* p = &a;
	printf("p의 값   : %ld\n", (long)p);

	// 수정 시작

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", *(p - 8 * i));
	}

	// 수정 끝


	// 출력 :
	/*
	   10
	   20
	   30
	   40
	   50
	*/

	// 컴퓨터야 int 5개를 저장하고 싶은데 일렬로 붙여서 만들어줘 그리고 제일 앞 주소만 알려줘.

	// 자료형, 길이, 시작 주소
	int arr[5]; // 배열

	// arr -> 배열이름, 값 == 시작 주소값(배열 선언시 사용한 타입으로 취급)
	printf("%d\n", (int)arr);
	*arr = 10;
	printf("%d\n", (int)(arr + 1));
	*(arr + 1) = 20;
	printf("%d\n", (int)(arr + 2));
	*(arr + 2) = 30;
	printf("%d\n", (int)(arr + 3));
	*(arr + 3) = 40;

	printf("arr[0] : %d\n", (int)&arr[0]);
	printf("arr[1] : %d\n", (int)&arr[1]);

	printf("%d\n", *(arr + 0)); //*(arr + 0) 과 arr[0]은 같은표현
	printf("%d\n", arr[0]);     // arr + 1 과 &arr[1]은 같은표현 (배열의 이름은 주소값이다.)






	return 0;
}