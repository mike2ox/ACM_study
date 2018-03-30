/*
*	author : quisutdeus7
*	BJO : no. 9012
*	status : solved
*/
#include<iostream>
#include<string>
using namespace std;

int n_T;
string str="";
int n_paren;		//°ýÈ£ÀÇ ¼ö

int main() {
	cin >> n_T;
	for (int i = 0; i < n_T; i++) {
		n_paren = 0;
		cin >> str;

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(')
				n_paren++;
			else
				n_paren--;
			if (n_paren < 0)
				break;
		}
		if (n_paren == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}