#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main_5() {
	int N, M;
	cin >> N >> M;
	priority_queue<int> present;
	vector<int> child(M);
	for (int i = 0; i < N; i++) {
		int x; cin >> x; present.push(x);
	}
	for (int i = 0; i < M; i++) {
		cin >> child[i];
	}
	for (int i = 0; i < M; i++) {
		if (child[i] > present.top())
		{
			cout << "0";
			return 0;
		}
		else {
			int tmp = present.top() - child[i];
			present.pop();
			present.push(tmp);
		}
	}
	cout << "1";
	return 0;
}