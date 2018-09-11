/*
*	author : mike2ox
*	BJO : 수 정렬하기2
*	descript : https://www.acmicpc.net/problem/2751
*	type : sort
*/
#include<iostream>
#include<vector>
using namespace std;

int N;
int pro[1000000];
int temp[1000000];

void merge(int low, int mid, int high){

	int i = low, j = mid + 1, k = low;
	   
	while (i <= mid && j <= high){

		if (pro[i] < pro[j])
			temp[k] = pro[i++];
		else
			temp[k] = pro[j++];
		k++;

	}


	if (i > mid)
		for (int idx = j; idx <= high; idx++)
			temp[k++] = pro[idx];

	else
		for (int idx = i; idx <= mid; idx++)
			temp[k++] = pro[idx];

	for (int idx = low; idx <= high; idx++)
		pro[idx] = temp[idx];

}

void mergeSort(int low, int high){

	if (high > low)	{

		int mid = (low + high) / 2;
		mergeSort(low, mid);
		mergeSort(mid + 1, high);
		merge(low, mid, high);

	}
}

int main() {

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> pro[i];
	}

	mergeSort(0, N - 1);

	for (int i = 0; i < N; i++) {
		cout << pro[i] << '\n';
	}

	system("pause");

	return 0;
}
