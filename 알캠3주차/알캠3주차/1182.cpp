#include <iostream>
using namespace std;
int N, S;
int nums[21];
int cnt = 0;
void dfs(int n,int tot) {
	if (n == N) {
		if (tot == S) cnt++;
		return;
	}
	dfs(n + 1, tot);
	dfs(n + 1,tot+nums[n]);
}
int main() {
	cin >> N >> S;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}
	dfs(0, 0);
	if (S == 0) cnt--;
	cout << cnt;
	return 0;
}