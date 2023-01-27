/*
#include <iostream>
using namespace std;
int N;
int homePaint[1001][3];
long long dp[1001][3];
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 3; j++)
			cin >> homePaint[i][j];
	}
	dp[1][0] = homePaint[1][0]; dp[1][1] = homePaint[1][1]; dp[1][2] = homePaint[1][2];
	for (int i = 2; i <= N; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + homePaint[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + homePaint[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + homePaint[i][2];
	}
	cout << min(dp[N][0], min(dp[N][1], dp[N][2]));
	return 0;
}
*/