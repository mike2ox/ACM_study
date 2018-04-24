#include<iostream>
#include<string>
using namespace std;


string input;	//input data
int n_index;

int main() {
	while (1) {
		getline(cin, input);

		if (input == "")
			break;
		cout << input << '\n';
	}

	return 0;
}