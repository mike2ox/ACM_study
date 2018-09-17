/*
*	author : mike2ox
*	BJO : 좌표 정렬하기
*	descript : https://www.acmicpc.net/problem/11650
*	type : sort
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int, int>> xy;

int N;
int x, y;

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

bool compare(pair<int, int>& a, pair<int, int>& b) {
	if (b.first > a.first)
		return true;
	else if (b.first == a.first) {
		if (b.second > a.second)
			return true;
		else
			return false;
	}
	else
		return false;
}


int main() {
	ios_base::sync_with_stdio("false");
	cin >> N;

	while (N--) {
		cin >> x >> y;
		xy.push_back(make_pair(x, y));
	}
	sort(xy.begin(), xy.end(), compare);

	for (vector<pair<int, int>>::iterator itr = xy.begin(); itr != xy.end(); itr++)
		cout << (*itr).first << " " << (*itr).second << '\n';

	system("pause");
	return 0;
}
