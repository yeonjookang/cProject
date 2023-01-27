/*
#include <iostream>
using namespace std;
long long dp[21][21][21];

int func(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	else if (a > 20 || b > 20 || c > 20) {
		return func(20, 20, 20);
	}
	else if (a < b && b < c) {
		if (dp[a][b][c] != 0)
			return dp[a][b][c];
		else
			return dp[a][b][c] = func(a, b, c - 1) + func(a, b - 1, c - 1) - func(a, b - 1, c);
	}
	else {
		if (dp[a][b][c] != 0)
			return dp[a][b][c];
		else
			return dp[a][b][c] = func(a - 1, b, c) + func(a - 1, b - 1, c) + func(a - 1, b, c - 1) - func(a - 1, b - 1, c - 1);
	}
}
int main() {
	int a, b, c;
	
	while (true) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		//출력하는 값이 재귀함수이다. return 값이 있으므로
		cout << "w(" << a << ", " << b << ", " << c << ") = " << func(a, b, c) << "\n";
	}
	return 0;
}
*/