#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// �Լ� => �ڵ带 �����ϴ� �� : void ���� () {}
void gugu(int dan) {
	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}
}

int main(void) {
	// �����Ͱ� �������� -> ������ ����ȭ
	// �ڵ尡 �������� -> ����ȭ (�ڵ�����)


	//�������� �ڵ尡 �Ѿ�� �Լ� ���̴� �Ұ����ϴ�.

	for (int dan = 2; dan <= 9; dan++) {
		gugu(dan); // �Լ� ��� -> ȣ��
	}


	return 0;
}