// 선택정렬을 이용해 아래 배열의 원소들을 오름차순 정렬하여 출력해주세요.

#include <stdio.h>

// 선택정렬 : 해당 순서에 원소를 넣을 위치는 이미 정해져 있고, 어떤 원소를 넣을지 선택하는 알고리즘
//min을 이용
void selection_sort(int* arr, int arr_size) {

    // 1. 최소값 찾기
    // 2. 최소값의 순서 바꾸기

}

int main(void) {

    int arr[] = { 200, 10, 15, 20, 25 };

    int arr_size = sizeof(arr) / sizeof(int);

    selection_sort(arr, arr_size);

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
