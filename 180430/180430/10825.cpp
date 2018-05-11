/*
*	author : quisutdeus7
*	BJO : no. 10825
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
	string  s;
	int x, y,z;
	node(int a = 0, int b = 0, int c = 0) : x(a), y(b), z(c) {}
};

bool compare(const node &a, const node &b) {
	if (a.x > b.x)
		return true;
	else if (a.x == b.x) {
		if (a.y < b.y)
			return true;
		else if (a.y == b.y) {
			if (a.z > b.z)
				return true;
			else if (a.z == b.z)
				return a.s < b.s;
		}
	}

	return false;
	
}

int main() {
	cin >> N;
	vector<node> xyz(N);
	for (int i = 0; i < N; i++) {
		cin >> xyz[i].s >> xyz[i].x >> xyz[i].y >>  xyz[i].z;
	}
	sort(xyz.begin(), xyz.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << xyz[i].s << "\n";
	}

	return 0;
}