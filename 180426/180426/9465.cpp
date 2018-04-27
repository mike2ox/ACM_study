/*
*	author : quisutdeus7
*	BJO : no. 9465
*	status :solve(but running time is so much)
*	type : dynamic program[DP]
*/
#include <iostream>
using namespace std;

#define MAX(a,b) (a>b?a:b)
int n_T;
int n;
int dp[2][100001] = {};
int ck[2][100001] = {};

int main() {

	cin >> n_T;

	int * result = new int[n_T];
	
	for (int i = 0; i < n_T; i++)	//init
		result[i] = 0;

	for (int k=0; k < n_T; k++) {
		cin >> n;  //n width
		for (int i = 0; i < 2; i++) {
			for (int j = 1; j < n + 1; j++)
				cin >> dp[i][j];
		}

		ck[0][1] = dp[0][1];
		ck[1][1] = dp[1][1];

		for (int j = 2; j < n + 1; j++) {
			ck[0][j] = dp[0][j] + MAX(MAX(ck[0][j - 2], ck[1][j - 1]), ck[1][j - 2]);
			ck[1][j] = dp[1][j] + MAX(MAX(ck[1][j - 2], ck[0][j - 1]), ck[0][j - 2]);
			result[k] = MAX(MAX(result[k], ck[0][j]), ck[1][j]);
		}
	}

	for (int i = 0; i < n_T; i++)	//result
		cout << result[i] <<'\n';



	return 0;
}