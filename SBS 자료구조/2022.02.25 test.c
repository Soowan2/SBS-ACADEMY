#include<stdio.h>

int main(void) {
	// 2. 이진탐색 -> O(log N)
	int arr[] = { 1,2,3,4,5,6,7,8 };

	int target = 8;   // 찾고자 하는 값
	int rst_idx = -1; // 찾고자 하는 값의 인덱스

	// 이진탐색 알고리즘 구현 시작
	int size = sizeof(arr) / sizeof(int);

	int start = 0;
	int end = size - 1;

	int mid = (end + start) / 2;

	while (1) {
		if (target > arr[mid]) {
			start = mid + 1;
		}

		else if (target < arr[mid]) {
			end = mid - 1;
		}

		else {
			rst_idx = mid;
			break;
		}
	}

	printf("%d", rst_idx);
}