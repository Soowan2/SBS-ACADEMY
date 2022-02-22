#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_value(Node* node); // 맨 뒤에 추가
void add_value_by_index(int index, Node* node); // 원하는 위치에 추가

void show_value_by_index(int index); // 특정 인덱스로 찾기

void remove_by_value(int val); // 해당 값의 노드를 삭제
void remove_by_index(int index); // 해당 인덱스의 노드를 삭제

void update_by_value(int val, int new_val); // 해당 값의 노드 값을 new_val로 수정
void update_by_index(int index, int new_val); // 해당 인덱스의 노드의 값을 new_val로 수정

int main(void) {
	printf("Hello World\n");
	return 0;
}