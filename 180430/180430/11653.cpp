/*
*	author : quisutdeus7
*	BJO : no. 11653
*	status : unsolve
*	type : practice problem[PP]
*/
#include <iostream> 
using namespace std;
int n;

int main(){
	cin >> n;
	for (int i = 2; i <= n; i++) {
		while (n%i == 0) {
			cout << i << '\n';
			n /= i;
		}
	}
		
	return 0;
}