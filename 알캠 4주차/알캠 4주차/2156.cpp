#include <iostream>
using namespace std;
int N;
long long dp[101][10];
int main() {
	cin >> N;
	//�ʱⰪ 
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}
	//DP
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j<= 9; j++) {
			if (j == 0)
				dp[i][j] = (dp[i - 1][j + 1])%1000000000;
			else if (j == 9)
				dp[i][j] = dp[i - 1][j - 1] % 1000000000;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	}
	int result=0;
	for (int i = 0; i <= 9; i++)
		result = (result+dp[N][i]) % 1000000000;
	cout << result;
}