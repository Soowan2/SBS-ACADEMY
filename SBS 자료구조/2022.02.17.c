#include<stdio.h>
typedef struct _Car {
	int speed;
	char model[20];

}Car;

void change(Car* c) {
	(*c).speed *= 2; // .연산은 구조체에서만 사용.
	c->speed *= 2; // 구조체 (포인터!!!!)로 멤버접근
}

int main(void) {

	// 원본이나 참조


}