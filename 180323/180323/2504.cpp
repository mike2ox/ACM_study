/*
*	author : quisutdeus7
*	BJO : no. 2504
*	status : solved
*/
#include<iostream>
#include<string.h>
using namespace std;
char str[31] = {};
int sum, x = 1;
int n_par[4] = {};		//°¢ °ıÈ£ÀÇ ¼ö

int main() {
	cin >> str;
	for(int i=0;str[i];i++){
		if (str[i] == '(') {
			x *= 2;
			n_par[0]++;
		}
		else if (str[i] == '[') {
			x *= 3;
			n_par[2]++;
		}
		else if (str[i] == ')') {
			if (str[i - 1] == '(')
				sum += x;
			n_par[1]++;
			x = x / 2;
		}
		else if (str[i] == ']') {
			if (str[i - 1] == '[')
				sum += x;
			n_par[3]++;
			x = x / 3;
		}
	}
	if (n_par[0] == n_par[1] && n_par[2] == n_par[3])
		cout << sum;
	else
		cout << '0';
	
	return 0;
}