/*
#include <iostream>
using namespace std;
int dp[1001];
int nums[1001];
int N;
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> nums[i];
	int mx = 1;
	for (int i = 1; i <= N; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (nums[j] > nums[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		mx = max(mx, dp[i]);
	}
	cout << mx;
	return 0;
}
*/