#include<iostream>
#include<math.h>
using namespace std;

// core sort algorithm : insertsort
int* insertsort(int arr[], int n_arr) {
	int key = 0;
	int pre, next;

	for (next = 1; next < n_arr; next++) {
		key = arr[next];
		pre = next - 1;

		while (arr[pre] > key && pre >= 0) {
			arr[pre + 1] = arr[pre];
			pre--;
		}
		arr[pre + 1] = key;
	}

	return arr;
}
void printresult(int* p_arr, int n_arr) {

	for (int i = 0; i < n_arr; i++)
		cout << p_arr[i] << "\n";
}

int main() {
	int n_arr;
	int e_arr = 0;

	cin >> n_arr;
	int* arr = new int[n_arr];

	if (n_arr <= 1000 && n_arr >= 1) {

		for (int i = 0; i < n_arr; i++) {
			cin >> e_arr;
			if (abs(e_arr) <= 1000)
				arr[i] = e_arr;
			else
				i--;
		}

		int* result = insertsort(arr, n_arr);
		printresult(result, n_arr);

		delete[] arr, result;
	}
	return 0;
}