/*
*	author : quisutdeus7
*	BJO : no. 11650
*	status :solve. but, no clear
*	type : practice problem[PP]
*/
#include <iostream>
using namespace std;

int N;
struct node {
	int x, y;
};
node xy[100000];



void quicksort(node arr[], int size) {
	node pivot = arr[0];
	int cursor = 0; 
	
	for (int i = 1; i < size; i++) {
		if (pivot.x > arr[i].x)	{
			cursor++; 
			swap(arr[cursor], arr[i]); 
		} 
		else if (pivot.y > arr[i].y) {
			cursor++;
			swap(arr[cursor], arr[i]);
		}
	} 
	swap(arr[0], arr[cursor]);
	if (cursor > 0) { 
		quicksort(arr, cursor); }
	if (cursor + 1 < size - 1) {
		quicksort(arr + cursor + 1, size - cursor - 1);
	}

}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> xy[i].x >> xy[i].y;
	}
	quicksort(xy, N);

	for (int i = 0; i < N; i++) {
		cout << xy[i].x << " " << xy[i].y << "\n";
	}

	return 0;
}