// �Ʒ� �ڵ带 �������ּ���.
#include <stdio.h>

/*
is_even() �Լ� ����
*/

int is_even(int a) {
    if (a % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(void) {

    for (int i = 0; i < 10; i++) {

        int flag = is_even(i);

        if (flag) {
            printf("¦���Դϴ�.\n");
        }
        else {
            printf("Ȧ���Դϴ�.\n");
        }
    }

    return 0;
}