// ���� : ��ũ�� ����Ʈ, get_new_node

#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
	int value;
	struct _Node* next;
} Node;

Node* get_new_node(int val) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->value = val;
	new_node->next = NULL;

	return new_node;
}


int main(void) {
	Node* head = get_new_node(0);

	printf("head�� �� : %d\n", head->value);
	// ��� => head�� �� : 0

	// �޸� ����

	return 0;
}