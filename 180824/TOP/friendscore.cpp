/*
*	author : mike2ox
*	TOP : 친구수
*	descript : Top coder p.120 ~
*	type : Search
*/
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

string s;
vector<string> friends;

int main(){

	getline(cin, s);
	stringstream ss(s);
	while (ss.good()) {
		string substr;
		getline(ss, substr, ' ');
		friends.push_back(substr);
	}

	int ans = 0;
	int n = friends[0].length();

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;

			if (friends[i][j] == 'Y')
				cnt++;
			else {
				for (int k = 0; k < n; k++) {
					if (friends[j][k] == 'Y' && friends[k][i] == 'Y') {
						cnt++;
						break;
					}
				}
			}
		}

		ans = max(ans, cnt);
	}

	cout << ans;

	return 0;
};