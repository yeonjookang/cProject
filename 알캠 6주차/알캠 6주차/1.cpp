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
		//���� lo ���� �ٲٰ� ���� hi���� �ٲٴ���**
		if (check(mid))
			lo = mid;
		else
			hi = mid;
	}
	//������ ����ϴ��� **
	cout << lo;
	return 0;
}
*/