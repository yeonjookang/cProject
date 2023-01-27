/*
#include <iostream>
using namespace std;
int N;
long long map[101][101];
long long dp[101][101];
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> map[i][j];
	}
	dp[0][0] = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] != 0) {
				if (dp[i][j] != 0) {
					int d = map[i][j];
					int l = j + map[i][j];
					int r = i + map[i][j];
					dp[i][l] += dp[i][j];
					dp[r][j] += dp[i][j];
				}
			}
		}
		
	}
	cout << dp[N - 1][N - 1];

	return 0;
}
*/