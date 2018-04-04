/*
*	author : quisutdeus7
*	BJO : 2156
*	status : solved
*/
#include <iostream>
using namespace std;

int c_grape[10001];	// 포도주 잔의 cost
int dp[10001];		// dp array
int n_T;			// number of test case

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	cin >> n_T;

	for (int i = 0; i < n_T; i++)
		cin >> c_grape[i+1];
	
	dp[1] = c_grape[1];		//첫잔 최대값
	dp[2] = c_grape[1] + c_grape[2];	//두번째잔 최대값
	
	for (int i = 3; i <= n_T; i++) {
		dp[i] = max(max(dp[i - 1], dp[i - 2]+ c_grape[i]), dp[i-3]+ c_grape[i-1]+ c_grape[i]);
	}

	cout << dp[n_T];

	return 0;
}