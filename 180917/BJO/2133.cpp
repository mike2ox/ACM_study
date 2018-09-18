/*
*	author : mike2ox
*	BJO :타일 채우기
*	descript : https://www.acmicpc.net/problem/2133
*	type : dp
*/
#include<iostream>
using namespace std;

int dp[30+1];
int N;

int main(){
    cin >> N;

    dp[0] = 1;

    for(int i=2;i<=N;i+=2){
        dp[i] = dp[i-2] * 3;//+2되면서 늘어난 3*2타일을 채우는 수를 곱
        for(int j=4;j<=i;j+=2)
            dp[i] += 2*dp[i-j]; //3*4 이후부터 3*2로 나눠지지 않는 경우의 수 
    }

    cout << dp[N]<< '\n';

    return 0;

}