#include <iostream>
using namespace std;
//백설공주문제
int main_4() {
	int N;
	int arr[9];
	for (int i = 0; i < 9; i++) {
		cin >> N;
		arr[i] = N;
	}
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		sum += arr[i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i+1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j) continue;
					cout << arr[k] << endl;
				}
				return 0;
			}
		}
	}
	return 0;
}

