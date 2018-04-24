/*
*	author : quisutdeus7
*	BJO : no. 11721
*	status : solved
*/
#include<iostream>
#include<string>
using namespace std;
 
string input;	//input data

int main() {
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (i != 0 && i % 10 == 0)
			cout << '\n';
		cout << input[i];
	}
	
	return 0;
}