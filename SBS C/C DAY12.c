#include<stdio.h>

int main(void) {


	char a = 10;
	char b = 20;
	char c = 30;

	printf("a�� �ּ� : %d\n", (int)&a);
	printf("b�� �ּ� : %d\n", (int)&b);

	char* pa = &a;
	char* pb = pa + 32;
	char* pc = pb + 32;

	printf("%d\n", pb); 


	printf("%d\n", *pa); 
	printf("%d\n", *pb);
	printf("%d\n", *pc);
	
	// b�� �ּҸ� ���� b�� ������ �� �ִ�.


	


















	return 0;
}