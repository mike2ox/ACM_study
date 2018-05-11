/*
*	author : quisutdeus7
*	BJO : no. 10820
*	status : solve
*	type : practice problem[PP]
*/
#include<iostream>
#include<string>
using namespace std;

string str;
int arr[4];

int main() {
	while (1) {
		getline(cin, str);
		if (str == "")
			break;
		for (int i = 0; i < 4; i++)
			arr[i] = 0;
		for (int i = 0; i<str.size(); i++) {
			if ('a' <= str[i] && str[i] <= 'z')
				arr[0]++;
			else if ('A' <= str[i] && str[i] <= 'Z')
				arr[1]++;
			else if ('0' <= str[i] && str[i] <= '9')
				arr[2]++;
			else
				arr[3]++;
		}
		for (int i = 0; i < 4; i++)
			cout << arr[i] << ' ';
		cout << '\n';

	}
}