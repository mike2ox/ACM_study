/*
*	author : mike2ox
*	TOP : 회문
*	descript : Top coder p.112 ~
*	type : Search
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string s;

int main(){

	cin >> s;

	for(int i = s.size();; i++) {
		bool flag = true;

		for (int j = 0; j < s.size(); j++) {
			if ((i - j - 1) < s.size() && s[j] != s[i - j - 1]) {
				flag = false;
				break;
			}

		}
		if (flag) {
			cout << i;
			return 0;
		}
	}

	return 0;
};