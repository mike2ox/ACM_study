/*
*	author : quisutdeus7
*	swexpert : desert cafe no7
*	status : unsolved(8 success in 10)
*/
#include<iostream>
using namespace std;

#define MAX 100

int N[101][101] = {};
int n_T[11];		//number of testcase
int n_t=1;

int ck_max();
void init();
int main() {
	
	do {
		cin >> n_T[n_t];
		

		for (int i = 0; i < MAX; i++) {
			for (int h = 0; h <MAX; h++) {
				cin >> N[i + 1][h + 1];
			}
		}
		n_T[n_t] = ck_max();
		init();
		n_t++;

	} while (n_t < 10);
	
	for (int j = 0; j < 10; j++) 
		cout << '#' << j + 1 << ' ' << n_T[j+1]<<'\n';
	
	return 0;
}
int ck_max() {
	int max=0, compare=0;
	// 대각선 합
	for (int i = 0; i < MAX;) {
		for (int j = 0; j < MAX; j++) {
			max += N[i + 1][j + 1];
			compare += N[i + 1][MAX - j];
			i++;
		}
	}
	if (max < compare)
		max = compare;
	
	//init
	compare = 0;
	
	//sum
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++){
			N[i + 1][0] += N[i + 1][j+1];	// 행
		}
	}
		
		
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			N[0][i+1] += N[j+1][i + 1];	// 열 
		}
	}
		
	
	for (int k = 0; k < MAX; k++) {
		if (max < N[k + 1][0])
			max = N[k + 1][0];
		else if (max < N[0][k + 1])
			max = N[0][k + 1];
	}
	return max;
}

void init() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			N[i + 1][0] = 0;	// 행
		}
	}

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			N[0][i + 1] = 0;	// 열 
		}
	}
}