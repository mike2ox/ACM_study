/*
*	author : quisutdeus7
*	BJO : no. 1168
*	status : solve, but runtime error
*	type : practice problem[PP]
*/
#include<iostream>
using namespace std;
const int max = 1e5;
int a[max];
int n, m, p;

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) 
		a[i] = i + 1;
	cout << "<" << a[p = m - 1];

	for (; n>1; n--) {
		for (int j = p--; j < n - 1; j++)
			a[j] = a[j + 1];
		cout << ", " << a[p = (p + m) % (n - 1)];
	}
	cout << ">";
	return 0;
}


