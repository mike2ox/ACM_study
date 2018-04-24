/*
*	author : quisutdeus7
*	BJO : no. 10992
*	status : unsolved
*/
#include<iostream>
using namespace std;

int n;

int main() {

	cin >> n;
	if (n == 1)
		cout << "*";

	for (int i = 1; i < n; i++) {
		for (int k = 1; k <= n - i; k++)
			cout << " ";
		for (int l = 1; l <= 2 * i - 1; l++) {
			if (l == 1 || l == 2 * i - 1) {
				cout << "*";
				continue;
			}
		
			else {
				cout << " ";
				continue;
			}
				
		}
		cout << "\n";

		if (i + 1 == n) {
			for (int i = 1; i < 2 * n - 1; i++)
				cout << "*";
		}
	}


	return 0;
}