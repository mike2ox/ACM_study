/*
*	author : quisutdeus7
*	BJO : no. 10808
*	status : solve 
*	type : practice problem[PP]
*/
#include<iostream>
#include<string>
using namespace std;

int arr[26] = {0,};
string str;

int main() {

	cin >> str;

	for (int i = 0; i < str.size(); i++)
		for (int j = 0; j < 26; j++)
			if (str[i] == 'a' + j)
				arr[j]++;
	
	for (int i = 0; i < 26; i++)
			cout << arr[i] << ' ';

	return 0;
}
