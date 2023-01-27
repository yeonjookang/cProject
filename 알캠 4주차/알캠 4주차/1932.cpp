/*
#include <iostream>
using namespace std;
int N;
long long tri[501][501];
long long dp[501][501];
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> tri[i][j];
		}
	}
	dp[1][1] = tri[1][1];
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1)
				dp[i][j] = dp[i - 1][j] + tri[i][j];
			else if (j == i)
				dp[i][j] = dp[i - 1][j - 1]+tri[i][j];
			else
				dp[i][j] = max(dp[i - 1][j] + tri[i][j], dp[i - 1][j - 1] + tri[i][j]);
		}
	}
	int mx = dp[N][1];
	for (int i = 2; i <= N; i++)
	{
		if (mx < dp[N][i])
			mx = dp[N][i];
	}
	cout << mx;
	return 0;
}
*/