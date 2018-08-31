/*
*	author : mike2ox
*	BJO : 이분 그래프
*	descript : https://www.acmicpc.net/problem/1707
*	type : BFS DFS
*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

//bool graph[20001][20001] = {false,};
int ckpt[20001] = {0,}; //색구분(1,2)
int K, V, E;        //case 수, 정점, 간선 갯수
queue<int> e;
bool BFS(vector<vector<int>> graph,int v);

int main(){
    // cin, cout 속도 향상
    ios_base::sync_with_stdio(false);
    
    cin >> K;
    for(int i =1;i<=K;++i){ 
        cin >> V >> E;
        vector<vector<int>> graph(V+1);
        int a, b;
        for(int j=1;j<=E;++j){
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
            graph[a][b] = graph[b][a] = 1;   
        }q
        bool ck = BFS(graph,1);
        if(ck)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';

        for(int j=1;j<=E;++j)
            graph[a][b] = graph[b][a] = 0;   
        for(int j=1;j<=V;++j)
            ckpt[j] = 0;
    }
    return 0;
}

bool BFS(vector<vector<int>> graph, int v){
    ckpt[v] = 1;
    e.push(v);
    
    while(!e.empty()){
        v = e.front();
        e.pop();

        for(int i=1;i<=V;++i){
            if(ckpt[i]==0&&graph[v][i]==1){   //색이 칠해져 있지 않고 v 노드에 연결되있는 인접 노드들
                e.push(i);                      //BFS의 핵심
                if(ckpt[v]==1)
                    ckpt[i] = 2;
                else if(ckpt[v]==2)
                    ckpt[i] = 1;
                //else   
                //    continue;
            }
            else if(ckpt[i]!=0&&graph[v][i]==1){
                if(ckpt[i] == ckpt[v]){
                    return false;
                }   
            }
        }
    }
    return true;
    
}