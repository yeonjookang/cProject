/*
#include <iostream>
using namespace std;
long long dp[1001];
int T;
int main() {
	int N;
	cin >> T;
	dp[1] = 1; dp[2] = 1; dp[3] = 1; dp[4] = 2; dp[5] = 2;
	while (T--) {
		cin >> N;
		for (int i = 6; i <= N; i++)
			dp[i] = dp[i - 5] + dp[i - 1];
		cout << dp[N]<<"\n";
	}
	return 0;
}
*/