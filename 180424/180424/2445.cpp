/*
*	author : quisutdeus7
*	BJO : no. 2445
*	status : solved
*/
#include<iostream>
using namespace std;

int n;

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <i+1; j++)
			cout << "*";
		for (int k = 2*(n-i); k >2; k--)
			cout << " ";
		for (int l = 0; l < i + 1; l++)
			cout << "*";
		cout << "\n";
	}
	for (int i = n-1; i > 0; i--) {
		for (int j = 0; j <i; j++)
			cout << "*";
		for (int k = 2 * (n - i); k >0; k--)
			cout << " ";
		for (int l = 0; l < i ; l++)
			cout << "*";
		cout << "\n";
	}

	return 0;
}