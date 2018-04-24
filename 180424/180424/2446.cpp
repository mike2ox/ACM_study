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
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <=i-1; k++)
			cout << " ";
		for (int l = 1; l <= 2*(n-i+1)-1; l++)
			cout << "*";
		cout << "\n";
	}
	for (int i = 2; i <= n; i++) {
		for (int k = 1; k <=n-i; k++)
			cout << " ";
		for (int l = 1; l <= 2*i-1; l++)
			cout << "*";
		cout << "\n";
	}

	return 0;
}