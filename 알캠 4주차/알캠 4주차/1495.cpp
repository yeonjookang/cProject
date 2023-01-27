/*
#include <iostream>
using namespace std;
int N, S, M;
//곡 개수, 시작볼륨, 최대볼륨
int V[51];
long long dp[51][1001];
//1이면 가능 -1이면 불가능
int main() {
	cin >> N >> S >> M;
	for (int i = 1; i <= N; i++)
		cin >> V[i];
	//초기값 설정
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= M; j++)
			dp[i][j] = -1;
	}
	dp[0][S] = 1;
	//DP
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= M; j++) {
			if (dp[i - 1][j] == 1) {
				if (j + V[i] <= M)
					dp[i][j + V[i]] = 1;
				if (j - V[i] >= 0)
					dp[i][j - V[i]] = 1;
			}
		}
	}
	int ans = -1;
	for (int j = 0; j <= M; j++) {
		if (dp[N][j] == 1)
			ans = max(ans, j);
	}
	cout << ans;

	return 0;
}
*/