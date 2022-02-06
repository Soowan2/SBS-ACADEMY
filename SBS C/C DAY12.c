#include<stdio.h>

int main(void) {


	char a = 10;
	char b = 20;
	char c = 30;

	printf("a의 주소 : %d\n", (int)&a);
	printf("b의 주소 : %d\n", (int)&b);

	char* pa = &a;
	char* pb = pa + 32;
	char* pc = pb + 32;

	printf("%d\n", pb); 


	printf("%d\n", *pa); 
	printf("%d\n", *pb);
	printf("%d\n", *pc);
	
	// b의 주소를 몰라도 b에 접근할 수 있다.


	


















	return 0;
}