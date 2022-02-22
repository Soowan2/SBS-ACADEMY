// 문제 : 링크드 리스트, print_linked_list

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

void print_linked_list(Node* node) {
	for (int i = 0; ; i++)
	{
		if (node == NULL)
		{
			break;
		}
		printf("node[%d] : %d\n", i, node->value);
		node = node->next;
	}
}

int main(void) {
	Node* head = get_new_node(0);
	Node* first_node = get_new_node(10);
	Node* second_node = get_new_node(20);
	Node* third_node = get_new_node(30);


	head->next = first_node;
	first_node->next = second_node;
	second_node->next = third_node;

	print_linked_list(first_node);
	// 출력
	// node[0] : 10
	// node[1] : 20
	// node[2] : 30



	return 0;
}