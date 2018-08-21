/*
*	author : mike2ox
*	BJO : no. 2178, 미로탐색
*	descript : https://www.acmicpc.net/problem/2178
*	type : search[DFS,BFS]
*/
#include<iostream>
#include<queue>
using namespace std;

int N, M;         // 가로 세로
char maze[10001][1001] = {'0',};  // 미로
bool ckpt[10001][1001] = {false,};// 탐색여부

int cnt=0

void BFS(int n, int m){
    queue<pair<int, int>> list;
    

    
}

int main(){
    cin >> N >> M;
    int min_cnt =M*N;

    for(int i=1;i<=N;i++){  
        for(int j=1;j<=M;j++)
            cin >> maze[i][j];
    }

    BFS(1,1);      //시작점부터 시작
    cout << min_cnt;
    return 0;  
}