/*
*	author : mike2ox
*	TOP : 암호
*	descript : Top coder p.93 ~ 
*	type : Search
*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

long long encript(vector<int> numbers){
    long long ans =0;

    for(int i=0;i<numbers.size();i++){
        long long temp = 1;
        for(int j=0;j<numbers.size();j++){
            if(i==j)
                temp *= (numbers[j]+1);
            else
                temp *= numbers[j];
        }
        ans = max(ans, temp);
    }
    

    return ans;
}
int capacities[50] = {-1,}; // 1 ~ 10000


int main(){
    vector<int> input;
    int a;
    
    while(true){
        cin >> a;
        input.push_back(a);

        if(cin.fail()){
            cin.clear();
            break;
        }
    }
    cout << "end";
    //int result = encript(capacities)
    return 0;
}