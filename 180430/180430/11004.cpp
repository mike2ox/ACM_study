/*
*	author : quisutdeus7
*	BJO : no. 11004
*	status :solve. but time over
*	type : practice problem[PP]
*/
#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int A[5000001];

int part(int arr[], int left, int right);
int quicksearch(int arr[], int left, int right, int k);

int main() {
	
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		cin >> A[i];

	K--;
	cout << quicksearch(A, 0 , N-1, K);



	return 0;
}
void arr_swap(int arr[], int small, int big) {
	int t = arr[small];
	arr[small] = arr[big];
	arr[big] = t;
}
int part(int arr[], int left, int right) {
	int piv = arr[left];
	int small = left + 1;
	int big = right;

	while (small <= big) {
		while (small <= right && piv >= arr[small])
			small++;
		while (big >= left + 1 && piv <= arr[small])
			big--;
		if (small <= big)
			arr_swap(arr, small, big);
	}
	arr_swap(arr, left, big);

	return big;
}
int quicksearch(int arr[], int left, int right, int k) {
	int pivot = part(arr, left, right);
	if (pivot == k)
		return arr[pivot];

	else if (pivot > k)
		quicksearch(arr, left, pivot - 1, K);
	else
		quicksearch(arr, pivot + 1, right, K);
};
