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

vector<int> dp[100000];
int max_val[2][100000];
int n;
int val;

int main() {

	ios_base::sync_with_stdio(false);
	cin >> n;

	// 인접리스트 구현
	for (int i = 0; i < n; i++) {
		cin >> val;
		dp[i].push_back(val);

		for (int j = 0; j < i; j++)
			dp[j].push_back(val);
	}


	for (int i = 0; i < n; i++) {
		max_val[0][i] = dp[i].front();

		for (vector<int>::iterator itr = dp[i].begin(); itr != dp[i].end(); itr++) {
			max_val[1][i] += *itr;
			if (max_val[0][i] < max_val[1][i])
				max_val[0][i] = max_val[1][i];
		}
	}
	int output = -1000;
	for (int i = 0; i < n; i++) {
		if (max_val[0][i] > output)
			output = max_val[0][i];
	}
	cout << output << '\n';

	
	return 0;
}