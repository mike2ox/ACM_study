/*
*	author : mike2ox
*	BJO : 합분해
*	descript : https://www.acmicpc.net/problem/2225
*	type : dp
*/
#include<iostream>
using namespace std;

#define mod 1000000000

long long dp[201][201] = {0};//k개를 더해서 합이 N이 되는 경우의 수
int n, k;

int main() {
	cin >> n >> k;

	for (int i = 0; i <= n; i++)
		dp[1][i] = 1;      //1개를 써서 N이 되는 경우 = N자기 자신 1번


	for (int i = 1; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			for (int l = 0; l <= j; l++)
				dp[i][j] += dp[i - 1][j - l] % mod;
		}
	}

	cout << dp[k][n] % mod << '\n';

	return 0;

}