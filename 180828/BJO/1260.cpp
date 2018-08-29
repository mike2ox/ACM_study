/*
*	author : mike2ox
*	BJO : BFS DFS
*	descript : https://www.acmicpc.net/problem/1260
*	type : BFS DFS
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

typedef struct{
    int value;
    bool ckpt =false;
    vector<int> edge;
}node;

node DFSBFS[1001];
int V;

void DFS(node* dfsbfs){

    if((*dfsbfs).ckpt == true)
        return;
    
    cout << (*dfsbfs).value << " ";
    (*dfsbfs).ckpt = true;

    for(vector<int>::iterator itr = (*dfsbfs).edge.begin() ; itr != (*dfsbfs).edge.end(); ++itr){
        DFS(&DFSBFS[*itr]);
    }
}
// 또 막힘. BFS 구현 부분 추가 필요
void BFS(node* dfsbfs){
    vector<node> temp;
    cout << (*dfsbfs).value << " ";
    (*dfsbfs).ckpt = true;

    for(vector<int>::iterator itr = (*dfsbfs).edge.begin() ; itr != (*dfsbfs).edge.end(); itr++){
        cout << *itr << " ";
        temp.push_back(dfsbfs[*itr]);
        dfsbfs[*itr].ckpt = true;
    }
    
    while(!temp.empty()){
        for(vector<node>::iterator itr = temp.begin() ; itr != temp.end(); itr++){
            if((*itr).ckpt)
                continue;
            cout << (*itr).value << " ";
            (*dfsbfs).ckpt = true;
            for(vector<int>::iterator itr2 = (*itr).edge.begin() ; itr2 != (*itr).edge.end(); ++itr2){
                temp.push_back(dfsbfs[*itr2]);
            }
            temp.erase(itr);
        }
    }
    
}

int main(){

    int n_N, n_M;       //정점 갯수, 간선 갯수
    int N, M;
    cin >> n_N >> n_M >> V;

    for(int x=1;x<=n_M;x++){
        cin >> N >> M;
        DFSBFS[N].value = N;
        DFSBFS[M].value = M;
        DFSBFS[N].edge.push_back(M);
        DFSBFS[M].edge.push_back(N);
    }

    DFS(&DFSBFS[V]);
    cout << '\n';
    for(int i=0;i<M;++i)
        DFSBFS[i].ckpt = false;
    BFS(&DFSBFS[V]);

    return 0;
}