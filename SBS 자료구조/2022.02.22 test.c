// 문제 : 링크드 리스트, get_new_node

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

	printf("head의 값 : %d\n", head->value);
	// 출력 => head의 값 : 0

	// 메모리 해제

	return 0;
}