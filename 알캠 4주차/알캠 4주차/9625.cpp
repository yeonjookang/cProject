/*
#include <iostream>
using namespace std;
pair<int,int> dp[46];
int K;
int main() {
	cin >> K;
	dp[0] = make_pair(1, 0);
	for (int i = 1; i <= K; i++) {
		dp[i] = make_pair(dp[i - 1].second, dp[i - 1].first + dp[i - 1].second);
	}
	cout << dp[K].first << " " << dp[K].second;
	return 0;
}
*/