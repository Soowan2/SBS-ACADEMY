#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	
	// ���ó�� ����
	// 2���� �迭 Ÿ��
	//char names2[3][3] = {
	//	{1,2,3},
	//	{4,5,6},
	//	{7,8,9}
	//}; //[��][��] // names2 -> char()[3] -> char������ * 3 �аų� ���. �̵��� 3�� �̵�

	//int ages2[3][3]; // ages2 -> int()[3] -> int ������ * 3 �аų� ���. �̵��� 12�� �̵�

	//printf("%ld\n", (long)names2[0]); // �迭�� �ּ� ����
	//printf("%ld\n", (long)names2[1]);
	//printf("%ld\n", (long)names2[2]);

	//printf("%ld\n", (long)ages2[0]); // �迭�� �ּ� ����
	//printf("%ld\n", (long)ages2[1]);
	//printf("%ld\n", (long)ages2[2]);

	//printf("%d\n", names2[2][0]);

	char names[5][20]; // names -> char()[20] : names 20����Ʈ�� �аų� ���. �̵��� 20��

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ����� �̸� �Է� : ", i + 1);
		//scanf("%s", names + i);
		scanf("%s", names[i]); // names[i] �� &names[i] �� ���̴�? 
		                       // names[i]�� �迭�� �ּ� &names[i] �迭�� �ּ��� �ּ� ������ ���� ������ ���� �ҷ��´�.
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ����� �̸� : %s\n", i + 1, names + i);
	}

}