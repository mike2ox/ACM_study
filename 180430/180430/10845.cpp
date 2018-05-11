/*
*	author : quisutdeus7
*	BJO : no. 10845
*	status : solve but faied in BOJ
*/
#include<iostream>
#include<string>
using namespace std;

int queue[10001];
int n_T;
int n_top = 0;
int n_size = 0;
int input = 0;
int ckp = 1;
string str;

void push(int num);
void pop();
int size();
void empty();
void front();
void back();


int main() {
	cin >> n_T;

	for (int i = 0; i < n_T; i++) {
		cin >> str;

		if (str == "push") {
			cin >> input;
			push(input);
		}
		else if (str == "pop") {
			pop();
		}
		else if (str == "size") {
			cout << size() << "\n";
		}
		else if (str == "empty")
			empty();
		else if (str == "front")
			front();
		else if (str == "back")
			back();

	}


	return 0;
}
void push(int num) {
	n_top++;
	queue[n_top] = num;
	n_size++;
	// cout << num << '\n';
	return;
}
void pop() {
	if (n_top > 0) {
		cout << queue[ckp] << '\n';
		n_size--;
		if (ckp == 10000)
			ckp = 1;
		else
			ckp++;
	}
	else
		cout << "-1\n";
}
int size() {
	 return n_size;
}
void empty() {
	if (n_top<1)
		cout << "1\n";
	else
		cout << "0\n";
}
void front() {
	if (n_top<1)
		cout << "-1\n";
	else
		cout << queue[ckp]<<"\n";
}
void back(){
	if (n_top<1)
		cout << "-1\n";
	else
		cout << queue[n_top] << "\n";
}
