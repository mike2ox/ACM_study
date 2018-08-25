/*
*	author : mike2ox
*	TOP : 즐거운 파티
*	descript : Top coder p.82 ~ 
*	type : Search
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//// book copy
class InterestingParty{

    public:
        int bestInvitation(vector <string> first, vector<string> second){
            int i, j;
            int ans =0;

            for (int i=0;i<first.size();i++){
                int f =0;   int s =0;
                for (int j=0;j<first.size();j++){       // 최소 한명 초대할 수도 있으니 i,j 둘다 0부터 시작
                    if(first[i] == first[j]) f++;
                    if(first[i] == second[j]) f++;
                    if(second[i] == first[j]) s++;
                    if(second[i]==second[j])s++;
                }
            ans = max(f, ans);
            ans = max(s, ans);
            }

            return ans;
        }
};
//// book copy

#define MAX(a,b) ((a>b)? a:b)

string first[4] ={"fishing", "gardening", "swimming", "fising"};
string second[4]={"hunting","fishing","fishing","biting"};
int cnt = 0;

int main(){
    
    int str_length = sizeof(first)/sizeof(first[0]); 

    for (int i=0;i<str_length;i++){
        int f_ckp=0; // 구분하는 주 요소가 first에 있는지 second에 있는지에 따라 결과 다름
        int s_ckp=0;

        for(int j=0;j<str_length;j++){
            if(first[i] == second[j] || first[i] == first[j])
                f_ckp++;
            if(second[i] == first[j] || second[i]==first[j])
                s_ckp++;
        }

        cnt = MAX(cnt, f_ckp);
        cnt = MAX(cnt, s_ckp);
    }

    cout << cnt << '\n';

    return 0;
}