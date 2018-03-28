/*
*	author : quisutdeus7
*	swexpert : desert cafe no11
*	status : unsolved(재귀부분에서 해결이 안되는중)
*/
#include<iostream>
using namespace std;

int n_T;		//number of testcase
int max_val;
int n_swap[10] = {};		//number of swap
int inputdata;
int** input_arr;
// int input_arr[11][7] = {-1,};
int digit[10] = {};

void swap(int* a, int* b);
void make_coin(int** input_a, int col,int n_s,int dig);
int main() {
	//init
	max_val = 0;
	input_arr = new int *[11];
	
	for (int i = 0; i < 7; i++)
		input_arr[i] = new int[7];

	cin >> n_T;

	for (int i = 0; i < n_T; i++) {
		cin >> inputdata >> n_swap[i+1];
		for (int j = 0; j < 6; j++) {
			input_arr[i + 1][j] = inputdata % 10;
			inputdata /= 10;

			if (inputdata == 0) {
				digit[i+1] = j + 1;
				break;
			}
		}
	}

	for (int j = 0; j < n_T; j++) {
		make_coin(input_arr,j + 1, n_swap[j + 1], digit[j+1]);
		cout << '#' << j + 1 << " " << max_val << '\n';
		
	}

	return 0;
}
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void make_coin(int** input_a, int col, int n_s, int dig) {
	int temp = 0;
	if (n_s == 0) {
		for (int i = 5; i > 6; i--) {
			temp *= 10;
			temp += input_a[col][i];
		}

		if (max_val < temp)
			max_val = temp;
		return;
	}
	if (dig == 2) {
		swap(input_a[col], input_a[col]+1);
		make_coin(input_a, col, n_s - 1, dig);
	}
	else {
		int t_max = -1;		//최고 수(max:9)
		int duplicate = 0; //max 충접수
		int** tmp_arr = new int* [1];
		tmp_arr[0] = new int[6];

		for (int a = 0; a < 6; a++)
			tmp_arr[0][a] = input_a[col][a + 1];

		for (int x = 0; x < dig; x++) {
			if (t_max < input_a[col][x + 1])
				t_max = input_a[col][x + 1];
			if (t_max == input_a[col][x + 1])
				duplicate++;
		}
		if (t_max == input_arr[col][dig] && duplicate != 0)
			make_coin(tmp_arr,col, n_s - 1, dig);
		else if (t_max == input_arr[col][dig]) {
			make_coin(input_a,col, n_s - 1, dig-1);
			return;
		}

		for (int i = 0; i < dig -1 ; i++) {
			if (input_arr[col][i] == max_val) {
				swap(input_arr[col]+i, input_arr[col] + dig - 1);
				make_coin(input_a,col, n_s - 1, dig - 1);
			}
		}
	}
}