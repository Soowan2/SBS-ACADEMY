#include<Stdio.h>

int main(void) {

	// 정적할당 -> 컴파일타임, 스택
	// - 장 : 메모리 관리 쉽다
	// - 단 : 유연하지 못하다. 데이터 유지가 안된다
	// 동적할당 -> 런타임, 힙
	// - 장 : 데이터 유지가 되고, 공간을 효율적으로 사용
	// - 단 : 메모리 관리가 어렵다.
	//

	// 해제 자체는 너무 쉽다.
	// int* arr = (int*)malloc(1000);

	 // free(arr); // 해제 완료.

	int a = 10;
	int* pa = &a;

	printf("%d\n", pa);

	int** ppa = &pa; // 이중포인터
	int*** pppa = &ppa; // 삼중포인터

	// 이중포인터 -> 2차원 행렬
	// 삼중포인터 -> 3차원 행렬

	int arr1[] = { 1,2,3 }; // arr1 -> int형 주소 (int*)
	int arr2[] = { 4,5,6 }; // arr2 -> int형 주소 (int*)
	int arr3[] = { 7,8,9 };

	// 2차원 배열
	int* darr[] = { arr1, arr2, arr3 }; // darr -> int*형 주소 (int**)
	char* darr2[] = { arr1, arr2, arr3 };

	*darr; // 1행의 주소
	
	printf("%d\n", * (*(darr + 1) + 1));
	printf("%d\n", *(darr[1] + 1)); 
	printf("%d\n", darr[1][1]); 

	*darr; // darr -> int** -> 4바이트 읽어옴.
	*darr2; // darr2 -> char** -> 4바이트 읽어옴.


	return 0;
}