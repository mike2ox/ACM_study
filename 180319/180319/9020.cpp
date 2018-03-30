/*
*	author : quisutdeus7
*	BJO : no. 9020
*	status : solved
*/
#include<iostream>
#include<math.h>
using namespace std;

#define MAX 10001 
int prime[MAX];
int n_T;
int N;

void goldbach(int n);
void eratosthenes();
int main() {
	eratosthenes();
	cin >> n_T;
	for (int i = 0;i<n_T; i++) {
		cin >> N;
		goldbach(N);
	}

	return 0;
}
void eratosthenes() {
	for (int j = 2; j*j <= MAX; j++) {
		// mul = 2;
		if (!prime[j]) {
			for (int k = j*j; k <= MAX; k += j) {
				prime[k] = 1;
				//mul++;
			}
		}
	}
	prime[1] = 1;
}
void goldbach(int n) {
	int mid = n / 2;

	for (int a = mid, b = mid; a <= n; a--, b++) {
		if (!prime[a] && !prime[b]) {
			cout << a << " " << b << "\n";
			return;
		}
	}
	return;
}