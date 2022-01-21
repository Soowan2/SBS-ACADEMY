// 아래 코드를 구현해주세요.
#include <stdio.h>

/*
is_even() 함수 구현
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
            printf("짝수입니다.\n");
        }
        else {
            printf("홀수입니다.\n");
        }
    }

    return 0;
}