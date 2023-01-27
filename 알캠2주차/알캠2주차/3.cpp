#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main_3() {
	int N, M;
	cin >> N >> M;
	priority_queue<int> c;
	vector<int> w(M);
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		c.push(x);
	}
	for (int i = 0; i < M; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < M; i++) {
		if (c.top() < w[i]) {
			cout << "0";
			return 0;
		}
		else {
			int tmp = c.top() - w[i];
			c.pop();
			c.push(tmp);
		}
	}
	cout << "1";
	return 0;
}