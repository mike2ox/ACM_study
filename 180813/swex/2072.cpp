/*
*	author : mike2ox
*	SW expert : 2072, 홀수만 더하기
*	description : https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QSEhaA5sDFAUq&categoryId=AV5QSEhaA5sDFAUq&categoryType=CODE
*/
#include<iostream>
#include<string.h>
using namespace std;

int test_case[100001][11] = {0,};
int test_num;
int sum;

int main(){
    cin >> test_num;
    for (int i=1;i<=test_num;i++){
        for (int j=1;i<=10;j++){
            cin >> test_case[i][j];
            if(test_case[i][j]%2 ==1)
                test_case[i][0] += test_case[i][j];
        }
    }

    for (int i=1;i<=test_num;i++)
        cout << '#' << i<< " " << test_case[i][0] <<'\n';


    return 0;
}