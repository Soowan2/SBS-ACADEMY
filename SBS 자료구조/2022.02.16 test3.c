// ���� : ����ü ������ ������ ����ִ��� ����(�ּ�)�� ����ִ��� Ȯ�����ּ���.

#include <stdio.h>

struct Person {
    int age;
    char* name;
};


int main(void) {

    struct Person p1;

    p1.name = "ȫ�浿";
    p1.age = 22;

    struct Person p2 = p1;

    p1.age = 30;
    p1.name = "ȫ���";

    printf("%d\n", p2.age);
    printf("%s\n", p2.name);
    
    // p2�� �����ϱ� ����(�ּ�)�ϱ�?
    // �����̶���մϴ�.


    return 0;
}