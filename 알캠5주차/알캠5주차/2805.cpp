/*
#include <iostream>
#include <algorithm>
using namespace std;
int N,M;
int trees[1000001];
//M을 기준으로 M 이상은 true 미만은 false
bool Check(int mid) {
	long long sum = 0;
	for (int i = 0; i < N; i++)
		if (trees[i] > mid) sum += trees[i] - mid;
	return sum >= M;
}
int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> trees[i];
	int lo = 0; int hi = trees[N - 1];
	while (lo + 1 < hi) {
		int mid = (lo + hi) / 2;
		if (Check(mid))
			lo = mid;
		else
			hi = mid;
	}
	cout << lo << "\n";
	return 0;
}
*/