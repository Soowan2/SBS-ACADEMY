#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	/*
� ���� ���̰� 170cm �Դϴ�..

�� ���� 3���� �ͳ��� ���ʴ�� ������ �� ���Դϴ�.

�ͳ��� ���̰� ���� ���̺��� ���ų� ���ٸ� ���� �ͳΰ� �浹�Ͽ� ��� ���ϴ�.

�ͳ��� ���̸� ���ʴ�� 3�� �Է��ϰ� �ͳ��� ������ �� ����ϸ� PASS �� ����ϰ�, ��� ���ٸ� CRASH �� ����ϼ���.

ù��° �ͳ� ���� �Է� : 172
�ι�° �ͳ� ���� �Է� : 179
����° �ͳ� ���� �Է� : 182

��� : PASS

ù��° �ͳ� ���� �Է� : 172
�ι�° �ͳ� ���� �Է� : 169
����° �ͳ� ���� �Է� : 182

��� : CRASH

*/
	int car = 170;
	int height1;
	int height2;
	int height3;

	printf("ù��° �ͳ� ���� �Է� : ");
	scanf("%d", &height1);
	
	printf("�ι�° �ͳ� ���� �Է� : ");
	scanf("%d", &height2);
	
	printf("����° �ͳ� ���� �Է� : ");
	scanf("%d", &height3);

	if(car < height1 && car < height2 && car < height3)
	{ 
		printf("PASS");
	}

	else
	{
		printf("CRASH");
	}



}