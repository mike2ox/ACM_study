/*
*	author : mike2ox
*	BJO : 텀 프로젝트
*	descript : https://www.acmicpc.net/problem/9446
*	type : BFS DFS
*/
#include<iostream>
#include<vector>
using namespace std;

int test_case;
int n_stu;          //학생 수
int start;
int n_team = 0;

vector<int> term[100001];
bool ckpt[100001] = {false,};

void dfs(int v){

    ckpt[v] = true;

    if(v==start){
        n_team++;
        return;
    }

    for(int i=1;i<=n_stu;i++){
        if(!ckpt[i] && term[v][0]==i){
            dfs(i);
        }
    }


}

int main(){
    ios_base::sync_with_stdio();
    
    cin >> test_case;

    for(int i=0;i<test_case;i++){
        
        int crew;       //학생 번호
        term[0].push_back(0);   //start num =1 맞추기 위해
        
        cin >> n_stu;
        //  vector 안에 수 입력
        for(int j=1;j<=n_stu;j++){
            cin >> crew;
            //term[crew].push_back(j);
            term[j].push_back(crew);
        }
        //  그룹가능 탐색
        for(int j=1;j<=n_stu;j++){
            start = j;

            for(int k=1;k<=n_stu;k++){
                if(!ckpt[k]&& term[j][0]==k)
                    dfs(k);
            }
        }
        cout << n_team << '\n';
        // 초기화
        for(int j=1;j<=n_stu;j++)
            term[j].clear();
    }

    return 0;
}


