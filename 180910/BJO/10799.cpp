/*
*	author : mike2ox
*	BJO : 쇠막대기
*	descript : https://www.acmicpc.net/problem/10799
*	type : 자료구조
*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;

string pipe;
stack<char> stck;

int main(){
    
    // cin, cout 속도 향상
    ios_base::sync_with_stdio(false);
    cin >> pipe;

    int count = 0;

    for(int i=0;i<pipe.length();i++){
        if(pipe[i] == '(')
            stck.push(pipe[i]);
        else{
            stck.pop();

            if(pipe[i-1] == '(') //레이저일 경우
                count+= stck.size();    //잘려나갈시 생기는 파이프 수

            else
                count++;    //파이프 1개가 끝나므로 1개 추가
        }
    }

    cout << count << '\n';


    return 0;
}