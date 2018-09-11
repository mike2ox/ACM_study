/*
*	author : mike2ox
*	TOP : 재미있는 수학
*	descript : Top coder p.101 ~
*	type : Search
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int base;

int main(){

	vector<int> ans;
	cin >> base;


	for (int n = 2; n < base; n++) {
		bool ok = true;
		for (int i = 0; i < base; i++) {
			for (int j = 0; j < base; j++) {
				for (int k = 0; k < base; k++) {

					if ((i + j * base + k * base*base) % n == 0 && (i + j + k) % n != 0) {
						ok = false;
						break;
					}

				}
				if (!ok) break;
			}
			if (!ok) break;
		}
		if (ok) ans.push_back(n);
	}	

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << ' ';
	}

	return 0;
};