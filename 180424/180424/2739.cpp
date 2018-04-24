/*
*	author : quisutdeus7
*	BJO : no. 2739
*	status : solved
*/
#include<iostream>
using namespace std;

int N;

int main() {

	cin >> N;
	for (int i = 0; i < 9; i++)
		cout << N << " * " << i+1 << " = " << N*(i+1) << '\n';

	return 0;
}