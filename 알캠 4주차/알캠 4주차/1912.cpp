/*
#include <iostream>
using namespace std;
int T, N;
int nums[100001];
int dp[100001];
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> nums[i];
	dp[1] = nums[1];
	int mx = dp[1];
	for (int i = 2; i <= N; i++) {
		dp[i] = max(nums[i], dp[i - 1] + nums[i]);
		if (mx < dp[i])
			mx = dp[i];
	}
	cout << mx << "\n";
	return 0;
}
*/