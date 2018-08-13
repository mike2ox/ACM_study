/*
*	author : mike2ox
*	SW expert : 2058, 자릿수 더하기
*	description : https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPRjqA10DFAUq&categoryId=AV5QPRjqA10DFAUq&categoryType=CODE&&&
*/
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

#define ASCII_NUM 48

int main(){
    char input[4];
    int num =0;
    cin >> input;

    for(int i =0;i<4;i++){
        num += int(input[i]) - ASCII_NUM;
    }
    cout << num << '\n';
    
}