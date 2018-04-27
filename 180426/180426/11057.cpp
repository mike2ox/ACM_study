/*
*	author : quisutdeus7
*	BJO : no. 11057
*	status :solve
*	type : dynamic program[DP]
*/
#include <iostream>
using namespace std;

int N;
int dp[1001][10] = {};
int sum = 0;

int main() {

	cin >> N;

	for (int i = 0; i < 10; i++)
		dp[1][i] = 1;

	for (int i = 2; i < N + 1; i++) {
		dp[i][0] = dp[i - 1][0];
		for (int j = 1; j < 10; j++)
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 10007;
	}
	for (int i = 0; i < 10; i++)
		sum = (sum + dp[N][i]) % 10007;
	cout << sum;

	return 0;
}