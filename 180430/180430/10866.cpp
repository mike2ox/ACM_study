/*
*	author : quisutdeus7
*	BJO : no. 10866
*	status : solved
*/
#include<iostream>
#include<string.h>
using namespace std;

int stack[100001];
int cnt_node = 0;
int node_value;		//정수
int n_func;			//number of functions
int n_top;			//최상단 정수

char command[6];

void push(int num);
void pop();
void size();
void top();
void empty();

int main() {

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
	n_top++;
	stack[n_top] = num;
	return;
}
void pop() {
	if (n_top > 0) {
		cout << stack[n_top] << '\n';
		n_top--;
	}
	else
		cout << "-1\n";
}
void size() {
	cout << n_top << '\n';
}
void top() {
	if (n_top<1)
		cout << "-1\n";
	else
		cout << stack[n_top] << '\n';
}
void empty() {
	if (n_top<1)
		cout << "1\n";
	else
		cout << "0\n";
}