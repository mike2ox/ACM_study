/*
*	author : quisutdeus7
*	BJO : no. 1676
*	status : unsolve
*	type : practice problem[PP]
*/
#include <iostream> 
using namespace std;

int r, n;
int main() {
	cin  >>n;

	while (n /= 5)
		r += n;
	
	cout << r;
	return 0;
}