/*#include <iostream>
using namespace std;
int N;
int dp[1001];
int P[1001];
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> P[i];
	dp[1] = P[1];
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (dp[i] < dp[i- j] + P[j])
				dp[i] = dp[i - j] + P[j];
		}
	}
	cout << dp[N];
	return 0;
}
*/