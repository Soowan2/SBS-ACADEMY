#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int));
    int num = 0;
    int no = 0;
    for (int i = 0; i < numbers_len - 1; i = 0)
    {
        for (int k = 1; k < numbers_len; k++)
        {
            if (numbers[i] > numbers[k])
            {
                num = numbers[i];
                numbers[i] = numbers[k];
                numbers[k] = num;
            }
            i++;
        }
    }

    for (int i = 0; i < numbers_len - 1; i++)
    {
        for (int k = 1; k < numbers_len; k++)
        {
            answer[no] = numbers[i] + numbers[k];
            no++;
        }
    }

    for (int i = 0; i < (sizeof(answer) / sizeof(int)) - 1; i++)
    {
        for (int k = 0; k < (sizeof(answer) / sizeof(int)); k++)
        {
            if (answer[i] == answer[k])
            {
                answer[]
            }
        }
    }


    return answer;
}