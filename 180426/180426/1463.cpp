/*
*	author : quisutdeus7
*	BJO : no. 1463, 1로 만들기
*	status : solve
*	type : dynamic program[DP]
*/
#include <iostream>
using namespace std;

#define MIN(a,b) (a < b ? a : b)
int N;
int dp[1000001] = {0,0,};

int main() {
	cin >> N;
	
	for (int i = 2; i < N + 1; i++) {
		dp[i] = dp[i - 1] + 1;	// 3rd rule

		if (i % 2 == 0)	//2nd
			dp[i] = MIN(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0)
			dp[i] = MIN(dp[i], dp[i / 3] + 1);
	}

	cout << dp[N];

	return 0;
}