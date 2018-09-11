/*
*	author : mike2ox
*	BJO : 탈출
*	descript : https://www.acmicpc.net/problem/3055
*	type : BFS DFS
*/

#include<iostream>
#include<utility>
#include<queue>
using namespace std;

char map[51][51];
int R, C;
int escape_time = 0;       //탈출 시간
pair<int, int> points[3];

int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };

int move_s[51][51] = { -1, }; //s
int move_a[51][51] = { -1, }; //*

void bfs(int arr[][51], int _x, int _y) {
	escape_time = 1;
	int start_x = _x;
	int start_y = _y;
	arr[_x][_y] = 0; //시작점
	queue<pair<int, int>> q;
	q.push(make_pair(_x, _y));
	int q_size = q.size();

	while (!q.empty()) {
		_x = q.front().first;
		_y = q.front().second;
		
		// 같은 깊이의 위치들 구분
		if (q_size == 0) {
			escape_time++;
			q_size = q.size();
		}

		for (int i = 0; i < 4; i++) {
			int t_dx = _x + dx[i];
			int t_dy = _y + dy[i];

			if (t_dx>0&& t_dx<=C&& t_dy<=R && t_dy>0) {
				if ((map[t_dy][t_dx] == '.' || map[t_dy][t_dx] == 'S')&&(arr[t_dy][t_dx] == 0)&&(start_x!=t_dx&& start_y != t_dy)) {
					arr[t_dy][t_dx] = escape_time;
					q.push(make_pair(t_dx, t_dy));
				}
				else if (map[t_dy][t_dx] == 'X' || map[t_dy][t_dx] == 'D') {
					arr[t_dy][t_dx] = 0;
				}
			}
			
		}
		q.pop();
		q_size--;
	}

}
void bfs_ck(int _x, int _y) {
	escape_time = 0;
	queue<pair<int, int>> q;
	q.push(make_pair(_x, _y));

	while (!q.empty()) {
		escape_time++;
		for (int i = 0; i < 4; i++) {
			int t_dx = _x + dx[i];
			int t_dy = _y + dy[i];

			if (move_a[t_dy][t_dx] > 0) {
				q.push(make_pair(_x, _y));
			}
			if (map[t_dy][t_dx] == 'D') {
				escape_time++;
				cout << escape_time << '\n';
				return;
			}
		}
		q.pop();
	}

}
int main() {
	cin >> R >> C;

	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			cin >> map[i][j];

			if (map[i][j] == '*') {		//물
				points[0].first = j;
				points[0].second = i;
			}
			else if (map[i][j] == 'S') {//고슴도치 위치
				points[1].first = j;
				points[1].second = i;
			}
			else if (map[i][j] == 'D') {//목적지
				points[2].first = j;
				points[2].second = i;
			}
		}
	}

	bfs(move_a, points[0].first, points[0].second);
	bfs(move_s, points[1].first, points[1].second);

	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			move_a[i][j] -= move_s[i][j];
		}
	}

	bfs_ck(points[1].first, points[1].second);

	return 0;
}