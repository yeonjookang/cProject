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
	fill_n(P, N, -1); //�迭 P�� -1�� �ʱ�ȭ ��Ű��
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i] == B[j]) {
				P[i] = j;
				//���� �� ����� ���� ����� B[j]�� null
				B[j] = NULL;
				break;
			}
		}
	}
	for (int i = 0; i < N; i++)
		cout << P[i]<<" ";
	return 0;
}