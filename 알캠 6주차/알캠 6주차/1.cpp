/*
#include <iostream>
#include <vector>
#include <algorithm>
int N, M;
using namespace std;
int trees[1000001];

bool check(int mid) {
	long long sum = 0;
	for (int i = 0; i < N; i++) {
		if (trees[i] - mid > 0) sum += trees[i] - mid;
	}
	if (sum >= M) return true;
	else return false;
}
int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> trees[i];
	sort(trees, trees + N);
	int lo = 0; int hi = trees[N - 1];
	while (lo + 1 < hi) {
		int mid = (lo + hi) / 2;
		//언제 lo 값을 바꾸고 언제 hi값을 바꾸는지**
		if (check(mid))
			lo = mid;
		else
			hi = mid;
	}
	//무엇을 출력하는지 **
	cout << lo;
	return 0;
}
*/