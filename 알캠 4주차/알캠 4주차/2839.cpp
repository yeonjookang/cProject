/*
#include <iostream>
using namespace std;
int N;
int dp[5000];
int main() {
	cin >> N;
	dp[3] = 1; dp[5] = 1;
	//만약 dp[i]가 0이라면 만들 수 없는 수라는 것.. 조건 필요!
	for (int i = 6; i <= N; i++) {
		if (dp[i - 3]!=0 && dp[i - 5]!=0)
			dp[i] = min(dp[i - 3] + 1, dp[i - 5] + 1);
		else if (dp[i - 3] ==0&& dp[i - 5]!=0)
			dp[i] = dp[i - 5] + 1;
		else if (dp[i - 3]!=0 && dp[i - 5]==0)
			dp[i] = dp[i - 3] + 1;
	}
	if (dp[N] == 0) cout << -1;
	else cout << dp[N];

	return 0;
}
*/