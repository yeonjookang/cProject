/*
#include <iostream>
#include <string>
using namespace std;
int N;
int cache[101][10];

int main() {
	cin >> N;
	//�ʱⰪ ����
	for (int i = 1; i < 10; i++)
		cache[1][i] = 1;
	//�� ���ڸ� ���� ����� ���� ���� cache�迭�� �� ����
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0)
				cache[i][j] = cache[i - 1][j + 1];
			else if (j == 9)
				cache[i][j] = cache[i - 1][j - 1];
			else
				cache[i][j] = cache[i - 1][j - 1] + cache[i - 1][j + 1];
			cache[i][j] %= 1000000000;
		}
	}
	int result=0;
	for (int i = 0; i < 10; i++)
		result = (result + cache[N][i]) % 1000000000;
	cout << result;
	return 0;
}
*/