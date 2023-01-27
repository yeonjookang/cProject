#include <iostream>
#include <memory>
using namespace std;

void selectionSort(int arr[],int n) {
	int j,least;
	for (int i = 0; i < n; i++) {
		least = i;
		for (j = i + 1; j < n; j++)
			if (arr[least] > arr[j]) least = j;
		int tmp = arr[i];
		arr[i] = arr[least];
		arr[least] = tmp;
	}
}
void selectionSort2(int arr[], int n) {
	int least = 0;
	if (n == 0) return;
	for (int i = 1; i < n; i++) 
		if (arr[i] < arr[least]) least = i;
	int tmp = arr[0]; arr[0] = arr[least]; arr[least] = tmp;
	selectionSort2(arr + 1, n - 1);
}
void merge(int arr[], int m,int n) {
	unique_ptr<int[]> b = make_unique<int[]>(n);
	int i = 0; int j = m; int p = 0;
	while (i < m && j < n) {
		if (arr[i] <= arr[j]) b[p++] = arr[i++];
		else b[p++] = arr[j++];
	}
	while (i < m)
		b[p++] = arr[i++];
	while (j < n)
		b[p++] = arr[j++];
	for (int i = 0; i < n; i++)
		arr[i] = b[i];
}
void mergeSort(int arr[], int n) {
	int m = n / 2;
	if (n <= 1) return;
	mergeSort(arr, m); mergeSort(arr + m, n - m); merge(arr, m, n);
}

int main_2() {
	int arr[5] = { 8,2,5,9,1 };
    //selectionSort2(arr, 5);
	mergeSort(arr, 5);
	for(int i=0;i<5;i++)
		cout << arr[i];
	return 0;
}