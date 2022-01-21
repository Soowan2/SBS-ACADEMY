
#include <stdio.h>


// ¦�� �Ǻ� �Լ� - ������ ���� Ǯ�� ���˴ϴ�.
int is_even(n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

void gugu7() {
    for (int num = 1; num <= 9; num++) {
        printf("%d x %d = %d\n", 7, num, 7 * num);
    }
}

void print_num(int a) {
    printf("%d\n", a);
}

void my_gugu(int a) {
    for (int num = 1; num <= 9; num++) {
        printf("%d x %d = %d\n", a, num, a * num);
    }
}

void one_to_n_gugu(int a) {
    for (int num2 = 1; num2 <= a; num2++) {
        for (int num = 1; num <= 9; num++) {
            printf("%d x %d = %d\n", num2, num, num2 * num);
        }
    }
}

int get_hundred() {
    return 100;
}

float get_pi() {
    return 3.14;
}

int square(int a) {
    return a * a;
}

int my_calc(int a) {
    return square(a) / 2;
}

int get_sum_of_even(int a) {

    int num2 = 0;
    for (int num = 1; num <= a; num++) {
        if (is_even(num)) {
            num2 += num;
        }
    }
    return num2;
}

int main() {
    //������ 7���� ������ִ� �Լ��� ������ּ���.

    gugu7(); // ��� : 7��

    //���ϴ� ���ڸ� ������ִ� �Լ��� ������ּ���(�Ű�����)

    print_num(3); // ��� : 3


    // ������ ���ϴ� ���� ������ִ� �Լ��� ������ּ���.(�Ű�����)

    my_gugu(8);
    // ��� : 8��

    my_gugu(5);
    // ��� : 5��


    // �������� 1�ܺ��� ���ϴ� �ܱ��� ������ִ� �Լ��� ������ּ���.(�Ű�����)

    one_to_n_gugu(11); // ��� 1 ~ 11�ܱ��� ���
    one_to_n_gugu(20); // ��� 1 ~ 20�ܱ��� ���

    // 100�� �����ϴ� �Լ��� ������ּ���. �׸��� my_num ������ �������ּ���. �׸��� my_num�� ������ּ���.(����)

    int my_num = get_hundred();
    printf("%d\n", my_num); // ��� : 100



    // 3.14�� �����ϴ� �Լ��� ����� ���� my_pi�� �������ּ���. �׸��� my_pi�� ������ּ���.(����)

    float my_pi = get_pi();
    printf("%f\n", my_pi); // ��� : 3.14



    // ���ϴ� ���� �����ؼ� �������ִ� �Լ��� ������ּ���, �׸��� num1 ������ �������ּ���. num1�� ������ּ���.(�Ű�����, ����)

    int num1 = square(4);
    printf("%d\n", num1); // ��� : 16

    int num2 = square(10);
    printf("%d\n", num2); // ��� : 100



    // ���ϴ� ���� ������ �� 2�� ���� ���� �������ִ� �Լ��� ������ּ���. ��, ������ �̹� ������� �Լ��� �̿��ؾ߸� �մϴ�. �������ִ� �ڵ带 �ߺ��ؼ� ������� �����ּ���. ������ �������ּ���. �׸��� ������ ������ּ���.(�Ű�����, ����)


    int num3 = my_calc(10);
    printf("%d\n", num3); // ��� : 50

    int num4 = my_calc(20);
    printf("%d\n", num4); // ��� : 200



    // 1���� ������ ������ ���̿� �ִ� ¦������ ���� �����ϴ� �Լ��� ������ּ���. ���������� ¦�� �Ǻ� �ڵ带 �ߺ��ؼ� �ۼ����� ���� �̹� ������� ¦���Ǻ� �Լ��� �̿����ּ���. �׸��� ������ �������ּ���. ������ ������ּ���.(�Ű�����, ����)

    // step 1. 1 ~ 10���� ���
    // step 2. 1 ~ 10������ �� ���
    // step 3. 1 ~ 10������ ¦���� �� ���

    int num5 = get_sum_of_even(10);

    printf("%d\n", num5); // ��� :30 

    int num6 = get_sum_of_even(100);

    printf("%d\n", num6); // ��� :2550

        return 0;
}