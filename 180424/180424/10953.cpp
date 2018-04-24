#include<iostream>
using namespace std;

#define _ASCII 48

char input[3];	//input data
int n_T;		//test case

int main() {
	cin >> n_T;
	int * result = new int[n_T];
	
	for (int i = 0; i < n_T; i++) {
		cin >> input;
		result[i] = (input[0] - _ASCII) + (input[2] - _ASCII);
	}

	for (int i = 0; i < n_T; i++)
		cout << result[i] << "\n";

	return 0;
}