#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add_value(Node* node); // �� �ڿ� �߰�
void add_value_by_index(int index, Node* node); // ���ϴ� ��ġ�� �߰�

void show_value_by_index(int index); // Ư�� �ε����� ã��

void remove_by_value(int val); // �ش� ���� ��带 ����
void remove_by_index(int index); // �ش� �ε����� ��带 ����

void update_by_value(int val, int new_val); // �ش� ���� ��� ���� new_val�� ����
void update_by_index(int index, int new_val); // �ش� �ε����� ����� ���� new_val�� ����

int main(void) {
	printf("Hello World\n");
	return 0;
}