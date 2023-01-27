/*
#include <iostream>
using namespace std;
int N;
int dp[16];
int T[16];
int P[16];
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> T[i] >> P[i];
	for (int i = 1; i <= N; i++) {
		if (i + T[i]-1 <= 15 ) {
			dp[i + T[i] - 1] = max(dp[i + T[i] - 1], P[i] + dp[i - 1]);
			for (int j = i + T[i] - 1; j <= N;j++) {
				dp[j] = max(dp[j],dp[i + T[i] - 1]);
			}
		}
	}
	
	cout << dp[N];
	return 0;
}
*/