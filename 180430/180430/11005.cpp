/*
*	author : quisutdeus7
*	BJO : no. 11005
*	status : unsolve
*	type : practice problem[PP]
*/
#include <iostream> 
#include<string.h>
using namespace std;

long N;
int B, cnt = 0;
int res[100] = { 0, };

int main() {
	cin >> N >> B;
	
	while (1) {
		int temp = N%B;
		res[cnt] = temp;

		if (N / B) 
			N = N / B;
		else 
			break;

		cnt++;
	}

	for (int i = cnt; i >= 0; i--) {
		if (res[i] < 10) 
			cout << res[i];
		else 
			printf("%c", res[i] + 55);
	}

	return 0;
}

