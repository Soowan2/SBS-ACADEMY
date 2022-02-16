// 문제 : 구조체 변수에 원본이 들어있는지 참조(주소)가 들어있는지 확인해주세요.

#include <stdio.h>

struct Person {
    int age;
    char* name;
};


int main(void) {

    struct Person p1;

    p1.name = "홍길동";
    p1.age = 22;

    struct Person p2 = p1;

    p1.age = 30;
    p1.name = "홍길순";

    printf("%d\n", p2.age);
    printf("%s\n", p2.name);
    
    // p2는 원본일까 참조(주소)일까?
    // 원본이라고합니다.


    return 0;
}