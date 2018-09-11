/*
*	author : mike2ox
*	BJO : 텀 프로젝트
*	descript : https://www.acmicpc.net/problem/9446
*	type : BFS DFS
*/
#include<iostream>
#include<vector>
using namespace std;

int w, h;
int n_island;
int maze[51][51] = {0,};
bool ck[51][51] = {false,};
int ax[] = {0, 1, 1, 1, 0, -1, -1,-1};
int ay[] = {1,1,0,-1,-1,-1,0,1};
vector<int> islands;

void dfs(int i, int j){

    ck[i][j] = true;
    
    // 방향별 검사
    for(int l=0;l<8;l++){
        int ti = i+ ax[l];
        int tj = j + ay[l];

        if((ti<=0&&ti>=50)&&(tj<=0&&tj>=50))
            continue;
        if(!ck[ti][tj] && maze[ti][tj] ==1){
            dfs(ti,tj);
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio();

    while(cin>>w>>h){
        // 입력이 0 0 이면 입력이 종료
        if(w == 0 && h == 0)
            break;
        n_island=0;
        // 미로 생성
        for(int i =1;i<=h;i++){
            for(int j=1;j<=w;j++){
                cin >> maze[i][j];
            }
        }
        //  탐색
        for(int i =1;i<=h;i++){
            for(int j=1;j<=w;j++){
                if(!ck[i][j] && maze[i][j] == 1){
                    dfs(i,j);
                    n_island++;
                }
            }
        }

        islands.push_back(n_island);
        
        for(int i =1;i<=h;i++){
            for(int j=1;j<=w;j++){
                ck[i][j] = false;
            }   
        }
    }

    for(vector<int>::iterator itr = islands.begin(); itr != islands.end();itr++){
        cout << *itr << '\n';
    }

    return 0;
}