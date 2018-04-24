/*
*	author : quisutdeus7
*	BJO : no. 10991
*	status : solved
*/
#include<iostream>
using namespace std;

int n;

int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= n - i; k++)
			cout << " ";
		for (int l = 1; l <= 2*i-1; l++) {
			if (l % 2 == 0)
				cout << " ";
			else
				cout << "*";
		}
			
		cout << "\n";
	}
	

	return 0;
}