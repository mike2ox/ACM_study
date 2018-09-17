/*
*	author : mike2ox
*	BJO : 제곱수의 합
*	descript : https://www.acmicpc.net/problem/1699
*	type : dp
*/
#include<iostream>
using namespace std;

int i, j, N;
int dp[100001];

int min(int a, int b){
    return a<b ? a : b;
}

int main(){
    cin >> N;

    for(i=0;i<=N;i++)
        dp[i] = i;

    for(i=2;i<=N;i++){
        for(j=2;j*j<=i;j++){
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }

    cout << dp[N]<< '\n';

    return 0;

}