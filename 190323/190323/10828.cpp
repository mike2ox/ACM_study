/*
*	author : quisutdeus7
*	BJO : no. 1929
*	status : unsolved
*/
#include<iostream>
#include<string.h>
using namespace std;

typedef struct node{
		int data; // 데이터
		struct node* next; // 다음 노드를 가리키는 포인터
};

node* head, *tail;

int cnt_node = 0;
int node_value;
int n_func;
char command[6];

void push(int num);
void pop();
void size();
void top();
void empty();

int main() {
	head = new node;
	tail = new node;
	head->next = tail;
	tail->next = tail;
	cin >> n_func;

	for (int a = 0; a < n_func; a++) {
		cin >> command;

		if (strcmp(command, "push") == 0) {
			cin >> node_value;
			push(node_value);
		}
		else if (strcmp(command, "pop") == 0) {
			pop();
		}
		else if (strcmp(command, "size") == 0) {
			size();
		}
		else if (strcmp(command, "empty") == 0) {
			empty();
		}
		else if (strcmp(command, "top") == 0) {
			top();
		}
	}

	return 0;
}
void push(int num) {
	node* idx_node = new node;
	idx_node->data = num;
	idx_node->next = head->next;
	head->next = idx_node;
	cnt_node++;

	delete idx_node;
}
void pop() {
	int pop_num;
	if (cnt_node > 0) {
		node* idx_node = head->next;
		pop_num = idx_node->data;
		head->next = idx_node->next;
		delete idx_node;

		cnt_node--;
		cout << pop_num << '\n';
	}
	else
		cout << "-1\n";
}
void size() {
	cout << cnt_node << '\n';
}
void top() {
	if (cnt_node == 0)
		cout << "-1\n"; 
	else
		cout << (head->next)->data << '\n';
}
void empty() {
	if (cnt_node == 0)
		cout << "1\n";
	else
		cout << "0\n";
}