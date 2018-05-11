/*
*	author : quisutdeus7
*	BJO : no. 10809
*	status : solve
*	type : practice problem[PP]
*/
#include<iostream>
#include<string>
using namespace std;

int arr[26];
int cnt = 0;
string str;

int main() {

	cin >> str;

	for (int i = 0; i < 26; i++)
		arr[i] = -1;

	for (int i = 0; i < str.size(); i++) {
		cnt = 0;
		for (int j = 0; j < 26; j++) {
			if (str[i] == (char)(j + 97)) {
				if (arr[j] > -1)
					continue;
				else
					arr[j] = i;
			}
		}
	}

	for (int i = 0; i < 26; i++)
		cout << arr[i] << ' ';

	return 0;
}