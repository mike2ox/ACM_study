/*
*	author : quisutdeus7
*	BJO : no. 1929
*	status : solved
*/
#include<iostream>
using namespace std;

int a, b;
bool prime[1000001];

int main() {
	cin >> a >> b;
	prime[0] = prime[1]= false;

	//에라토스 체 적용
	for (int i = 2; i <= b; i++)
		prime[i] = true;
	
	for (int j = 2; j*j <= b; j++) {
		if (prime[j]) {
			for (int k = j*j; k <= b; k+=j)
				prime[k] = false;
		}
	}
	for (int n = a; n <= b; n++) {
		if (prime[n]) {
			cout << n << '\n';
		}
	}


	return 0;
}