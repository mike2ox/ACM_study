/*
*	author : mike2ox
*	BJO : 다리만들기
*	descript : https://www.acmicpc.net/problem/2146
*	type : BFS DFS
*/
#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;

int N;
int is_island;

vector<int> map[100];	//인접리스트
queue<pair<int, int>> bfs_q;

int dx[] = {0,1,0,-1};
int dy[] = {-1,0,1,0};

void bfs(){

    while(!bfs_q.empty()){
        int _x = bfs_q.front().first;
        int _y = bfs_q.front().second;

        for(int k=0;k<4;k++){
            int t_x = _x + dx[k];
		    int t_y = _y + dy[k];

            if((t_x < 0 || t_x >= N) || (t_y < 0 || t_y >= N))
                continue;

            // 바다인경우
            if(map[t_x][t_y]==0){
                map[t_x][t_y] = 1;
                bfs_q.push(make_pair(t_x,t_y));
            }
            if(){
                
            }
        }


    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin >> N;
    //insert 'is island'
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> is_island;
            map[j].push_back(is_island);
            if(is_island)
                bfs_q.push(make_pair(j,i));
        }
    }
    bfs();

	system("pause");
	return 0;
}