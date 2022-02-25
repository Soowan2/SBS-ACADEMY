#include<stdio.h>

int main(void) {
	// 2. ����Ž�� -> O(log N)
	int arr[] = { 1,2,3,4,5,6,7,8 };

	int target = 8;   // ã���� �ϴ� ��
	int rst_idx = -1; // ã���� �ϴ� ���� �ε���

	// ����Ž�� �˰��� ���� ����
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