/*
*	author : quisutdeus7
*	BJO : no. 10430
*	status : solve
*	type : practice problem[PP]
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int a, b ,c;

int main() {
	cin >> a >> b >> c;
	cout << (a + b) % c << '\n';
	cout << (a%c + b%c) % c << '\n';
	cout << (a*b) % c <<  '\n';
	cout << (a%c*b%c) % c << '\n';

}
