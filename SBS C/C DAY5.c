#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {

	// �ΰ��� ���� �Է¹޾Ƽ� �����ִ� ���α׷�

	int num1;
	int num2;

	// �ݺ��� : Ư�� �ڵ带 �ݺ��Ѵ�.

	//�ݺ��� ���� 
	// break : �ݺ����� �� ��� �����Ѵ�.
	//continue : �� ��� ���� ȸ���� �Ѿ��.
    while(1)
	{
		

		printf("�ΰ��� ���ڸ� �������� �����Ͽ� �Է����ּ���(���Ḧ ���Ͻø� 0�� 2�� �Է����ּ���) : ");
		scanf("%d %d", &num1, &num2);

		if (num1 == 0) {
			if (num2 == 0) {
				break;
			}
		}

		printf("%d + %d = %d\n", num1, num2, num1 + num2);

	}

	int count = 0;

	while (1) 
	{
		if (count == 10) {
			break;
		}

		printf("aa\n");

		count += 1; // ���մ��Կ����� : count�� 1�� �����ش�. count = count + 1; �� ���� ǥ���̴�.
		// count++; // 1�� ����. 
	}

	int count2 = 0;

	while (count2 < 10)
	{
		printf("bb\n");

		count2++;

	}

	// for (���� ; ���� ; ����) { }
	// for (���� ; �� ; ������) { }
	//Ư�� Ƚ�� �ݺ��� ������ for���� ��� 
	for (int count = 0; count < 10; count++)
	{
		
		printf("%d\n",count);

	}


	// 1. �ݺ��� : while, for
	// while : ������ ���� ���
	// for : ������ �ִ� ���, ������ �ٷ�� ���

	// �ݺ����� �����ϴ� �� : �ݺ�Ƚ���� ���� �ݺ� ������ ������Ű�ų� , break �� ����Ͽ� ���� �� ����������.

	




	return 0;
}
