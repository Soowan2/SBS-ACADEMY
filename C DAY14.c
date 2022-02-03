#include<stdio.h>

void print_arr(int arr[10]) {
	printf("%u\n", sizeof(arr));

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main(void) {


	int arr[10] = { 0, };

	int* parr = arr;

	parr[0] = 0; // 포인터를 배열로 사용 가능!

	// 배열과 포인터는 비슷하지만 분명히 다르다!
	// 1. 초기값
	// 배열 이름 : 시작 주소 
	// 포인터 : 쓰레기값
	// 
	// 2. 수정 여부
	// 배열 이름 : 절대 수정 불가
	// 포인터 : 수정 가능
	// 
	// 3. 크기
	// 배열이름 : 배열의 크기 
	// 포인터 : 8 byte 

	


	printf("%u\n", sizeof(arr)); // int 형 배열이기 때문에 4 byte x 10
	printf("%u\n", sizeof(parr)); // 8 byte
	

	// 배열은 함수에 넘길 수  없다.

	print_arr(arr); // print_arr 함수에서 arr의 크기를 구하면 8 이 나오는 모습
	                // 배열이 넘어간 것이 아닌 포인터가 넘어간 것.







}