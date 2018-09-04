/*
*	author : mike2ox
*	BJO : 반복 수열
*	descript : https://www.acmicpc.net/problem/2331
*	type : BFS DFS
*/
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> D;   //
int A;                  //1<= A<= 9999
int p;                  //횟수

void howto(int a){
    int n_per=0;
    D.push_back(a);

    while(1){
        int next_num = 0;
        while(a!=0){
            next_num += pow(a%10, p);
            a /= 10;
        }
        
        for(int i=0;i<D.size();i++){
            if(D[i] == next_num){
                cout << i << '\n';
                return;
            }
        }
        D.push_back(next_num);
        a = next_num;
    }
}

int main(){

    ios_base::sync_with_stdio();
    cin >> A >> p;

    howto(A);

    return 0;
}