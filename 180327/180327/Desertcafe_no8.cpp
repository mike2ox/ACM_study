/*
*	author : quisutdeus7
*	swexpert : desert cafe no8
*	status : solved
*/
#include<iostream>
using namespace std;

#define MAX 7

int n_T;		//number of testcase
int len_t;		//length test
int N[11][MAX + 1][MAX + 1] = {};

void rotate(int t);
int main() {
	int end = 0;
	cin >> n_T;
	do{
		//save lenght test
		cin >> len_t;
		N[end+1][0][0] = len_t;

		for (int i = 0; i < len_t; i++)
			for(int j=0;j<len_t;j++)
				cin >> N[end+1][i+1][j+1];
		end++;
	} while (end<n_T);
	

	for (int j = 0; j < n_T; j++) {
		cout << '#' << j + 1 << '\n';
		rotate(j+1);
	}

	return 0;
}
void rotate(int t) {
	int r, c;
	int size = N[t][0][0];

	for (r = 0; r < size; r++) {
		for (c = 0; c < size; c++)
			cout << N[t][size - c][r + 1];
		cout << ' ';

		for (c = 0; c < size; c++)
			cout << N[t][size - r][size - c];
		cout << ' ';

		for (c = 0; c < size; c++)
			cout << N[t][c + 1][size - r];
		cout << '\n';
	}
		
}