/*
#include <iostream>
using namespace std;
int N,K;
int coins[10];
int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> coins[i];
	}
	int i = 0;//�ݺ����� ���� �ε��� ����
	int x = 0;//������ ���� ����
	while (K!=0) {
		x = x + K / coins[N-1];
		K %=coins[N-1];
		N--;
	}
	cout << x;
	return 0;
}
*/