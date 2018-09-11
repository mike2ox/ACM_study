/*
*	author : mike2ox
*	BJO : 진법 변환2
*	descript : https://www.acmicpc.net/problem/11005
*	type : 수학 1
*/
#include<iostream>
#include<vector>
using namespace std;

int n, b;   //10진수, b진법
vector<int> b_list;

int main(){

    cin >> n >> b;

    while(n!=0){
        b_list.push_back(n%b);
        n /= b;
    }

    //reverse_iterator를 안쓰니 처음 출력할때 쓰레기 값이 출력
    /*for(vector<int>::iterator itr = b_list.end();itr != b_list.begin();itr--){
        if(*itr>=10){
            char ch = *itr - 10 + 'A';
            cout << ch;
        }
        else
            cout << *itr;
    }*/

    for(vector<int>::reverse_iterator itr = b_list.rbegin();itr != b_list.rend();itr++){
        if(*itr>=10){
            char ch = *itr - 10 + 'A';
            cout << ch;
        }
        else
            cout << *itr;
    }


    return 0;
}