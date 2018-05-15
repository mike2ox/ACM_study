/*
*	author : quisutdeus7
*	BJO : no. 2745
*	status : unsolve
*	type : practice problem[PP]
*/
#include <iostream> 
#include<string.h>
using namespace std;
int b, result;
char a[10000];

int main() {

	cin >> a >> b;

	for (int i = 0; i < strlen(a); i++)	{

		int tmp = 1;
		for (int j = 0; j < i; j++)
			tmp *= b;

		if ('A' <= a[strlen(a) - i - 1] && a[strlen(a) - i - 1] <= 'Z')		{
			int k = 10;
			k += a[strlen(a) - i - 1] - 65;
			result += tmp * k;
		}
		else
			result += tmp * (a[strlen(a) - i - 1] - '0');
	}
	cout << result << '\n';
}

