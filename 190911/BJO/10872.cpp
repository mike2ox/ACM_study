/*
*	author : mike2ox
*	BJO : 팩토리얼
*	descript : https://www.acmicpc.net/problem/10972
*	type : 수학 1
*/
#include<iostream>
using namespace std;

int N;
int dp[13] = {};

int main(){

    ios_base::sync_with_stdio(false);
    cin >> N;
    dp[0] = 1;

    for(int i=1;i<=N;i++){
        dp[i] = dp[i-1]*i;
    }
    cout << dp[N] << '\n';
    return 0;
}

