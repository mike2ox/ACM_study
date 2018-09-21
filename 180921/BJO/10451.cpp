/*
*	author : mike2ox
*	BJO : 순열 사이클
*	descript : https://www.acmicpc.net/problem/10451
*	type : graph
*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int t_c;
int graph[1001][1001] = {};
int ck[1001] = {};
int n_graph = 0;
int N;
void dfs(int v) {
	
	ck[v] = 1;
	
	for (int i = 1; i <= N; i++) {
		if (graph[v][i] == 1 && ck[i] != 1) {
			dfs(i);
		}
	}
	
	return;
	
}

int main() {
	ios_base::sync_with_stdio("false");
	cin >> t_c;

	while (t_c--) {
		int value;
		cin >> N;
		for (int i = 1; i <= N; i++) {
			cin >> value;
			graph[i][value] = graph[value][i] = 1;
		}
		n_graph = 0;
		
		for (int i = 1; i <= N; i++) {
			if (ck[i] != 1) {
				dfs(i);
				n_graph++;
			}
		}
		
		for (int i = 1; i <= N; i++) {
			ck[i] = 0;
			for (int j = 1; j <= N; j++)
				graph[i][j] = 0;
		}

		cout << n_graph << '\n';

	}

	return 0;
}
