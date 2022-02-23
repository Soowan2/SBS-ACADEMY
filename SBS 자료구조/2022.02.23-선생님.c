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

void add_value_by_index(Node* head, int index, int value) {

	Node* new_node = get_new_node(value); // 추가할 노드
	Node* before_node = NULL; // 추가할 노드의 이전 노드

	Node* target = head->next; // 현재 대상 노드
	before_node = head;

	for (int i = 0; i < index; i++) {

		if (target == NULL) {
			break;
		}

		before_node = target;
		target = target->next;
	}

	before_node->next = new_node;
	new_node->next = target;

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

	add_value_by_index(head, 1, 50);

	print_linked_list(head);
	// 출력
	// == print_linked_list ==
	// node[0] : 10
	// node[1] : 50
	// node[2] : 20
	// node[3] : 30
	// node[4] : 40

	// 메모리 해제
	remove_all(head);

	return 0;
}