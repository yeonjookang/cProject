#include <iostream>
#include <unordered_set>
using namespace std;
int main_4() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	while (1) {
		int N, M;
		cin >> N >> M;
		unordered_set<int> nums;
		if (N == 0 && M == 0) break;
		for (int i = 0; i < N; i++) {
			int x;
			cin >> x;
			nums.insert(x);
		}
		for (int i = 0; i < M; i++) {
			int x;
			cin >> x;
			nums.insert(x);
		}
		cout << N + M - nums.size() << "\n";
	}

	return 0;
}
