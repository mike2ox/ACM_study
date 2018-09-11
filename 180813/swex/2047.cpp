/*
*	author : mike2ox
*	SW expert : 2047, 신문 헤드라인
*	description : https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QKsLaAy0DFAUq&categoryId=AV5QKsLaAy0DFAUq&categoryType=CODE
*/
#include<iostream>
#include<string.h>
using namespace std;

#define ASCII_UPPER 32

int main(){
    string headline;
    cin >> headline;
    
    for (int i=0;i < headline.length();i++){
        if (headline[i]>=int('a')){
            headline[i] = char(int(headline[i])-ASCII_UPPER);
        }
    }
    cout <<headline <<'\n';

}