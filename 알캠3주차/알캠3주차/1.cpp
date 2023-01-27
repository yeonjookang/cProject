/*
	google 에서 찾은 해답->인접행렬을 만들고 방문체크배열을 1차원으로 선언
	미로찾기 문제와 조금 다름
*/

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M;
//bool map[1001][1001]; //N의 범위가 1 이상 1000 이하이므로
//int cnt = 0; //연결요소 개수
//bool check[1001]; //방문체크배열
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
//	cin >> N >> M; //N은 정점의 개수, M은 간선의 개수
//
//	//인접행렬 정보 입력
//	for (int i = 0; i < M; i++) {
//		int x, y;
//		cin >> x;
//		cin >> y;
//		map[x][y] =true;
//		map[y][x] = true;
//	}
//
//	//dfs 시작
//	for (int i = 1; i <= N; i++) {
//		if (!check[i]) {
//			cnt++;
//			dfs(i);
//		}
//	}
//	cout << cnt;
//	return 0;
//}