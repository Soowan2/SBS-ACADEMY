#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void test3() {
	printf("3\n");
}

void test2() {
	test3();
	printf("2\n");
}

void test1() {
	test2();
	printf("1\n");
}

int main(void) {

	// ���ø޸�
	// ���� -> ���� ���߿� ���� �ڷḦ ���� ���� ó���ϴ� ����
	
	test1();

	char a = 20; 
	
	// ��� �����ߴ�? -> ��ġ(������) �˷���
	// & (�ּҿ�����) 

	// �ּ����   
	printf("%p\n", &a);
	printf("%p\n", &a); // 16������ �ּ� ���
	printf("%d\n",(int)&a); // 10������ ����ȯ

	// ���� ��������
	printf("%d\n", a); // �̸����� ��������
	printf("%d\n", *&a); // �����ͷ� ��������(������) => �ּҰ� �տ� * : a�� �����Ϳ� ����Ǿ��ִ� �� ��������

	// �ּҰ� ���� -> �ּ� ���� : �ڷ��� + *
	char* pa = &a;
	
	int b = 10000;
	int* pb = &b;

	printf("%d\n", *pa);
	printf("%d\n", *pb);



	return 0;
}