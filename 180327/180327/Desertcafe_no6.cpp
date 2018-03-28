/*
*	author : quisutdeus7
*	swexpert : desert cafe no6
*	status : solved
*/
#include<iostream>
using namespace std;

int N[11][11];

int n_T;		//number of testcase
int value =1;		//elementº° value
int x = 0, y = -1;	//init index
int delta = 1;

void make_N(int size);
void init_num();

int main() {
	cin >> n_T;
	int* n_size = new int[n_T];		//max number

	for (int i = 0; i < n_T; i++) {
		cin >> n_size[i];
	}

	for (int j = 0; j < n_T; j++) {
		cout << '#' << j + 1 <<'\n';
		make_N(n_size[j]);
		init_num();
	}
	return 0;
}
// make array
void make_N(int size) {
	int temp = size;
	
	while (1) {
		for (int p = 0; p < size; p++) {
			y = y + delta;
			N[x+1][y+1] = value;
			value++;
		}
		size--;
		if (size < 0)
			break;
		for (int q = 0; q < size; q++) {
			x = x + delta;
			N[x + 1][y + 1] = value;
			value++;
		}
		delta = (-1)*delta;	//change direct
	}
	//print array
	for (int i = 0; i < temp; i++) {
		for (int j = 0; j < temp; j++) {
			cout << N[i + 1][j + 1] << " ";
		}
		cout << '\n';
	}
}

//init
void init_num() {
	value = 1;		//elementº° value
	x = 0;
	y = -1;	//init index
	delta = 1;
}