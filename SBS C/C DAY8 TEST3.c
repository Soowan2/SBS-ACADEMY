#include <stdio.h>

int func1() {
	
	return 10;

}

int func2(int a) {
	int result = a;

	return result;
}

int func3(int a) {
	int result = a * a;

	return result;
}

int func4(int a, int b) {
	int result = a + b;

	return result;
}

int main(void) {

	int a = func1();
	printf("%d\n", a);
	// ��� : 10

	int b = func1();
	printf("%d\n", b);
	// ��� : 10

	int c = func2(22);
	printf("%d\n", c);
	// ��� : 22

	int d = func2(55);
	printf("%d\n", d);
	// ��� : 55

	int e = func3(10);
	printf("%d\n", e);
	// ��� : 100
	int f = func3(5);
	printf("%d\n", f);
	// ��� : 25

	int g = func4(10, 30);
	printf("%d\n", g);
	// ��� : 40

	int h = func4(20, 50);
	printf("%d\n", h);
	// ��� : 70

	return 0;
}