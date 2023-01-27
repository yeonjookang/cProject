/*
#include <iostream>
using namespace std;
int N, M;
int map[1001][1001];
int cache[1001][1001];

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int x; cin >> x;
			map[i][j] = x;
		}
	}
	//초기값 설정
	for (int i = 0; i < M; i++) 
		cache[0][i] = map[0][i];
	//DP
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 1) {
				if (j > 0)
					cache[i][j] += cache[i - 1][j - 1];
				if (j < M - 1)
					cache[i][j] += cache[i - 1][j + 1];
				cache[i][j] += cache[i - 1][j];
				cache[i][j] %= 1000000007;
			}
		}
	}
	int result = 0;
	for (int i = 0; i < M; i++) {
		result = (result+cache[N - 1][i])%1000000007;
	}
	cout << result;
	return 0;
}
*/