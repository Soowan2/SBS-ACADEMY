#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main(void) {

	// 사용자가 원하는 만큼 데이터를 저장해주세요.
	// 메모리를 효율적으로 사용해주세요.
	int count = 0;
	printf("저장할 값의 개수를 입력하세요 : ");
	scanf("%d", &count);
	int* arr = (int*)malloc(count*sizeof(int));


	// 저장할 값의 개수 : 5

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &arr[i]);
	}
	// 1번째 값 : 1
	// 2번째 값 : 2
	// 3번째 값 : 3
	// 4번째 값 : 4
	// 5번째 값 : 5

	for (int i = 0; i < count; i++)
	{
		printf("%d ", arr[i]);
	}

	// 출력 : 1 2 3 4 5

	return 0;
}