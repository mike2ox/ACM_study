/*
*	author : quisutdeus7
*	BJO : no. 1158
*	status : solve
*	type : practice problem[PP]
*/
#include<iostream>
#include<string>
#include<queue>
using namespace std;

void Josepus(int N, int M) {
	queue<int> q;
	for (int i = 1; i <= N; ++i) q.push(i);
	cout << "<";
	while (!q.empty()) {
		for (int i = 0; i < M - 1; ++i) {
			q.push(q.front());
			q.pop();
		}

		cout << q.front();
		q.pop();
		if (!q.empty()) cout << ", ";

	}
	cout << ">";

	return;
}

int main() {
	int N, M;

	cin >> N >> M;

	Josepus(N, M);


	return 0;
}



