#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

  // �پ��� ����(���� ��Ģ���� ����)�� ������ּ���.

  // 1. 1 ~ 100���� ���
	
	for (int count = 1; count < 101; count++)
	{
		printf("%d\n", count);
	}

  // 2. -25 ~ 50���� ���
	
	for (int count = -25; count != 51; count++)
	{
		printf("%d\n", count);
	}

  // 3. 1 ~ 100 ���� ¦���� ���

	for (int count = 2; count < 101; count += 2)
	{
		printf("%d\n", count);
	}

  // 4. 100 ~ 200 ������ Ȧ���� ���

	for (int count = 101; count < 201; count+=2)
	{
		printf("%d\n", count);
	}

  // 5. 1 ~ 500 ������ �� �� 4�� ����� ���

	for (int count = 4; count < 501; count += 4)
	{
		printf("%d\n", count);
	}

  // 6. 1 ~ 1000 ������ �� �� 1000�� ����� ��� -> 1000 % a == 0
  // ��� -> 1000�� a�� �������� �� ������ �������� a�� 1000�� ������ �Ѵ�.
  // ����� 1 ~ �ڱ��ڽŸ� ��� ���� �Ѵ�.
  // ������ �������ٴ� ���� �������� �� �������� 0�̶�� ���� �ǹ��Ѵ�.

	for (int count = 1; count < 1001; count++)
	{
		if (1000 % count == 0) {
			printf("%d\n", count);
		}
		continue;
	}

  // 7. 1 ~ 1000 ������ �� �� 3�� ��� �̸鼭 5�� ����� ���� ���

	for (int count = 1; count < 1001; count++)
	{
		if (count % 15 == 0) {
			printf("%d\n", count);
		}
		continue;
	}

 }