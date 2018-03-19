/*
*	author : quisutdeus7
*	BJO : no. 1427
*	status : solved
*/
#include<iostream>
using namespace std;
#define N_ARRANGE 10

char N[N_ARRANGE] = "0";
int N_num;

char* insertsort(char* arr, int n_arr) {
	int key = 0;
	int pre, next;

	for (next = 1; next < n_arr; next++) {
		key = (int)(arr[next]);
		pre = next - 1;

		while ((int)(arr[pre]) < key && pre >= 0) {
			arr[pre + 1] = arr[pre];
			pre--;
		}
		arr[pre + 1] = (char)key;
	}

	return arr;
}
void printresult(char* p_arr, int n_arr) {
	cout << p_arr;
	//for (int i = 0; i < n_arr; i++)
	//	cout << p_arr[i] << "\n";
}

int main() {
	cin >> N;

	for (int a = 0; a <= N_ARRANGE; a++) {
		if (N[a] == '\0') {
			N_num = a;
			break;
		}
	}

	insertsort(N, N_num);
	printresult(N, N_num);

	return 0;
}

