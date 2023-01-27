/*
#include <iostream>
using namespace std;
int dp[12];
int T, n;
int main() {
	dp[1] = 1; dp[2] = 2, dp[3] = 4;
	cin >> T;
	while (T--) {
		cin >> n;
		if (n >= 4) {
			for (int i = 4; i <= n; i++) {
				dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
			}
		}
		cout << dp[n] << "\n";
	}
	return 0;
}
*/