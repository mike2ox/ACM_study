/*
*	author : quisutdeus7
*	BJO : no. 9613
*	status : fail in BOJ
*	type : practice problem[PP]
*/
#include <iostream> 
using namespace std;

int t, n, a[1000001], sum;

int gcd(int a, int b){
	if (b == 0)
		return a;

	return gcd(b, a%b);
}
int main() {

	cin >> t;

	while (t--) {
		sum = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> a[i];

		for (int i = 1; i <= n - 1; i++)
			for (int j = i + 1; j <= n; j++)
				sum += gcd(a[i], a[j]);

		cout << sum << '\n';
	}
}
