/*
	google ���� ã�� �ش�->��������� ����� �湮üũ�迭�� 1�������� ����
	�̷�ã�� ������ ���� �ٸ�
*/

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//bool map[1001][1001]; //N�� ������ 1 �̻� 1000 �����̹Ƿ�
//int cnt = 0; //������ ����
//bool check[1001]; //�湮üũ�迭
//
//void dfs(int num) {
//	check[num] = true;
//
//	for (int i = 1; i <= N; i++) {
//		if (map[num][i] && !check[i]) {
//			dfs(i);
//		}
//	}
//}
//
//int main_1() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> N >> M; //N�� ������ ����, M�� ������ ����
//
//	//������� ���� �Է�
//	for (int i = 0; i < M; i++) {
//		int x, y;
//		cin >> x;
//		cin >> y;
//		map[x][y] =true;
//		map[y][x] = true;
//	}
//
//	//dfs ����
//	for (int i = 1; i <= N; i++) {
//		if (!check[i]) {
//			cnt++;
//			dfs(i);
//		}
//	}
//	cout << cnt;
//	return 0;
//}