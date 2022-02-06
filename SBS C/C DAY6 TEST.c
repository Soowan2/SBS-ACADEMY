#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	
	// 입력된 두 정수 a, b 중 큰 값을 출력하는 프로그램을 작성해보자.
	// 단, 조건문을 사용하지 않고 3항 연산자 ? 를 사용한다.

	/*int a;
	int b;

	
	scanf("%d %d", &a, &b);

	

	printf("%d",a > b ? a : b);*/

	// 입력된 세 정수 a, b, c 중 가장 작은 값을 출력하는 프로그램을 작성해보자.
	// 단, 조건문을 사용하지 않고 3항 연산자 ? 를 사용한다.

	/*int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d", (a > b ? b : a) > c ? c : (a > b ? b : a));*/

	// 세 정수 a, b, c가 입력되었을 때, 짝수만 출력해보자.

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

	// 세 정수 a, b, c가 입력되었을 때, 짝(even)/홀(odd)을 출력해보자.

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

	// 정수 1개가 입력되었을 때, 음(minus) / 양(plus)과 짝(even) / 홀(odd)을 출력해보자.

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

	//점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.

	/*평가 기준
		점수 범위 : 평가
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

   //평가를 문자(A, B, C, D, ...)로 입력받아 내용을 다르게 출력해보자.
   //
   //평가 내용
   //평가 : 내용
   //A : best!!!
   //B : good!!
   //C : run! 
   //D : slowly~
   //나머지 문자들 : what ?

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