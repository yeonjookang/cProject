/*
#include <iostream>
using namespace std;
int N;
int dp[1001];
int nums[1001];
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> nums[i];
	dp[1] = 1;
	int mx = 1;
	for (int i = 2; i <= N; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (nums[j] < nums[i]) {
				if (dp[i]< dp[j] + 1)
					dp[i] = dp[j] + 1;
			}
		}
		if (mx < dp[i])
			mx = dp[i];
	}
	cout << mx;
	return 0;
}
*/