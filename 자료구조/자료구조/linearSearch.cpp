#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == x)
			return i;
	}
	return -1;
}

int BinarySearch(int arr[], int n, int x) {
	int l, r, m;
	l = 0; r = n - 1;
	while (l<=r) {
		m = (l + r) / 2;
		if (arr[m] > x) {
			r = m - 1;
		}
		else if (arr[m] < x) {
			l = m + 1;
		}
		else return m;
	}
	return -1;
}
int BinarySearch2(int arr[], int n, int x) {
	int m;
	m = n / 2;
	if (arr[m] == x) return m;
	else if (arr[m] < x) BinarySearch2(arr+m+1,n-m+1,x);
	else BinarySearch2(arr,m,x);
}
int main_1() {
	int arr[5] = { 1,2,3,4,5 };
	cout<<linearSearch(arr, 5, 3);
	cout<<BinarySearch(arr, 5, 3);
	cout << BinarySearch2(arr, 5, 3);
	return 0;
}