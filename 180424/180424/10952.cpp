#include<iostream>
using namespace std;

int a, b;

int main() {

	while (cin >> a >> b) {
		if (a == 0 && b == 0)
			return 0;
		cout << a + b << "\n";
	}
}