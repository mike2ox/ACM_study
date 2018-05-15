/*
*	author : quisutdeus7
*	BJO : no. 2751
*	status : unsolve - runtime error
*	type : practice problem[PP]
*/
#include <iostream>
using namespace std;

int sort[10000] = { 0, };
int arr[10000000] = { 0, };
int cnt[10000000] = { 0, };

int main() {
	int n, m = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sort[arr[i]]++;
	}

	for (int i = 0; i < 10000000; i++) {
		while (sort[i]>0) {
			cnt[m] = i;
			sort[i]--;
			n--;
			cout << cnt[i] << "\n";
			m++;
		}
		if (n == 0)
			break;
	}


	return 0;
}