// scanf�� �̿��� �ܾ� �ϳ��� word�� �������ּ���.
// �׸��� word�� love�̸� I love you. �� ����ϼ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char word[200];
	// word : ���� �ּҰ�.

	scanf("%s", word);
	printf("%s\n", word);
	printf("%c\n", *word);
	printf("%c\n", *(word + 3)); // word �� 4��° ����

	int flag = 0;

	for (int i = 0; i < 5; i++)
	{
		if (word[i] != "love"[i])
		{
			flag = 1;
		}
	}

	if (flag == 0)
	{
		printf("I love you.");
	}

	return 0;
}
