/*
*	author : quisutdeus7
*	BJO : no. 1149
*	status : solved
*/
#include<iostream>
using namespace std;

int n_T;
int cost[1001][3];
int house[1001][3];

int min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	//int min_val[3];
	cin >> n_T;

	for (int i = 0; i < n_T; i++)
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
	
	for (int i = 0; i < 3; i++)
		house[0][i] = cost[0][i];
	
	for (int i = 1; i < n_T; i++) {
		house[i][0] = cost[i][0] + min(house[i - 1][1], house[i - 1][2]);
		house[i][1] = cost[i][1] + min(house[i - 1][0], house[i - 1][2]);
		house[i][2] = cost[i][2] + min(house[i - 1][0], house[i - 1][1]);
	}
	int min_val = min(min(house[n_T - 1][0], house[n_T - 1][1]), house[n_T-1][2]);

	cout << min_val << '\n';
	

	return 0;
}