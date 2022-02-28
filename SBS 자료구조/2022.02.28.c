#include <stdio.h>

void merge_sort(int s, int m, int e, int* arr) {

    int tmp[8];
    int f = s;
    int b = m + 1;
    int t = s;

    while (f <= m && b <= e) {
        if (arr[f] < arr[b]) {
            tmp[t++] = arr[f++];
        }
        else {
            tmp[t++] = arr[b++];
        }
    }

    if (f <= m) {
        for (int i = f; i <= m; i++) {
            tmp[t++] = arr[i];
        }
    }
    else {
        for (int i = b; i <= e; i++) {
            tmp[t++] = arr[i];
        }
    }

    for (int i = s; i <= e; i++) {
        arr[i] = tmp[i];
    }

    printf("=============== merge ===============\n");
    printf("merge : [ "); // 쪼갤 대상
    for (int i = s; i <= e; i++) {
        printf("%d ", arr[i]);
    }
    printf("] \n");
}

void merge_divide(int start, int end, int* arr) {

    int mid = (start + end) / 2;

    // arr을 앞배열과 뒷배열로 쪼개어 그 결과를 출력
    printf("=============== divide ==============\n");
    printf("target : [ "); // 쪼갤 대상
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("] ");
    printf("\n\n");

    printf("front : [ "); // 쪼개어진 앞쪽 배열
    for (int i = start; i <= mid; i++) {
        printf("%d ", arr[i]);
    }
    printf("] ");
    printf("\n\n");

    printf("back  : [ "); // 쪼개어진 뒤쪽 배열
    for (int i = mid + 1; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("] ");
    printf("\n\n");

    // 더 이상 쪼개어질 수 없을 때 return으로 재귀 종료
    if (start >= end) {
        printf("쪼개기 끝\n");
        return;
    }

    // 앞배열 쪼개기
    merge_divide(start, mid, arr);

    // 뒷배열 쪼개기
    merge_divide(mid + 1, end, arr);

    // 위에서 쪼갠 두 배열을 정렬하여 합치기
    merge_sort(start, mid, end, arr);


}

int main(void) {

    int arr[8] = { 2,3,5,1,7,8,6,4 };

    merge_divide(0, 7, arr);

    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}