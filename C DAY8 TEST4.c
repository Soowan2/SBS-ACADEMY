// 아래가 출력되게 해주세요.
#include <stdio.h>

int is_true() {
    return 1;
}

int main(void) {

    if (1) {
        printf("실행 됩니다.");
    }

    if (0) {
        printf("실행 안됩니다.");
    }


    int flag = is_true();
    if (flag) {
        printf("true!!");
    }

    //출력 : true!!

    return 0;
}