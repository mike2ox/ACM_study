/*
*	author : quisutdeus7
*	BJO : no. 11720
*	status : solved
*/
#include<iostream>
using namespace std;

#define _ASCII 48

char input[101];	//input data
int N;			//num
int sum;		//sum

int main() {
	cin >> N;
	cin >> input;

	for (int i = 0; i < N; i++)
		sum += input[i] - _ASCII;

	cout << sum << '\n';

	return 0;
}