/*
*	author : quisutdeus7
*	BJO : no. 2581
*	status : solved
*/
#include<iostream>
using namespace std;

bool check = false;

int main() {
	int M, N;
	int count = 0;
	int min = 10000;
	int sum = 0;

	cin >> M >> N;

	for (int a = M; a <= N; a++) {
		for (int b = 2; b < a; b++) {
			// find number of prime
			if (a%b == 0)
				count++;
		}
		// eval prime number
		if (count == 0 && a != 1) {
			sum += a;

			// find min number
			if (min >= a) {
				check = true;
				min = a;
			}
		}
		count = 0;
	}
	if (check)
		cout << sum << '\n' << min;
	else
		cout << "-1\n";

	return 0;
}