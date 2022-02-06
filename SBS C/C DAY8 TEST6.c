
#include <stdio.h>


// 짝수 판별 함수 - 마지막 문제 풀때 사용됩니다.
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
    //구구단 7단을 출력해주는 함수를 만들어주세요.

    gugu7(); // 출력 : 7단

    //원하는 숫자를 출력해주는 함수를 만들어주세요(매개변수)

    print_num(3); // 출력 : 3


    // 구구단 원하는 단을 출력해주는 함수를 만들어주세요.(매개변수)

    my_gugu(8);
    // 출력 : 8단

    my_gugu(5);
    // 출력 : 5단


    // 구구단을 1단부터 원하는 단까지 출력해주는 함수를 만들어주세요.(매개변수)

    one_to_n_gugu(11); // 출력 1 ~ 11단까지 출력
    one_to_n_gugu(20); // 출력 1 ~ 20단까지 출력

    // 100을 리턴하는 함수를 만들어주세요. 그리고 my_num 변수에 저장해주세요. 그리고 my_num을 출력해주세요.(리턴)

    int my_num = get_hundred();
    printf("%d\n", my_num); // 출력 : 100



    // 3.14를 리턴하는 함수를 만들고 변수 my_pi에 저장해주세요. 그리고 my_pi을 출력해주세요.(리턴)

    float my_pi = get_pi();
    printf("%f\n", my_pi); // 출력 : 3.14



    // 원하는 수를 제곱해서 리턴해주는 함수를 만들어주세요, 그리고 num1 변수에 저장해주세요. num1을 출력해주세요.(매개변수, 리턴)

    int num1 = square(4);
    printf("%d\n", num1); // 출력 : 16

    int num2 = square(10);
    printf("%d\n", num2); // 출력 : 100



    // 원하는 수를 제곱한 후 2로 나눈 값을 리턴해주는 함수를 만들어주세요. 단, 제곱은 이미 만들어진 함수를 이용해야만 합니다. 제곱해주는 코드를 중복해서 사용하지 말아주세요. 변수에 저장해주세요. 그리고 변수를 출력해주세요.(매개변수, 리턴)


    int num3 = my_calc(10);
    printf("%d\n", num3); // 출력 : 50

    int num4 = my_calc(20);
    printf("%d\n", num4); // 출력 : 200



    // 1부터 임의의 수까지 사이에 있는 짝수들의 합을 리턴하는 함수를 만들어주세요. 마찬가지로 짝수 판별 코드를 중복해서 작성하지 말고 이미 만들어진 짝수판별 함수를 이용해주세요. 그리고 변수에 저장해주세요. 변수를 출력해주세요.(매개변수, 리턴)

    // step 1. 1 ~ 10까지 출력
    // step 2. 1 ~ 10까지의 합 출력
    // step 3. 1 ~ 10까지의 짝수의 합 출력

    int num5 = get_sum_of_even(10);

    printf("%d\n", num5); // 출력 :30 

    int num6 = get_sum_of_even(100);

    printf("%d\n", num6); // 출력 :2550

        return 0;
}