/*
#include <iostream>
using namespace std;
int N, M;
int vip[10];
int dp[10];
int arr[10];
int main() {
	cin >> N>>M;
	for (int i = 0; i < M; i++)
	{
		int x; cin >> x;
		vip[x] = 1;
	}
	vip[0] = 0;
	//�Ǻ���ġ ���� ���
	dp[0] = dp[1] = 1;
	for (int i = 2; i <= N; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	//DP
	for (int i = 1; i <= N; i++) {
		if (vip[i] == 1)
			arr[i] = 0;
		else if (vip[i - 1] == 1)
			arr[i] = 1;
		else
			arr[i] = arr[i - 1] + 1;
	}
	int result = 1;
	for (int i = 1; i <= N; i++)
	{
		if (arr[i] == 0)
		{
			//vip �¼��� �������� ���� ���� ���� ���
			if (arr[i - 1] == 0)
				continue;
			else
				result *= dp[arr[i - 1]];
		}
		//�� ������ ���ܵ� ���
		if (i == N) {
			if (arr[i] != 0)
				result *= dp[arr[i]];
		}
	}
	cout << result;
	return 0;
}
*/