/*
*	author : quisutdeus7
*	BJO : 2293
*	status : solved
*/
#include <iostream>
using namespace std;

int n[100001] = {1,};		// coins
int n_T;		// number of test case
int k;			// sum of coins
int cost;

int main() {
	cin >> n_T >> k;

	for (int i = 0; i < n_T; i++) {
		cin >> cost;
		for (int j = cost; j <= k; j++)
			n[j] += n[j- cost];
	}

	cout << n[k];

	return 0;
}