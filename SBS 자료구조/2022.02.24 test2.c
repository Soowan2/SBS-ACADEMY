// 거품정렬을 이용해 아래 배열의 원소들을 오름차순 정렬하여 출력해주세요. 
#include <stdio.h>

int* bubble_sort(int arr[], int arr_size) {

	int count = 0;
	int num = 0;

	for (int i = arr_size - 1; i != 0; i--) 
	{
		for (int k = 1; k < arr_size; k++)
		{
			if (arr[count] > arr[k])
			{
				num = arr[count];
				arr[count] = arr[k];
				arr[k] = num;
			}
			count++;
		}
		arr_size -= 1;
		count = 0;
	}
}

int main(void) {

	int arr[] = { 200, 10, 15, 20, 25 };

	int arr_size = sizeof(arr) / sizeof(int);

	bubble_sort(arr, arr_size);

	for (int i = 0; i < arr_size; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	// 출력예시
	/*
	arr[0] : 10
	arr[1] : 15
	arr[2] : 20
	arr[3] : 25
	arr[4] : 200
	*/

	return 0;
}

