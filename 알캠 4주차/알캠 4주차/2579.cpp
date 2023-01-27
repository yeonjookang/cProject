/*
#include <iostream>
using namespace std;
int dp[301];
int N;
int stair[301];
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int x; cin >> x; stair[i] = x;
	}
	//초기값 저장
	dp[0] = 0;
	dp[1] = stair[1];
	dp[2] = stair[2] + stair[1];
	//DP
	if (N >= 3) {
		for (int i = 3; i <= N; i++) {
			dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i] + stair[i - 1]);
		}
	}
	cout << dp[N];
	return 0;
}
*/