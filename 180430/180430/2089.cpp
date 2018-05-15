/*
*	author : quisutdeus7
*	BJO : no. 2089
*	status : solve
*	type : practice problem[PP]
*/
#include <iostream> 
#include<string>
using namespace std;

long long n;
void mins(long long low, long long up, long long p) {
	if (n<low || n > up) 
		mins(low + (p > 0)*-2 * p, up + (p < 0)*-2 * p, p*-2);
	if (p < 0 ? n < low - p : n > up - p) {
		n -= p;
		cout << "1";
	}
	else 
		cout << "0";
}
int main() {
	cin >> n;
	mins(0, 1, 1);
	return 0;
}