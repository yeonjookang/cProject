#include <iostream>
#include <algorithm>
using namespace std;
int N;
int main() {
	cin >> N;
	int A[50];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	int B[50];
	for (int i = 0; i < N; i++)
		B[i] = A[i];
	sort(B, B + N);
	int P[50];
	fill_n(P, N, -1); //배열 P를 -1로 초기화 시키기
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i] == B[j]) {
				P[i] = j;
				//사전 순 출력을 위해 사용한 B[j]는 null
				B[j] = NULL;
				break;
			}
		}
	}
	for (int i = 0; i < N; i++)
		cout << P[i]<<" ";
	return 0;
}