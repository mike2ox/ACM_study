/*
*	author : quisutdeus7
*	BJO : no. 1003
*	status : solved
*/
#include<iostream>
using namespace std;

int dp_arr[2][41];
int n_T;
int num;

int main() {
	cin >> n_T;

	//init
	dp_arr[0][0] = 1;
	dp_arr[1][1] = 1;

	for (int i = 2; i <= 41; i++) {
		dp_arr[0][i] = dp_arr[0][i-1] + dp_arr[0][i-2];
		dp_arr[1][i] = dp_arr[1][i-1] + dp_arr[1][i-2];
	}

	//re-init
	dp_arr[0][1] = 0;
	dp_arr[1][0] = 0;

	for (int j = 0; j < n_T; j++) {
		cin >> num;
		cout << dp_arr[0][num] << " " << dp_arr[1][num] << '\n';
	}


	return 0;
}