/*
*	author : quisutdeus7
*	BJO : 9251
*	status : unsolved - runtime err
*/
#include <iostream>
#include <string>
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}
int dp[1001][1001];	// DP
string str[2];		//input string data 

int main() {
	for (int i = 0; i < 2; i++) {
		cin >> str[i];
	}
	int n = str[0].length();
	int m = str[1].length();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (str[i-1] == str[j-1])
				dp[i][j] = dp[i-1][j-1]+1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}

	cout << dp[n][m];

	return 0;
}