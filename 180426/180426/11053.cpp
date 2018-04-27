/*
*	author : quisutdeus7
*	BJO : no. 11053
*	status :solve(but running time is so much)
*	type : dynamic program[DP]
*/
#include <iostream>
using namespace std;

#define MAX(a,b) (a>b?a:b)

int N;
int dp[1001] = {};
int a_i[1001] = {};
int result = 0;

int main() {
	
	cin >> N;

	for (int i = 1; i < N + 1; i++) {
		cin >> a_i[i];
		int max = 0;
		for (int j = 1; j < i; j++) {
			if (a_i[i]> a_i[j])
				max = MAX(max, dp[j]);
		}

		dp[i] = max + 1;
		result = MAX(result, dp[i]);
	}
	
	cout << result;

	return 0;
}