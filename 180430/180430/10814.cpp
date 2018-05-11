/*
*	author : quisutdeus7
*	BJO : no. 10814
*	status :solve. but i used vector STL
*	type : practice problem[PP]
*/
#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int N;
struct node {
	string  name;
	int age, n;
	
};

bool compare(const node &a, const node &b) {
	if (a.age < b.age)
		return true;
	else if (a.age == b.age) {
		if (a.n < b.n)
			return true;
	}
	return false;
}


int main() {
	cin >> N;
	vector<node> xyz(N);

	for (int i = 0; i < N; i++) {
		cin >> xyz[i].age >> xyz[i].name;
		xyz[i].n = i+1;
	}
	sort(xyz.begin(), xyz.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << xyz[i].age << " " + xyz[i].name<< "\n";
	}

	return 0;
}