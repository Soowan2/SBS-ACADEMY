#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    int num[] = { 0, };

    for (int k = left; k <= right; k++)
    {
        for (int i = 0; i <= left; i++)
        {
            if (left % i == 0)
            {
                num[i] += 1;
            }
        }
        left++;
    }
    for (int i = left; i <= right; i++)
    {
        if (num[i] / 2 == 0)
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
    }
    return answer;
}

int main(void) {
    solution(13, 17);
}