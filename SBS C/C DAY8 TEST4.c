// �Ʒ��� ��µǰ� ���ּ���.
#include <stdio.h>

int is_true() {
    return 1;
}

int main(void) {

    if (1) {
        printf("���� �˴ϴ�.");
    }

    if (0) {
        printf("���� �ȵ˴ϴ�.");
    }


    int flag = is_true();
    if (flag) {
        printf("true!!");
    }

    //��� : true!!

    return 0;
}