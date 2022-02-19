#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int solution(int n) {
    int answer = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }

    return answer;
}

int main(void) {
    int n;
    scanf_s("%d", &n);
    solution(n);
    printf("%d\n", solution(n));
}