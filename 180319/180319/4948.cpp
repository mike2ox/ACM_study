/*
*	author : quisutdeus7
*	BJO : no. 4948
*	status : solved
*/
#include<iostream>
using namespace std;

#define MAX 246913
int N, prime[MAX] = { 1,1, };

int main() {

	//�����佺 ü ����
	for (int i = 2; i <MAX; i++) {
		if (!prime[i]) {
			for (int j = i+i; j <MAX; j += i)
				prime[j] = 1;
		}
	}

	while (1) {
		int count = 0;
		cin >> N;
		//input check
		if (!N)
			break;

		//���� count
		for (int a = N + 1; a <= 2 * N; a++) {
			if (!prime[a])
				count++;
		}
		cout << count <<'\n';
	}
	
	return 0;
}