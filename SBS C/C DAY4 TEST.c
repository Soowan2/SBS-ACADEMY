#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	// 1. ���� �ΰ� �޾Ƽ� ����ϱ�

	int a;
	int b;

	printf("���� �ΰ��� �Է��ϼ��� (���ڴ� , �� ����) : ");
	scanf("%d,%d", &a, &b);

	printf("�Է��� ���ڴ� : %d, %d �Դϴ�.\n", a, b);


	  // 2. ���� �ΰ� �޾Ƽ� ���� �� ����ϱ�

	printf("�Է��� �� ���ڸ� ���� ���� : %d\n", a + b);

	  // 3. ���� 3�� �޾Ƽ� ����ϱ�

	int c;
	int d;
	int f;

	printf("���� 3���� �Է��ϼ��� (���ڴ� , �� ����) : ");
	scanf("%d,%d,%d", &c, &d, &f);
	printf("�Է��� ���ڴ� %d, %d, %d �Դϴ�.\n", c, d, f);
	  
	// 4. ���� 3�� �޾Ƽ� ��� ���ϰ� ��� ����ϱ�
	
	printf("�Է��� ������ ���� : %d\n", c * d * f);
	
	// 5. �Ǽ� 1���� �Է¹޾� ����ϱ�

	float g;

	printf("�Ǽ� 1���� �Է��ϼ��� : ");
	scanf("%f", &g);
	printf("%f", g);

	return 0;
}