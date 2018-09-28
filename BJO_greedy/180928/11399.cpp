/*
*	author : mike2ox
*	BJO : ATM
*	descript : https://www.acmicpc.net/problem/11399
*	type : greedy
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n;
int t_time = 0;

bool comp(const int &a, const int &b) {
	return a < b;
}

int main() {

	ios_base::sync_with_stdio("false");
	cin >> n;
	vector<int> p(n);

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p.begin(), p.end(), comp);

	for (int i = 0; i < n; i++) {
		t_time += p[i];
		for (int j = 0; j < i; j++) {
			t_time += p[j];
		}
	}
	cout << t_time << '\n';
    system("pause");
	return 0;
}