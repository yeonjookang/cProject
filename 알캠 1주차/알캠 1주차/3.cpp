#include <iostream>
using namespace std;
int main_3() {
	int N;
	int  sum = 0;
	int k;
	cin >> N;
	for (int i = 1; i < N + 1; i++) {
		k = i;
		while (k!=0) {
			int a=k %10;
			if (a == 3 || a == 6 || a == 9)
				sum++;
			k /= 10;
		}
	}
	cout << sum;
	return 0;
}