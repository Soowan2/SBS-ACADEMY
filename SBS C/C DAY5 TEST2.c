#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// 1. 1 ~ 10������ ���� �����ּ���. (�� : 55)

	int num = 0;

	for (int count = 1; count < 11; count++)
	{
			num += count;
			if (count == 10) {
				printf("%d\n", num);
			}
	}

	// 2. 10�� ����� ������ �����ּ���. (�� : 4)

	int num2 = 0;

	for (int count = 1; count < 11; count++)
	{
		if (10 % count == 0) {
			num2++;
		}
		if (count == 10) {
			printf("%d\n", num2);
		}
	}

	// 3. 10�� ����� ���� �����ּ���. (�� : 18)

	int num3 = 0;

	for (int count = 1; count < 11; count++)
	{
		if (10 % count == 0) {
			num3 += count;
		}
		if (count == 10) {
			printf("%d\n", num3);
		}
	}

	// 4. 7�� �Ҽ����� �Ǻ��ϰ� �Ҽ���� '�Ҽ�'�� ���, �ƴ϶�� '��Ҽ�'�� ������ּ���. (�� : �Ҽ�)
	// �Ҽ��� 1�� �ڱ� �ڽŸ��� ����� ���� ���� ���մϴ�.

	int num4;
	scanf("%d", &num4);

	for (int count = 2; count != num4; count++) {

		if (num4 % count == 0) {
			printf("��Ҽ�");
			break;
		}

		if (num4 == count + 1) {
			printf("�Ҽ�");
		}
	}




	return 0;
}