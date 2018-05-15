/*
*	author : quisutdeus7
*	BJO : no. 2004
*	status : unsolve
*	type : practice problem[PP]
*/
#include <iostream> 
#include<algorithm>
using namespace std;

int n, m;
int nCm(int x, int y) {
	return x ? nCm(x / y, y) + x / y : 0;
}
int main() {
	cin >> n >> m;
	cout << min(nCm(n, 5) - nCm(m, 5) - nCm(n - m, 5), nCm(n, 2) - nCm(m, 2) - nCm(n - m, 2));
	return 0;
}