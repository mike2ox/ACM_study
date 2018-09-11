/*
*	author : mike2ox
*	BJO : 암호코드
*	descript : https://www.acmicpc.net/problem/2011
*	type : dp
*/

#include<iostream>
#include<string>
#define divide 1000000
using namespace std;

char crypt[5001];
string crypt2;
int dp[5010] = {};
int main() {

	cin >> crypt;

	crypt2 = crypt;
	dp[0] = 1;
	dp[1] = 1;

	int cryptsize = crypt2.size();

	for (int i = 2; i <= cryptsize; i++) {
		if (crypt[i - 1] > '0') {
			dp[i] = dp[i - 1] % divide;
		}

		int a = (crypt[i - 1 - 1] - '0') * 10 + crypt[i - 1] - '0';

		if (10 <= a && a <= 26)
			dp[i] = (dp[i] + dp[i - 2]) % divide;
	}

	cout << dp[cryptsize] << '\n';

	return 0;
}