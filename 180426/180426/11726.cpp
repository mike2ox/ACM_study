/*
*	author : quisutdeus7
*	BJO : no. 11726
*	status :solve
*	type : dynamic program[DP]
*/
#include <iostream>
using namespace std;
int dp[1001] = {};
int n;

int main() {
	dp[0] = 1;
	dp[1] = 1;
	cin >> n;

	for (int i = 2; i < n + 1; i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;

	cout << dp[n] % 10007;
	return 0;
}