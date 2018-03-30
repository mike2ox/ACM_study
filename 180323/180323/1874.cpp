/*
*	author : quisutdeus7
*	BJO : no. 1874
*	status : solved
*/
#include<iostream>
#include<string>
using namespace std;

int stack[100001];
string output = "";

int n_T;		//number of testcase
int inputdata;	//
int cur_max = 0;	//현재 stack의 최고 value
int i_max = 0;		//역대 max value
int cur_index = 0;

int main() {
	cin >> n_T;

	for (int i = 0; i < n_T; i++) {
		cin >> inputdata;
		if (inputdata > i_max) {
			for (int i = cur_index; i_max < inputdata; i++) {
				stack[i + 1] = i_max + 1;
				output += "+\n";
				cur_index++;
				i_max++;
			}
			//cur_max = max;
			//max = inputdata;
		}
		else if (inputdata < stack[cur_index]) {
			cout << "NO" << '\n';
			return 0;
		}
		//cur_max--;
		cur_index--;
		if (i == n_T - 1)
			output += "-";
		else
			output += "-\n";

	}
	cout << output << "\n";

	return 0;
}