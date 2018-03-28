/*
*	author : quisutdeus7
*	swexpert : desert cafe no9
*	status : unsolved(2 success in 10)
*/
#include<iostream>
using namespace std;

#define MAX 7

char code[51][101];
int decodenum[62] = {-1,};
int success_code[9] = {};		//정상적인 암호코드의 합 
int check;
int N, M;				//hight, width
int n=0, m = 0;
int n_T;				//number of testcase
bool findcode = false;

void decode(int t);
int main() {
	cin >> n_T;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> code[i][j];
		}
	}

	for (int j = 0; j < n_T; j++) {
		cout << '#' << j + 1 << " ";
		decode(j + 1);
	}

	return 0;
}

void decode(int t) {

	//char -> int 변환위한 array
	decodenum[13] = 0;
	decodenum[25] = 1;
	decodenum[19] = 2;
	decodenum[61] = 3;
	decodenum[35] = 4;
	decodenum[49] = 5;
	decodenum[47] = 6;
	decodenum[59] = 7;
	decodenum[55] = 8;
	decodenum[11] = 9;

	for (int i = 0; i < N; i++) {
		for (int j = M - 1; j >= 0; j--) {
			if (code[i][j] == '1' && !findcode) {
				//제약조건
				if (j < 55)
					continue;

				n = i; m = j;
				findcode = true;
				break;
			}
		}
		if (findcode) 
			break;
	}
	
	for (int j = m - 56; j < m; j+=7) {
		int sum = 0, temp =1;
		for (int k = 6; k >= 0; k--) {
			/*success_code[k+1] = code[n][j + 1] * 32
								+ code[n][j + 2] * 16
								+ code[n][j + 3] * 8
								+ code[n][j + 4] * 4
								+ code[n][j + 5] * 2
								+ code[n][j + 6] * 1;	//code의 제일 첫 element =1로 통일 이라 생략
			*/
			// 뒤에서 접근해서 이진수 계산
			if(code[n][j+k] == '1')
				sum |= (1 << k);
		}
		if (decodenum[sum] == -1)
			break;
		success_code[temp] = decodenum[sum];
		temp++;
	}



	for (int a = 0; a < 4;a++)
		check = 3 * success_code[2 * a + 1] + success_code[2*a];
	check += success_code[8];

	if (check % 10 == 0)
		cout << check << '\n';
	else
		cout << "0\n";
	
}