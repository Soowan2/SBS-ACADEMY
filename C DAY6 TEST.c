#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	
	// �Էµ� �� ���� a, b �� ū ���� ����ϴ� ���α׷��� �ۼ��غ���.
	// ��, ���ǹ��� ������� �ʰ� 3�� ������ ? �� ����Ѵ�.

	/*int a;
	int b;

	
	scanf("%d %d", &a, &b);

	

	printf("%d",a > b ? a : b);*/

	// �Էµ� �� ���� a, b, c �� ���� ���� ���� ����ϴ� ���α׷��� �ۼ��غ���.
	// ��, ���ǹ��� ������� �ʰ� 3�� ������ ? �� ����Ѵ�.

	/*int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d", (a > b ? b : a) > c ? c : (a > b ? b : a));*/

	// �� ���� a, b, c�� �ԷµǾ��� ��, ¦���� ����غ���.

	/*int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a % 2 == 0) {
		printf("%d\n", a);
	}

	if (b % 2 == 0) {
		printf("%d\n", b);
	}

	if (c % 2 == 0) {
		printf("%d\n", c);
	}*/

	// �� ���� a, b, c�� �ԷµǾ��� ��, ¦(even)/Ȧ(odd)�� ����غ���.

	/*int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a % 2 == 0) {
		printf("even\n");
	}
	else {
		printf("odd\n");
	}

	if (b % 2 == 0) {
		printf("even\n");
	}
	else {
		printf("odd\n");
	}

	if (c % 2 == 0) {
		printf("even\n");
	}
	else {
		printf("odd\n");
	}*/

	// ���� 1���� �ԷµǾ��� ��, ��(minus) / ��(plus)�� ¦(even) / Ȧ(odd)�� ����غ���.

	/*int a;
	scanf("%d", &a);

	if (a < 0) {
		printf("minus\n");
	}
	else {
		printf("plus\n");
	}

	if (a % 2 == 0) {
		printf("even\n");
	}
	else {
		printf("odd\n");
	}*/

	//����(����, 0 ~ 100)�� �Է¹޾� �򰡸� ����غ���.

	/*�� ����
		���� ���� : ��
		90 ~100 : A
		70 ~89 : B
		40 ~69 : C
		0 ~39 : D*/
	/*int score;
	scanf("%d", &score);

	if (score >= 90) {
		printf("A\n");
	}
	else if (score >= 70) {
		printf("B\n");
	}
	else if (score >= 40) {
		printf("C\n");
	}
	else if (score >= 0) {
		printf("D\n");
	}*/

   //�򰡸� ����(A, B, C, D, ...)�� �Է¹޾� ������ �ٸ��� ����غ���.
   //
   //�� ����
   //�� : ����
   //A : best!!!
   //B : good!!
   //C : run! 
   //D : slowly~
   //������ ���ڵ� : what ?

char a;

scanf("%c", &a);

if (a == 'A') {
	printf("best!!!");
}
else if (a == 'B') {
	printf("good!!");
}
else if (a == 'C') {
	printf("run!");
}
else if (a == 'D') {
	printf("slowly~");
}
else {
	printf("what ?");
}




}