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
    printf("merge : [ "); // �ɰ� ���
    for (int i = s; i <= e; i++) {
        printf("%d ", arr[i]);
    }
    printf("] \n");
}

void merge_divide(int start, int end, int* arr) {

    int mid = (start + end) / 2;

    // arr�� �չ迭�� �޹迭�� �ɰ��� �� ����� ���
    printf("=============== divide ==============\n");
    printf("target : [ "); // �ɰ� ���
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("] ");
    printf("\n\n");

    printf("front : [ "); // �ɰ����� ���� �迭
    for (int i = start; i <= mid; i++) {
        printf("%d ", arr[i]);
    }
    printf("] ");
    printf("\n\n");

    printf("back  : [ "); // �ɰ����� ���� �迭
    for (int i = mid + 1; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("] ");
    printf("\n\n");

    // �� �̻� �ɰ����� �� ���� �� return���� ��� ����
    if (start >= end) {
        printf("�ɰ��� ��\n");
        return;
    }

    // �չ迭 �ɰ���
    merge_divide(start, mid, arr);

    // �޹迭 �ɰ���
    merge_divide(mid + 1, end, arr);

    // ������ �ɰ� �� �迭�� �����Ͽ� ��ġ��
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