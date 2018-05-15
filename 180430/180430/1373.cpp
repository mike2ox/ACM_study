/*
*	author : quisutdeus7
*	BJO : no. 1373
*	status : solve
*	type : practice problem[PP]
*/
#include<iostream>
#include<string.h>
using namespace std;
char arr[1000003] = { '0', '0' };

int main()
{
	scanf("%s", arr+2);

	int alen = strlen(arr);

	for (int i = alen % 3; i<alen; i += 3)
		printf("%c", arr[i] * 4 + arr[i + 1] * 2 + arr[i + 2] - '0' * 6);

	return 0;
}

