/*
*	author : mike2ox
*	BJO : 순열 그래프
*	descript : https://www.acmicpc.net/problem/10451
*	type : BFS DFS
*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int test_case;  //
int N;          // 순열의 길이
int value;
int n_graph;        // 순환 그래프 수
vector<int> result; // 전체 테스트 케이스에서 순환 그래프 수
vector<int> permute; //순열
vector<bool> ckpt;

void DFS(int node){

    ckpt[node] = true;
    if(ckpt[node] || node == permute[node]){
        if(!ckpt[permute[node]])
            DFS(permute[node]);
        else{
            n_graph++;
            //cout << n_graph << '\n';
        }
        return;
    }

}

int main(){
        // cin, cout 속도 향상
    ios_base::sync_with_stdio(false);

    cin >> test_case;

    for (int i=1;i<=test_case;++i){
        n_graph =0;  //init
        permute.push_back(0);
        cin >> N;

        for(int j = 1;j<=N;j++){
            cin >> value;
            permute.push_back(value);
            ckpt.push_back(false);
        }
        for(int j =1;j<=N;j++){
            if(!ckpt[j])
                DFS(j);     //array index를 시작으로 graph
        }
        result.push_back(n_graph);
        permute.clear();    //init
        ckpt.clear();
    }

    for (int i=0;i<result.size();++i)
        cout << result[i] << '\n';

    return 0;
}