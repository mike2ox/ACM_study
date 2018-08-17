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

void DFS(int n, int m){
    if (maze[n][m]=='0' || ckpt[n][m])
        return;
    ckpt[n][m] = true;
    
    if(n == N&&m==M){
        if(min_cnt>=cnt)
            min_cnt = cnt;
        return;
    }

    if(m!=1)
        DFS(n, m-1);
    if(n!=1)
        DFS(n-1, m);
    if(m!=M)
        DFS(n, m+1);
    if(n!=N)
        DFS(n+1, m);
        cnt++;
}

int main(){
    cin >> N >> M;
    int min_cnt =M*N;

    for(int i=1;i<=N;i++){  
        for(int j=1;j<=M;j++)
            cin >> maze[i][j];
    }

    DFS(1,1);      //시작점부터 시작
    cout << min_cnt;
    return 0;  
}