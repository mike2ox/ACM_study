/*
*	author : mike2ox
*	TOP : 마법의 숫자
*	descript : Top coder p.173 ~ 
*	type : Search
*/

#include<iostream>
#include<bitset>
using namespace std;
#define max_number 16

int A[] = {1, 2, 3, 4, 5, 6,7, 8};
int B[] = {1, 2, 3, 4, 9, 10, 11, 12};
int C[] = {1, 2, 5, 6, 9, 10, 13,14};
int D[] = {1, 3, 5, 7,9, 11, 13,15};
string input;

char check(int X[], int number){
    for (int x=0;x<8;++x){
        if(X[x] == number) return 'Y';
    }
    return 'N';
}


int main(){
    // cin, cout 속도 향상
    ios_base::sync_with_stdio(false);

    cin >> input;
    
    for (int i=1;i<=max_number;++i){
        if(check(A,i) != input[0]) continue;
        if(check(B,i) != input[1]) continue;
        if(check(C,i) != input[2]) continue;
        if(check(D,i) != input[3]) continue;
        cout << i << '\n';
    }

    return 0;
}