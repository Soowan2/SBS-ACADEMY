#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int* solution(int numbers[], size_t numbers_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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