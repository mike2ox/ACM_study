/*
*	author : quisutdeus7
*	BJO : no. 11652
*	status :solve. but i used algorithm STL
*	type : practice problem[PP]
*/
#include <iostream>
#include <algorithm>
using namespace std;

long long card[1000000];
long long answer;
int N;
int result_cnt = 1;
int t_cnt = 1;

int main() {
	cin >> N;
	
	for (int i = 0; i < N; i++)
		cin >> card[i];

	sort(card, card + N); // sort

	answer = card[0]; // init

	for (int i = 1; i < N; i++) {
		if (card[i] == card[i - 1])
			t_cnt++;
		else t_cnt = 1;

		if (result_cnt < t_cnt) {
			result_cnt = t_cnt;
			answer = card[i];
		}
	}
	
	cout << answer << "\n";

	return 0;
}