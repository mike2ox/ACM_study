#include<iostream>
#include<math.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {

	// number of array
	int n_l = m - l + 1;
	int n_r = r - m;

	int* t_l = new int[n_l];
	int* t_r = new int[n_r];

	for(int a = 0; a < n_l; a++)
		t_l[a] = arr[l + a];
	for (int b = 0; b < n_r; b++)
		t_r[b] = arr[(m + 1) + b];

	//index
	int first = 0;
	int second = 0;
	int k = 0;

	while (first <= n_l &&second <= n_r) {
		if (t_l[first] <= t_r[second]) {
			arr[k] = t_l[first];
			first++;
		}
		else {
			arr[k] = t_r[second];
			second++;
		}
		k++;
	}

	while (first < n_l) {
		arr[k] = t_l[first];
		first++;
		k++;
	}
	while (second < n_r) {
		arr[k] = t_r[second];
		second++;
		k++;
	}
	
	
}

// core sort algorithm : mergesort
int* mergesort(int arr[], int left, int right) {
	
	int mid = (right + left) / 2;

	// Recursion
	if (left < right) {
		mergesort(arr, left, mid);
		mergesort(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
	return arr;
}

void printresult(int* p_arr, int n_arr){
	
	for (int i = 0; i < n_arr; i++)
		cout << p_arr[i] << "\n";
}

int main() {
	int n_arr;
	int e_arr=0;

	cin >> n_arr;
	int* arr = new int[n_arr];

	if (n_arr <= 1e+6 && n_arr >= 1) {

		for (int i = 0; i < n_arr; i++) {
			cin >> e_arr;
			if (abs(e_arr) <= 1e+6)
				arr[i] = e_arr;
			else
				i--;
		}
		
		int* result = mergesort(arr,0, n_arr-1);
		printresult(result, n_arr);

		delete[] arr, result;
	}
	return 0;
}