// ���������� �̿��� �Ʒ� �迭�� ���ҵ��� �������� �����Ͽ� ������ּ���.

#include <stdio.h>

// �������� : �ش� ������ ���Ҹ� ���� ��ġ�� �̹� ������ �ְ�, � ���Ҹ� ������ �����ϴ� �˰���
//min�� �̿�
void selection_sort(int* arr, int arr_size) {

    // 1. �ּҰ� ã��
    // 2. �ּҰ��� ���� �ٲٱ�

}

int main(void) {

    int arr[] = { 200, 10, 15, 20, 25 };

    int arr_size = sizeof(arr) / sizeof(int);

    selection_sort(arr, arr_size);

    for (int i = 0; i < arr_size; i++) {
        printf("arr[%d] : %d\n", i, arr[i]);
    }

    // ��¿���
    /*
    arr[0] : 10
    arr[1] : 15
    arr[2] : 20
    arr[3] : 25
    arr[4] : 200
    */

    return 0;
}
