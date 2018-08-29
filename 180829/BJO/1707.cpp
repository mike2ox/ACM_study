/*
*	author : mike2ox
*	BJO : 이분 그래프
*	descript : https://www.acmicpc.net/problem/1707
*	type : BFS DFS
*/
#include<iostream>
#include<queue>
using namespace std;

bool isBipartiteG = false;
int graph[20001][20001] = {0,};
bool ckpt[20001] = {false,};
int K, V, E;
void BFS(int v){
    queue<int> e;
    ckpt[v] = true;
    for(int i=1;i<=K;++i){
        if(!ckpt[i]&&graph[v][i]==1){
            ++graph[v][i];
            e.push(i);
        }
            
    }
}
int main(){
    // cin, cout 속도 향상
    ios_base::sync_with_stdio(false);
    
    cin >> K;
    for(int i =1;i<=K;++i){
        cin >> V >> E;
        int a, b;
        for(int j=1;j<=E;++j){
            cin >> a >> b;
            graph[a][b] = graph[b][a] = 1;   
        }
    }

    BFS(1);
    

    return 0;
}