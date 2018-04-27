/*
*	author : quisutdeus7
*	BJO : no. 11055
*	status :solve
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
		dp[i] = a_i[i];
	}
		
	int max = 0;
	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < i; j++) {
			if (a_i[i]> a_i[j])
				dp[i] = MAX(dp[j]+a_i[i], dp[i]);
		}
		result = MAX(dp[i], result);
	}
	
	cout << result << '\n';

	return 0;
}