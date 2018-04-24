#include<iostream>
using namespace std;

int n_T;		//test case
int a, b;


int main() {
	cin >> n_T;
	int* plus = new int[n_T];

	for (int i = 0; i < n_T; i++) {
		cin >> a >> b;
		plus[i] = a + b;
	}

	for (int i = 0; i < n_T; i++)
		cout << "Case #"<< i+1<< ": "<< plus[i] << "\n";

	delete plus;

	return 0;
}