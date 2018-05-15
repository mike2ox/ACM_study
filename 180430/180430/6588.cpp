/*
*	author : quisutdeus7
*	BJO : no. 6588
*	status : unsolve
*	type : practice problem[PP]
*/
#include <iostream> 
#include<string>
using namespace std;

int ck[1000000] = { 1,1 };
int n;

int main() {
	for (int i = 2; i < 1000000; i++)
		if (!ck[i]) {
		for (int j = i * 2; j < 1e6; j += i)
			ck[j] = 1;
	}
	while (scanf("%d", &n), n) {
		for (int i = 1;; i++)
			if (!ck[i] && !ck[n - i]) {
			cout << n << " = " << i << " + " << n - i << '\n';
			break;
		}
	}
	return 0;
}