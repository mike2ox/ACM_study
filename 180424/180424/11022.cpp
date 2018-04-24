#include<iostream>
using namespace std;

int n_T;		//test case
int a, b;


int main() {
	cin >> n_T;
	int* a = new int[n_T];
	int* b = new int[n_T];

	for (int i = 0; i < n_T; i++)
		cin >> a[i] >> b[i];
	

	for (int i = 0; i < n_T; i++)
		cout << "Case #"<<i+1<<": "<<  a[i] 
			<<" + "<<b[i] << " = " << a[i]+b[i] << "\n";

	delete a,b;

	return 0;
}