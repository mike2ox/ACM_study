/*
*	author : quisutdeus7
*	BJO : no. 10989
*	status : unsolve - runtime error
*	type : practice problem[PP]
*/
#include <iostream>
using namespace std;

int cnt[10001] = {0,};
int n, m = 0;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> m;
		cnt[m]++;
	}
	for (int i = 1; i < 10001; i++) {
		if (cnt[i] > 0)
			for (int j = 0; j < cnt[i]; j++)
				cout << i << "\n";
	}

	return 0;
}