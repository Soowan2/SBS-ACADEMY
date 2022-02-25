#include <stdio.h>

int main(void) {

    // cpu - memroy : 연산과 저장
    // 연산(대입, 산술, 비교 등)의 횟수 -> 처리 시간 -> 시간복잡도
    // 저장공간의 크기 -> 저장 용량 -> 공간복잡도
    // 일반적으로는 시간복잡도 >= 공간복잡도

    // 시간복잡도를 수학적으로 표기하는 방법 빅오 big - O
    // 정확한 알고리즘의 연산 수행 시간 구하는게 아닌 데이터 증가에 따른 처리 시간 증가 비율을 보기 위함
    // 때문에 상수는 고려되지 않음 n 이나 2n이나 데이터가 늘어날 때 처리시간이 증가하는 비율이 같기 때문

    int arr[] = { 1,2,3,4,5,6,7,8 };

    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    // 위 코드는 연산의 횟수가 데이터개수 * (나머지 연산 + 비교 연산 + 인덱싱 연산) => O(n)  
    // 1. 배열 인덱싱 -> O(1)
    printf("%d", arr[0]); // arr + 0)


    // 2. 이진탐색 -> O(log N)
    int arr5[] = { 1,2,3,4,5,6,7,8 };

    int target = 8;   // 찾고자 하는 값
    int rst_idx = -1; // 찾고자 하는 값의 인덱스

    // 이진탐색 알고리즘 구현 시작
    int size = sizeof(arr5) / sizeof(int);

    printf("size : %d\n", size);

    if (target > arr5[size / 2]) {

    }



    // for(int i = 0; i < 8; i++) {
    //   if(arr[i] == target) {
    //     rst_idx = i;
    //   }
    // }



    // 이진탐색 알고리즘 구현 끝

    if (rst_idx != -1) {
        printf("%d\n", rst_idx); //7
    }
    else {
        printf("없는 값입니다.");
    }

    // 3. 일반 반복문 -> O(n) 

    for (int i = 0; i < 8; i++) {
        printf("%d", arr[i]);
    }

    // 4. 분할정복(Divide and Conquer) 알고리즘  -> O(n log N)

      // 병합정렬 -> 시간복잡성 안정성 뛰어남.

    // 5. 이중 반복문 -> O(n^2)

    // 단순 정렬 -> 버블, 선택, 삽입


    // 6. 피보나치 재귀함수 -> O(2^n)
    // 1 1 2 3 5 8 13 21 34 55

    // 1. 반복문 버전
    // 2. 재귀 버전

    fibo(6); // 8



        return 0;
}