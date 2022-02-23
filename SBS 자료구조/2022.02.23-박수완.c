// 문제 : 링크드 리스트, add_value

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

void print_linked_list(Node* head) {

	Node* target = head->next;

	for (int i = 0;; i++) {

		printf("node[%d] : %d\n", i, target->value);
		target = target->next;

		if (target == NULL) {
			break;
		}
	}
}

void remove_all(Node* head) {

	Node* target = head->next;

	for (int i = 0; ; i++) {

		if (target == NULL) {
			break;
		}

		Node* del_target = target;
		target = target->next;

		free(del_target);
		printf("node[%d] : removed\n", i);

	}

	free(head);
	printf("head : removed\n");
}

void add_value(Node* head, int val) {

	Node* last = head;
	Node* new_node = get_new_node(val);

	for (int i = 0; ; i++) {

		if (last->next == NULL) {
			break;
		}

		last = last->next;
	}

	last->next = new_node;

}

void add_value_by_index(Node* head, int val, int n) {

	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->value = val;
	new_node->next = NULL;

	if (n == 1)
	{
		new_node->next = head;
		head = new_node;
	}

	else
	{
		Node* after_node = head;
		Node* before_node = head;

		for (int i = 0; i < n - 1; i++)
		{
			before_node = after_node;
			if (after_node->next == NULL)
			{
				break;
			}
			after_node = after_node->next;
		}

		before_node->next = new_node;
		new_node->next = after_node;
	}
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

	add_value_by_index(head, 15, 3);
	print_linked_list(head);

	return 0;
}