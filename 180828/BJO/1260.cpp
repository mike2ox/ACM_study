/*
*	author : mike2ox
*	BJO : BFS DFS
*	descript : https://www.acmicpc.net/problem/1260
*	type : BFS DFS
*/

#include<iostream>
#include<vector>
using namespace std;

typedef struct{
    int ckpt =0;
    vector<int> edge;
}node;

node DFSBFS[1001];
int V;

void DFS(node* dfsbfs){

    if((*dfsbfs).ckpt == -1)
        return;
    
    cout << (*dfsbfs).ckpt << " ";
    (*dfsbfs).ckpt = -1;

    for(vector<int>::iterator itr = (*dfsbfs).edge.begin() ; itr != (*dfsbfs).edge.end(); ++itr){
        DFS(&DFSBFS[*itr]);
    }
}
// 또 막힘. BFS 구현 부분 추가 필요
void BFS(node* dfsbfs){
    vector<node*> temp;
    cout << (*dfsbfs).ckpt << " ";
    (*dfsbfs).ckpt = -1;

    for(vector<int>::iterator itr = (*dfsbfs).edge.begin() ; itr != (*dfsbfs).edge.end(); ++itr)
        cout << DFSBFS[*itr].ckpt;
    
}

int main(){

    int n_N, n_M;       //정점 갯수, 간선 갯수
    int N, M;
    cin >> n_N >> n_M >> V;

    for(int x=1;x<=n_M;x++){
        cin >> N >> M;
        DFSBFS[N].ckpt = N;
        DFSBFS[M].ckpt = M;
        DFSBFS[N].edge.push_back(M);
        DFSBFS[M].edge.push_back(N);
    }

    DFS(&DFSBFS[V]);
    BFS(&DFSBFS[V]);

    return 0;
}