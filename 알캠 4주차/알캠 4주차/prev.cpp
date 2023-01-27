/*
#include <iostream>
#include <queue>
using namespace std;
int N, M;
queue<pair<int, int>> q;
int map[101][101];
bool visited[101][101];
int dist[101][101];

int dy[4] = { 0,1,0,-1 };
int dx[4] = { 1,0,-1,0 };

bool is_valid_coord(int x, int y) {
	return x >= 0 && y >= 0 && x < N && y < M;
}

void bfs(int sx, int sy) {
	visited[sx][sy] = true;
	q.push(make_pair(sx, sy));
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (is_valid_coord(nx, ny) && !visited[nx][ny] && map[nx][ny] == 1) {
				q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
				dist[nx][ny] = dist[x][y] + 1;
			}
		}
	}
}
int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			map[i][j] = str[j] - '0';
		}
	}
	dist[0][0] = 1;
	bfs(0, 0);
	cout << dist[N - 1][M - 1];

	return 0;
}
*/
