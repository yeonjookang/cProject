/*
#include <iostream>
using namespace std;
int N;
long long dp[1001][10];
int main() {
	cin >> N;
	dp[1][0] = dp[1][1] = dp[1][2] = dp[1][3] = dp[1][4] = dp[1][5] = dp[1][6] = dp[1][7] = dp[1][8] = dp[1][9] = 1;
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int s = 0; s <= j; s++) {
				dp[i][j] += dp[i - 1][s];
				dp[i][j] %= 10007;
			}
		}
	}
	int result = 0;
	for (int i = 0; i <= 9; i++)
		result += dp[N][i];
	cout << result % 10007;;
	return 0;
}
*/