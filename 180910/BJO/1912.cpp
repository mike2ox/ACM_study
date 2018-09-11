/*
*	author : mike2ox
*	BJO : 연속합
*	descript : https://www.acmicpc.net/problem/1912
*	type : dp
*/

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int dp[100000] = {};
int max_val[100000] = {};
int n;
int val;
int output;

int main() {

	ios_base::sync_with_stdio(false);
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> dp[i];

	for (int i = 0; i < n; i++) {
		if (max_val[i - 1] + dp[i] > dp[i])
			max_val[i] = max_val[i - 1] + dp[i];
		else
			max_val[i] = dp[i];
	}

	output = max_val[0];
	for (int i = 1; i < n; i++)
		if (output < max_val[i])
			output = max_val[i];

	cout << output << '\n';

	
	return 0;
}