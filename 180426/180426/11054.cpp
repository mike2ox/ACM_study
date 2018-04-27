/*
*	author : quisutdeus7
*	BJO : no. 11054
*	status :unsolve
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
		
	}

	
	cout << result << '\n';

	return 0;
}