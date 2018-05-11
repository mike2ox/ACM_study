/*
*	author : quisutdeus7
*	BJO : no. 11655
*	status : solve
*	type : practice problem[PP]
*/
#include<iostream>
#include<string>
using namespace std;

string str;

int main() {
	getline(cin, str);
	for (int i = 0; i < str.length(); i++){
		if (str[i] >= 'a' && str[i] <= 'z') {
			if (str[i] > 'm')
				str[i] -= 13;
			else
				str[i] += 13;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			if (str[i] > 'M')
				str[i] -= 13;
			else
				str[i] += 13;
		}
		cout << str[i];
	}
}
