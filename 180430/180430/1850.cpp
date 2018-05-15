/*
*	author : quisutdeus7
*	BJO : no. 1850
*	status : solve
*	type : practice problem[PP]
*/
#include <iostream> 
using namespace std;

unsigned long long a, b, result;

unsigned long long gcd(long long a, long long b)
{
	if (b == 0) 
		return a;
	return gcd(b, a%b);
}
int main() {
	cin >> a >> b;
	result = gcd(a, b);
	while (result--)
		cout << "1";
}


