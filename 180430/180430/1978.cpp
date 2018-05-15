/*
*	author : quisutdeus7
*	BJO : no. 1978
*	status : unsolve
*	type : practice problem[PP]
*/
#include <iostream> 
#include<string>
using namespace std;

int n, r;

int main() {
	cin >> n;
	r = n;

	for (int i = 0, x; i < n; i++) {
		cin >> x;
		if (x == 1)
			r--;
		for (int j = 2; j*j <= x; j++)
			if (x%j == 0) { 
				r--;
				break;
			}
	}
	cout << r;
	return 0;
}
