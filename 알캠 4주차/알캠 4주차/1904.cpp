/*
#include <iostream>
using namespace std;
long long dp[1000001];
int N;
int main() {
	cin >> N;
	dp[1] = 1; dp[2] = 2; dp[3] = 3;
	for (int i = 4; i <= N; i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
	cout << dp[N];
	return 0;
}
*/