#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float area(int r) {

	float result = r * r * 3.14;

	return result; // �Լ��� ������ ������ش�.

}


int main(void) {

	//������ 3 �� ���� ����

	area(3);

	printf("%f\n", area(3) / 2);
}