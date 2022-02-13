#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int num[] = { 0, };
    int answer = 0;
    num[0] = n;
    for (int i = 0; i < 100; i++)
    {
        if (num[i - 1] < 3)
        {
            break;
        }
        num[i] = num[i-1] % 3;
    }
    
    for (int i = 0;i<sizeof(num)/4;i++)
    {
        answer += num[i] * (3 ^ i);
    }

    return answer;
}

int main(void) {
    int num;
    scanf("%d",&num);

  
    printf("%d", solution(num));
}