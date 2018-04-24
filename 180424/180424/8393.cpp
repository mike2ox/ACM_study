/*
*	author : quisutdeus7
*	BJO : no. 8393
*	status : solved
*/
#include<iostream>
using namespace std;

int n, sum = 0;

int main() {

	cin >> n;

	for (int i = 1; i <= n; i++)
		sum += i;

	cout << sum;

	return 0;
}