/*
#include <iostream>
using namespace std;
int N, K;
int cache[1001][1001];
int bino(int n, int k) {
	if (cache[n][k] == 0) {
		if (k == 0 || k == n) cache[n][k] = 1;
		else cache[n][k] =(bino(n - 1, k - 1) + bino(n - 1, k))%10007;
	}
	return cache[n][k];
}
int main() {
	cin >> N >> K;
	cout << bino(N, K);
	return 0;
}
*/