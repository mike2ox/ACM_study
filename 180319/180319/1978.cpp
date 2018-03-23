/*
*	author : quisutdeus7
*	BJO : no. 1978
*	status : solved
*/
#include<iostream>
using namespace std;

int N;
int n_arr[101] = {};
int check = 0;

int main() {

	cin >> N;

	// find prime number
	for (int b = 0; b < N; b++) {
		//input data
		cin >> n_arr[b];

		if (n_arr[b] > 1) {
			for (int c = 2; c*c <= n_arr[b]; c++) {
				if (n_arr[b] % c == 0) {
					check--;
					break;
				}

			}
			//number of prime
			check++;
		}
	}
	cout << check;

	return 0;
}

