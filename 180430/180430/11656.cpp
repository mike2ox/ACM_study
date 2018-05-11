/*
*	author : quisutdeus7
*	BJO : no. 11656
*	status : solve
*	type : practice problem[PP]
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string str[1000];
int len;
int main() {
	cin >> str[0];
	len = str[0].length();
	for (int i = 1; i < len; i++)
		str[i] = str[0].substr(i, len);
	
	sort(&str[0], &str[len]);
	for (int i = 0; i < len; i++)
		cout << str[i] << '\n';

	return 0;
}
