/*
*	author : mike2ox
*	BJO : 텀 프로젝트
*	descript : https://www.acmicpc.net/problem/9466 
*	type : graph
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int t_c;
int n_node;
int N;
vector<int> stu;
vector<int> visit;
vector<int> first;

int dfs(int start, int cur, int cnt) {
	if (visit[cur]) {
		if (first[cur] != start) {
			return 0;
		}
		return cnt - visit[cur];
	}

	first[cur] = start;
	visit[cur] = cnt;

	return dfs(start, stu[cur], cnt + 1);
}

int main() {
	ios_base::sync_with_stdio("false");
	cin >> t_c;

	while (t_c--) {
		cin >> N;
		stu = vector<int> (N+1,0);
		visit = vector<int>(N + 1,0);
		first = vector<int>(N + 1,0);

		for (int i = 1; i <= N; i++) {
			cin >> stu[i];
		}
		n_node = 0;
		for (int i = 1; i <= N; i++) {
			if(!visit[i])
				n_node += dfs(i, i, 1);
		}

		cout << N - n_node << '\n';
	}


	return 0;
}
