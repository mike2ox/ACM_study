/*
*	author : quisutdeus7
*	BJO : no. 2193
*	status :solve
*	type : dynamic program[DP]
*/
#include <iostream>
using namespace std;

int N;
long int dp[91][2] = {};

int main() {

	dp[1][0] = 1;
	dp[1][1] = 1;

	cin >> N;

	for (int i = 2; i < N + 1; i++) {
		dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
		dp[i][1] = dp[i - 1][0];
	}
	cout << dp[N][1];

	return 0;
}