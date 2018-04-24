/*
*	author : quisutdeus7
*	BJO : no. 2522
*	status : solved
*/
#include<iostream>
using namespace std;

int n;

int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n-i; k++)
			cout << " ";
		for (int l = 1; l <= i; l++)
			cout << "*";
		cout << "\n";
	}
	for (int i = 1; i < n; i++) {
		for (int k = 1; k <= i; k++)
			cout << " ";
		for (int l = 1; l <= n-i; l++)
			cout << "*";
		cout << "\n";
	}

	return 0;
}