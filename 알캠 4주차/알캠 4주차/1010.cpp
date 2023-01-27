/*
#include <iostream>
using namespace std;
int dp[31][31];
int N, M, T;
int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		//초기값 설정
		for (int j = 1; j <= M; j++)
			dp[1][j] = j;
		//조합 이용하여 dp 사용
		for (int k = 2; k <= N; k++) {
			for (int p = 2; p <= M; p++) {
				dp[k][p] = dp[k - 1][p - 1] + dp[k][p - 1];
			}
		}
		cout << dp[N][M] << "\n";

	}
	return 0;
}
*/