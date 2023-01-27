/*
//bfs로 미로찾기
#include <iostream>
#include <string>
#include <queue>
#include <utility>
using namespace std;

int N, M;
int map[101][101];
int visited[101][101];
int dist[101][101]; //이동거리

queue<pair<int,int>> q;

int dy[4] = { 0,1,0,-1 };
int dx[4] = { 1,0,-1,0 };


bool is_valid_coord(int x, int y) {
	return y < M && 0 <= y && x < N && 0 <= x;
}

void bfs(int sx,int sy) {
	
	visited[sx][sy] = 1;
	q.push(make_pair(sx, sy));
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (is_valid_coord(nx, ny) && map[nx][ny] != 0&&visited[nx][ny]!=1) {
				visited[nx][ny] = 1;
				q.push(make_pair(nx, ny));
				dist[nx][ny] = dist[x][y] + 1;
			}
		}
	}
	
}
int main() {
	cin >> N >> M;
	//map 정보 입력받기
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		for (int j = 0;j < M; j++) {
			map[i][j] = str[j] - '0';
		}
	}
	//시작점
	dist[0][0] = 1;
	bfs(0, 0);

	cout << dist[N - 1][M - 1];

	return 0;
}
*/
