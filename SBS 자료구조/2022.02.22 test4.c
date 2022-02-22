// 문제 : 링크드 리스트, add_value

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef int boolean;

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

// 내 버전
//void add_value(Node* node, int num) {
//	while (1)
//	{
//		if (node->value == 0)
//		{
//			break;
//		}
//
//		node = node->next;
//
//		if (node == NULL)
//		{
//			break;
//		}
//	}
//	node = get_new_node(num);
//	
//}

// 선생님 버전

void add_value(Node* head, int val) {

	Node* last = head;

	Node* new_node = get_new_node(val);

	for (int i = 0; ; i++)
	{
		if (last->next == NULL)
		{
			break;
		}
		last = last->next;
	}

	last->next = new_node;
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

void remove_all(Node* node) {
	int num = 0;
	printf("== remove_all ==\n");
	for (int i = 0; ; i++)
	{
		Node* target = node;
		node = node->next;

		if (target == NULL)
		{
			break;
		}

		free(target);

		num++;
	}

int main(void) {
	Node* head = get_new_node(0);

	add_value(head, 10);
	add_value(head, 20);
	add_value(head, 30);
	add_value(head, 40);

	print_linked_list(head);
	// 출력
	// == print_linked_list ==
	// node[0] : 10
	// node[1] : 20
	// node[2] : 30
	// node[3] : 40

	// 메모리 해제
	remove_all(head);

	return 0;
}