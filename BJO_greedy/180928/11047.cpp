/*
*	author : mike2ox
*	BJO : 동전 0
*	descript : https://www.acmicpc.net/problem/11047
*	type : greedy
*/
#include<iostream>
#include<vector>
using namespace std;

int n, k;
int coin = 0;

int main() {

	ios_base::sync_with_stdio("false");

	cin >> n >> k;
	vector<int> a(n);
	
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = n - 1; i >= 0; i--) {
		coin += k / a[i];
		k = k % a[i];
	}

	cout << coin << '\n';
	system("pause");

	return 0;
}