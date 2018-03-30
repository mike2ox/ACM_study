/*
*	author : quisutdeus7
*	BJO : no. 1149
*	status : unsolved
*/
#include<iostream>
using namespace std;

int n_T;
int tri[501][501];
int max_val = 0;

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	cin >> n_T;
	

	for (int i = 1; i <= n_T; i++) {
		for (int j = 1; j <= i; j++)
			cin >> tri[i][j];
	}
	for (int i = 1; i <= n_T; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 0)
				tri[i][j + 1] += tri[i-1][j];
			else if(j==i)
				tri[i][j] += tri[i-1][j-1];
			else
				tri[i][j] += max(tri[i-1][j-1], tri[i-1][j]);

			if (max_val < tri[n_T][i])
				max_val = tri[n_T][i];
		}
	}


	cout << max_val;

	return 0;
}