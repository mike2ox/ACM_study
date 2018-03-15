#include<iostream>
#include<math.h>
using namespace std;

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
int arithmetic_m(int arr[], int n_arr) {
	int mean = 0;
	for (int a = 0; a < n_arr; a++)
		mean += arr[a];
	mean = ((double)mean / (double)n_arr);
	return ceil(mean);
}

int middle_val(int arr[], int n_arr) {
	int* arranged = insertsort(arr, n_arr);
	// printresult(arranged, n_arr);
	int mid = 0;
	int mid1 = 0;

	if (n_arr % 2 == 1)
		mid = arranged[n_arr / 2];	
	else {
		mid = arranged[(n_arr-1)/ 2];
		mid1 = arranged[n_arr / 2];
		int t = arithmetic_m(arranged, n_arr);
		if (abs(t - mid) > abs(t - mid1))
			mid = mid1;
	}

	return mid;
}
int mode_val(int arr[], int n_arr) {
	int mode = 0;
	return mode;
}
int range(int arr[], int n_arr) {
	int* arranged = insertsort(arr, n_arr);
	int scale = abs(arranged[n_arr-1]-arranged[0]);
	
	return scale;
}

int main() {
	int n_arr;
	int e_arr = 0;

	cin >> n_arr;
	int* arr = new int[n_arr];

	if (n_arr <= 5e+5 && n_arr >= 1) {

		for (int i = 0; i < n_arr; i++) {
			cin >> e_arr;
			if (abs(e_arr) <= 4e+3)
				arr[i] = e_arr;
			else
				i--;
		}
		system("cls");
		
		int a_mean = arithmetic_m(arr, n_arr);
		int mid = middle_val(arr, n_arr);
		int mode = mode_val(arr, n_arr); // TODO
		int scale = range(arr, n_arr);

		cout << a_mean << endl << mid << endl << mode << endl<< scale;

		delete arr;
	}
	return 0;
}

