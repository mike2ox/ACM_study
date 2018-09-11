/*
*	author : mike2ox
*	BJO : no. 2667, 단지번호 붙이기
*	descript : https://www.acmicpc.net/problem/2667
*	type : search[DFS,BFS]
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


const int MAX = 25;
typedef struct {
    int y, x;
}node;

node moved[4] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
int N;
int cnt;
bool visited[MAX][MAX];

string graph[MAX];
vector<int> residance;

//DFS
void DFS(int y, int x){
    cnt++;
    visited[y][x] = true;

    //방향
    for (int i = 0; i < 4; i++){    
        
        int nextX = x + moved[i].x;
        int nextY = y + moved[i].y;

        if (0 <= nextX && nextX < N && 0 <= nextY && nextY < N)
            if (graph[nextY][nextX] == '1' && visited[nextY][nextX]==false)
                DFS(nextY, nextX);

    }
}

 

int main(void){

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> graph[i];


    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (graph[i][j] == '1' && visited[i][j] == false){
                cnt = 0;
                DFS(i, j);
                residance.push_back(cnt);
            }
        }
    }

    sort(residance.begin(), residance.end());
    cout << residance.size() << endl;

    for (int i = 0; i < residance.size(); i++)
         cout << residance[i] << endl;

    return 0;
}