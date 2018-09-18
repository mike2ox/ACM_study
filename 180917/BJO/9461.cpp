/*
*	author : mike2ox
*	BJO : 파도반 수열
*	descript : https://www.acmicpc.net/problem/9461
*	type : dp
*/
#include<iostream>
#include<vector>
using namespace std;

int t_c;
int N;

long long dp[101] = { 0,1,1,1,2,2, };

int main() {
	cin >> t_c;

	for (int i = 6; i <= 100; i++)
		dp[i] = dp[i - 1] + dp[i - 5];

	vector<long long> result;

	while (t_c--) {

		cin >> N;
		result.push_back(dp[N]);
	}

	for (vector<long long>::iterator itr = result.begin(); itr != result.end(); itr++)
		cout << *itr << '\n';

	return 0;

}