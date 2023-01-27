//���̺��ڵ� 14503.�κ�û�ұ�
//�ùķ��̼� ����(���� ����)
#include <iostream>
using namespace std;
int N, M;
int y, x, d;
//0�� ��ĭ,1�� ��,2�� û���� ĭ
int map[51][51];
int visited[51][51];

//(d+3)%4 ->���� �����̼�
//(d+1)%4 ->������ �����̼�
//(d+2)%4 ->����

//�ϵ�����
int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

bool checkLeft() {
	while (1) {
		//#2-1.���� ���⿡ ���� û������ ���� ������ �����Ѵٸ�~
		int left_d = (d + 3) % 4;
		int left_y = y + dy[left_d];
		int left_x = x + dx[left_d];
		if (map[left_y][left_x] == 0) {
			d = left_d;
			y = left_y;
			x = left_x;

			continue;
		}
		//#2-2.���� ���⿡ û���� ������ ���ٸ�, ~
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

	//�ùķ��̼� ����
	
	while (1) {
		//#1.���� ��ġ�� û���Ѵ�.
		map[y][x] = 2;

		//#2-1,2-2
		if (checkLeft()) 
			continue;

		//#2-3.�� ���� ��� û�Ұ� �̹� �Ǿ��ְų� ���� ��쿡��~
		int back_d = (d + 2) % 4;
		int back_y = y + dy[back_d];
		int back_x = x + dx[back_d];
		if (map[back_y][back_x] != 1)
		{
			y = back_y; 
			x = back_x;
		}
		//#2-4. �� ���� ��� û�Ұ� �̹� �Ǿ��ְų� ���̸鼭,~
		if (map[back_y][back_x] == 1)
			break;
	}

	//������ ��°��� map ���� 2�� ����
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M;j++){
			if (map[i][j] == 2) cnt++;
		}
	}
	cout << cnt;
	return 0;
}