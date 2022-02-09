#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int* test() {

	int arr2[3] = (int*)malloc(12);
	arr2[0] = 100;
	arr2[1] = 200;
	arr2[2] = 300;
	
	 return arr2;
}

int main(void) {

	// int a = 10 // 스택에 저장

	// 지역변수에서 리턴을 주소값으로 하는것은 아무의미가 없다. 주소가 가리키는 값이 다 사라지기 때문
	// 다른 함수에서 만든 배열에 접근할 수 없다.
	int* a = test();

	//printf("arr[0]의 주소 : %p\n", &a[0]);
	//printf("arr[2]의 주소 : %p\n", &a[1]);
	//printf("arr[1]의 주소 : %p\n", &a[2]);


	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);

	// 값을 저장
	//int arr[3];
	//int count = 0;

	//printf("몇개의 값을 저장하시겠습니까? : ");
	//scanf("%d", &count);
	// int* arr = (int*)malloc(count *sizeof(int)); 

	//for (int i = 0; i < count; i++)
	//{
	//	printf("값을 입력해주세요 : \n");
	//	scanf("%d", &arr[i]);
	//	//scanf("%d", arr + 0);
	//}
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	// 1. 다른 함수의 자원을 참조하기 어렵다. (피호출자 => 호출자 리턴)
	//    -> 지역변수는 함수가 끝나면 사라지기 때문에.
	//    -> 스택이 아닌 곳에 할당해서 해결. (힙) 
	// 2. 메모리 사용이 유연하지 못하다.
	//    -> 지역변수는 컴파일이 될 때(컴파일 타임) 메모리가 계산된다. (정적할당)
	//    -> 실행중일 때(런타임)에 메모리는 변하지 않는다.
	//    -> 런타임 때 메모리 할당하는 방법을 이용해서 해결. (동적할당 -> 힙)
	// 결론 : 동적할당하면 해결된다.
	
	// 동적할당 : malloc()
	// 인수 : 할당받고 싶은 메모리 크기
	// 리턴 : 주소

	// int* arr2 = (int*)malloc(12); // 12바이트를 힙에 할당, 주소를 리턴
	// char* arr3 = (int*)malloc(12); // 12바이트를 힙에 할당, 주소를 리턴
	
	// 동적할당 -> 메모리 관리 직접해야한다.
	//         -> 정적할당에 비해서 느리다.
	return 0;
}