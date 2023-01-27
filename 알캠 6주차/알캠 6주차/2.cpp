//라이브코딩 14503.로봇청소기
//시뮬레이션 문제(로직 제시)
#include <iostream>
using namespace std;
int N, M;
int y, x, d;
//0은 빈칸,1은 벽,2는 청소한 칸
int map[51][51];
int visited[51][51];

//(d+3)%4 ->왼쪽 로테이션
//(d+1)%4 ->오른쪽 로테이션
//(d+2)%4 ->후진

//북동남서
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

bool checkLeft() {
	while (1) {
		//#2-1.왼쪽 방향에 아직 청소하지 않은 공간이 존재한다면~
		int left_d = (d + 3) % 4;
		int left_y = y + dy[left_d];
		int left_x = x + dx[left_d];
		if (map[left_y][left_x] == 0) {
			d = left_d;
			y = left_y;
			x = left_x;

			continue;
		}
		//#2-2.왼쪽 방향에 청소할 공간이 없다면, ~
		else
			d = left_d;
	}
}
int main() {
	cin >> N >> M;
	cin >> y >> x >> d;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			cin >> map[i][j];
	}

	//시뮬레이션 시작
	
	while (1) {
		//#1.현재 위치를 청소한다.
		map[y][x] = 2;

		//#2-1,2-2
		if (checkLeft()) 
			continue;

		//#2-3.네 방향 모두 청소가 이미 되어있거나 벽인 경우에는~
		int back_d = (d + 2) % 4;
		int back_y = y + dy[back_d];
		int back_x = x + dx[back_d];
		if (map[back_y][back_x] != 1)
		{
			y = back_y; 
			x = back_x;
		}
		//#2-4. 네 방향 모두 청소가 이미 되어있거나 벽이면서,~
		if (map[back_y][back_x] == 1)
			break;
	}

	//마지막 출력값은 map 에서 2의 개수
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M;j++){
			if (map[i][j] == 2) cnt++;
		}
	}
	cout << cnt;
	return 0;
}