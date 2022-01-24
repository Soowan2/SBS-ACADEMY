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
    } //실행 안됨

    test1(); //의미 없음

    if (1) {
        a = 30;
    } //실행 됨

    test2(180); //의미 없음

    if (1) {
        int a = 150;
    } //의미 없음
    
    test3(); //의미 없음

    printf("%d", a);
    //a의 값은 무엇일까요?? 30
    return 0;
} 