/*
*	author : mike2ox
*	BJO : no. 11724, 연결 요소의 개수
*	descript : https://www.acmicpc.net/problem/11724
*	type : search[DFS,BFS]
*/
#include <iostream> 
#include<algorithm>
using namespace std;

int n, m;
int r, c;
int flag[1001] = {0,};
int cnt = 0;
int tree[1001][1001] = {0,};

void dfs(int N) {

	flag[N] = 1;

	for (int i = 1; i <= n; i++) 
		if (tree[N][i] == 1 && flag[i] == 0)
			dfs(i);
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> r >> c;
		tree[r][c] = 1;
		tree[c][r] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (flag[i] == 0) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt << '\n';

	return 0;
}