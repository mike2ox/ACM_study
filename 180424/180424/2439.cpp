/*
*	author : quisutdeus7
*	BJO : no. 2439
*	status : solved
*/
#include<iostream>
using namespace std;

int n;

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n -i- 1; j > 0; j--)
			cout << " ";
		for (int k= 0; k < i + 1; k++)
			cout << "*";
		cout << "\n";
	}


	return 0;
}