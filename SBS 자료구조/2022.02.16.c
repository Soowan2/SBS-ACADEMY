#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct _Person {
	int age;
	char name[20];
} Person;

// 위에것과 아래것 같은 표현

typedef struct Person Person;

int main(void) {

	Person p1;

	typedef long my_int;
	
	
}