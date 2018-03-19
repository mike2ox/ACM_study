/*
*	author : quisutdeus7
*	BJO : no. 1978
*	status : unsolved
*/
#include<iostream>
using namespace std;

int N;
int n_arr[1000] = {};
int check =0;

int main() {

	cin >> N;

	//input data
	for(int a = 0; a < N; a++) 
		cin >> n_arr[a];

	// find prime number
	for (int b = 0; b < N; b++) {
		if (n_arr[b] > 1) {
			for (int c = 2; c < n_arr[b]; c++) {
				if (n_arr[b] % c == 0)
					break;
			}
			//number of prime
			check++;
		}
	}
	cout << check;

	return 0;
}

