#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* answer = (char*)malloc(sizeof(n) / sizeof(int));
    for (int i = 0; i < n; i++)
    {
        answer[i] = '��';

        if (i % 2 != 0)
        {
            answer[i] = '��';
        }
    }
    return answer;
}