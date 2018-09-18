/*
*	author : mike2ox
*	BJO : k번째 수
*	descript : https://www.acmicpc.net/problem/11004
*	type : sort
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long * an;
long long * temp;

int n, k;
long long a;

/*void merge(int low, int mid, int high) {
	int i = low, j = mid + 1, k = low;

	while (i <= mid && j <= high) {
		if (an[i] < an[j])
			temp[k] = an[i++];
		else
			temp[k] = an[j++];
		k++;
	}

	if (i > mid)
		for (int idx = j; idx <= high; idx++)
			temp[k++] = an[idx];

	else
		for (int idx = i; idx <= mid; idx++)
			temp[k++] = an[idx];

	for (int idx = low; idx <= high; idx++)
		an[idx] = temp[idx];

}

void mergesort(int low, int high) {
	if (high > low) {
		int mid = (low + high) / 2;
		mergesort(low, mid);		//좌측
		mergesort(mid + 1, high);		//우측
		merge(low, mid, high);
	}
}*/

int main() {
	ios_base::sync_with_stdio("false");
	cin >> n >> k;

	an = new long long[n];
	temp = new long long[n];

	for (int i = 0; i < n; i++)
		cin >> an[i];

	//mergesort(0, n - 1);

	sort(an[0], an[n-1]);

	cout << an[k-1] << '\n';

	delete[] an;
	delete[] temp;
	system("pause");
	return 0;
}
