/*
*	author : quisutdeus7
*	BJO : no. 10779
*	status : solve. but failed...?
*/
#include<iostream>
#include<string>
using namespace std;

char stack[100001];
int node_value;		//정수
int n_top;			//최상단 정수

int result = 0;
int length = 0;
string input;

char command[6];

void push(int num);
void pop();
int size();
char top();


int main() {

	cin >> input;
	length = input.length();

	for (int i = 0; i < length; i++) {
		if (input[i] == '(') {
			push(i);
		}
		else if (input[i] == ')') {
			if (top() + 1 == i) {
				pop();
				result += size();
			}
			else if (top() + 1 != i) {
				pop();
				result += 1;
			}
		}

	}

	cout << result << "\n";
	return 0;
}
void push(int num) {
	n_top++;
	stack[n_top] = num;
	return;
}
void pop() {
	if (n_top > 0)
		n_top--;
}
int size() {
	return n_top;
}
char top() {
	return stack[n_top];
}
