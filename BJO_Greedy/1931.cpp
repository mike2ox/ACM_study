/*
*	author : mike2ox
*	BJO : 회의실배정
*	descript : https://www.acmicpc.net/problem/1931
*	type : greedy
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int n;
int start_time, end_time;	//회의실 시작과 끝 시간
int cnt = 0;
int table_time = 0;

bool comp(const pair<int, int> &s, const pair<int, int> &e) {
	if (s.second == e.second)
		return s.first < e.first;
	else
		return s.second < e.second;
}

int main() {

	ios_base::sync_with_stdio("false");
	cin >> n;

	vector<pair<int, int>> meeting(n);

	for (int i = 0; i < n; i++) {
		cin >> start_time >> end_time;
		meeting[i].first = start_time;
		meeting[i].second = end_time;
		//meeting.push_back(make_pair(start_time, end_time));
	}

	sort(meeting.begin(), meeting.end(), comp);

	for (int i = 0; i < n; i++) {
		if (table_time <= meeting[i].first) {
			table_time = meeting[i].second;
			cnt++;
		}
	}
	cout << cnt << '\n';
	system("pause");

	return 0;
}