/*
*	author : mike2ox
*	BJO : 계단오르기
*	descript : https://www.acmicpc.net/problem/2579
*	type : dp
*/

#include<iostream>
using namespace std;
#define MAX(a,b) ((a)>(b) ? (a):(b))

int n;
int dp[2][301] = {};

int main() {

	ios_base::sync_with_stdio(false);
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> dp[0][i];

	for (int i = 1; i <= 3 && i <= n; i++) {
		if (i != 3)  //첫번째, 2번째 계단을 밟을 경우
			dp[1][i] = dp[1][i - 1] + dp[0][i];
		else        //3번째일 경우. 첫번째 밟은것과 2번째 밟은 것 중 큰 것을 저장
			dp[1][i] = MAX(dp[0][i] + dp[1][i - 2], dp[0][i] + dp[0][i - 1]);
	}

	for (int i = 4; i <= n; i++)
		dp[1][i] = MAX(dp[0][i] + dp[1][i - 2], dp[0][i] + dp[0][i - 1] + dp[1][i - 3]);

	cout << dp[1][n] << "\n";

	return 0;
}
