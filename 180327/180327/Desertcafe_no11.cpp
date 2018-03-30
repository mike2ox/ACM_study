/*
*	author : quisutdeus7
*	swexpert : desert cafe no11
*	status : unsolved
*/
#include<iostream>
using namespace std;

int n_T;		//number of testcase
int R, C;		//row, column
char hyeok[21][21] = {};
bool check = false;

int main() {
	
	cin >> n_T;
	for (int i = 0; i < n_T; i++) {
		cin >> R >> C;
		
		for (int j = 0; j < R; j++)
			cin >> hyeok[j];

		//check @ char
		for (int j = 0; j < R; j++) {
			for (int k = 0; k < C; k++) {
				if (hyeok[i][j] == '@')
					check = true;
			}
			if (check)
				break;
		}
		

	
		
		if (check)
			cout << '#' << i + 1 << "YES\n";
		else
			cout << '#' << i + 1 << "NO\n"; 
			
	}

	return 0;
}