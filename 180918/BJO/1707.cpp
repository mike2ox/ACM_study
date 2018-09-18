/*
*	author : mike2ox
*	BJO : k번째 수
*	descript : https://www.acmicpc.net/problem/11004
*	type : sort
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int t_c, v, e;
int visit[20001];
bool bfs(vector<vector<int>> vec, int n) {
	queue<int> que;
	int a, b;
	int q=0;

	while (1) {
		bool flag = false;
		for (int i = 1; i <= n; i++) {
			if (visit[i] == -1) {
				flag = true;
				que.push(i);
				visit[i] = 0;
				break;
			}
		}
		if (!flag)
			break;
		while (!que.empty()) {
			a = que.front();
			q++;
			que.pop();
			for (int i = 0; i < vec[a].size(); i++) {
				b = vec[a][i];
				if (visit[b] == -1) {
					visit[b] = (visit[a] + 1) % 2;
					que.push(b);
				}
				else
					if (a != b && visit[b] == visit[a])
						return false;
			}
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio("false");
	cin >> t_c;

	while(t_c--) {
		cin >> v >> e;

		vector<vector<int>> vec(v+3);

		for (int i = 1; i <= v + 1; i++)
			visit[i] = -1;

		for (int i = 0; i < e; i++) {
			int a, b;
			cin >> a >> b;

			vec[a].push_back(b);
			vec[b].push_back(a);
		}

		if (bfs(vec, v))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}
