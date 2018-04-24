/*
*	author : quisutdeus7
*	BJO : no. 10818
*	status : solved(????)
*/
#include<iostream>
using namespace std;

int n, x=0;			//정수 갯수, n1개의 정수

int main() {

	cin >> n;
	int min = 1000001, max = -1000001;

	for (int i = 0; i < n; i++) {
		cin >> x;

		if (x < min)
			min = x;
		if (x > max)
			max = x;
	}
	cout << min << " " << max;

	return 0;
}