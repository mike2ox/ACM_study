/*
*	author : quisutdeus7
*	BJO : no. 1212
*	status : solve
*	type : practice problem[PP]
*/
#include <iostream> 
#include<string>
using namespace std;

string str;
int s_len;

string trans(char a) {

	string result;

	if (a == '0') 
		result = "000";
	else if (a == '1') 
		result = "001";
	else if (a == '2') 
		result = "010";
	else if (a == '3') 
		result = "011";
	else if (a == '4') 
		result = "100";
	else if (a == '5') 
		result = "101";
	else if (a == '6')
		result = "110";
	else if (a == '7') 
		result = "111";
	return result;
}
string last(char a) {
	string result;
	if (a == '1') 
		result = "1";
	else if (a == '2')
		result = "10";
	else if (a == '3')
		result = "11";
	else if (a == '4')
		result = "100";
	else if (a == '5')
		result = "101";
	else if (a == '6')
		result = "110";
	else if (a == '7')
		result = "111";
	return result;
}

int main()
{	
	cin >> str;
	s_len = str.length();

	if (str == "0" && s_len == 1) {
		cout << 0;
		return 0;
	}

	cout << last(str[0]);
	
	for (int i = 1; i<s_len; i++)
		cout << trans(str[i]);

	return 0;

}