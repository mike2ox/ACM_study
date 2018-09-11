/*
*	author : mike2ox
*	BJO : 토마토
*	descript : https://www.acmicpc.net/problem/7576
*	type : BFS DFS
*/
#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;

int M, N;
int tomato;
int days = 0;
int _qsize;

vector<int> map[1000];	//인접리스트
queue<pair<int, int>> bfs_q;

int dx[] = {0, 1, 0 ,-1};
int dy[] = {-1, 0, 1, 0};

void bfs(int _x, int _y) {

	while (!bfs_q.empty()) {
        _x = bfs_q.front().first;
        _y = bfs_q.front().second;
		

		for (int k = 0; k < 4; k++) {
			int t_x = _x + dx[k];
			int t_y = _y + dy[k];

			//	경계
			if ((t_x < 0 || t_x >= M) || (t_y < 0 || t_y >= N))
				continue;
			// 안익은 토마토인 경우
			if (map[t_x][t_y] == 0) {
				map[t_x][t_y] = 1;
                bfs_q.push(make_pair(t_x,t_y));
			}
		}
        bfs_q.pop();
		_qsize--;

		// bfs의 동일 깊이의 정점을 다 돌았을 경우
		if (!_qsize&&!bfs_q.empty()) {
			days++;
			_qsize = bfs_q.size();
		}

	}

}

int main() {
	
	cin >> M >> N;	//가로
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> tomato;
			map[j].push_back(tomato);
			if (tomato == 1) {
				bfs_q.push(make_pair(j, i));
			}
		}
	}

	_qsize = bfs_q.size();
	bfs(bfs_q.front().first, bfs_q.front().second);	//가로, 세로

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!map[j][i]){
                cout << -1 << '\n';
                return 0;
            }
		}
	}

	cout << days << '\n';

	//system("pause");      //백준에선 빼줘야함.
	return 0;
}