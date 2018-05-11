/*
*	author : quisutdeus7
*	BJO : no. 10824
*	status : solve
*	type : practice problem[PP]
*/
#include<iostream>
#include<string>
using namespace std;
long long result = 0;
long long x_s, y_s, cnt =0;

string a,b,c,d;
string x, y;

int main() {

	cin >> a  >> b >> c >> d;
	x = a + b;
	y = c + d;
	
	x_s = x.size();
	y_s = y.size();

	for (int i = 0; i < x_s; i++) {
		cnt = 1;
		for (int j = 1; j < x_s - i; j++)
			cnt *= 10;
		result += (x[i] - '0') * cnt;
	}

	for (int i = 0; i < y_s; i++) {
		cnt = 1;
		for (int j = 1; j < y_s - i; j++)
			cnt *= 10;
		result += (y[i] - '0') * cnt;
	}

	cout << result << '\n';

	return 0;
}
