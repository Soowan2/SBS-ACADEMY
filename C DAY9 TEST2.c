#include <stdio.h>

int a = 220;

void test1() {
    int a = 120;
}


void test2(int a) {
    a = 200;
}


void test3() {
    a = 70;
}

int main(void) {

    int a = 110;

    if (0) {
        a = 20;
    } //���� �ȵ�

    test1(); //�ǹ� ����

    if (1) {
        a = 30;
    } //���� ��

    test2(180); //�ǹ� ����

    if (1) {
        int a = 150;
    } //�ǹ� ����
    
    test3(); //�ǹ� ����

    printf("%d", a);
    //a�� ���� �����ϱ��?? 30
    return 0;
} 