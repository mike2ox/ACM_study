/*
*	author : quisutdeus7
*	BJO : no. 1929
*	status : solve
*	type : practice problem[PP]
*/
#include <iostream> 
using namespace std;
const int max = 1e6;

int m, n;
bool ck[max + 1];

int main() {
	cout <<  m << n;

	for (int i = 2; i <= n; i++) {
		if (ck[i]) 
			continue;
		if (i >= m) 
			cout << i << '\n';
		for (int j = i; j <= n; j += i)
			ck[j] = 1;
	}
	return 0;
}