#include<stdio.h>
typedef struct _Car {
	int speed;
	char model[20];

}Car;

void change(Car* c) {
	(*c).speed *= 2; // .������ ����ü������ ���.
	c->speed *= 2; // ����ü (������!!!!)�� �������
}

int main(void) {

	// �����̳� ����


}