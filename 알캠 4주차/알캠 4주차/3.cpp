/*
#include <iostream>
using namespace std;
int N, M;
int board[1000][1000];
long long cache[1000][1000];

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int x; cin >> x;
			board[i][j] = x;
		}
	}
	cache[0][0] = board[0][0];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (j == 0) {
				cache[i][j] = cache[i - 1][j] + board[i][j];
			}
			else if (i == 0) {
				cache[i][j] = cache[i][j - 1] + board[i][j];
			}
			else {
				cache[i][j] = max(max(cache[i - 1][j] + board[i][j], cache[i - 1][j - 1] + board[i][j]), cache[i][j - 1] + board[i][j]);
			}
		}
	}
	cout << cache[N-1][M-1];
	return 0;
}
*/