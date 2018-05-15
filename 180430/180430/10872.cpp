/*
*	author : quisutdeus7
*	BJO : no. 10872
*	status : solve, but fail
*	type : practice problem[PP]
*/
#include <iostream> 
using namespace std;
int n;
int r = 1;

int main() {
	cin >>n;

	for (int i = 1; i <= n; i++)
		r *= i;
	printf("%d", r);
	return 0;
}