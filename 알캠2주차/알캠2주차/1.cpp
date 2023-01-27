#include <iostream>
#include <stack>
using namespace std;
int main_1() {
	stack<char> stk;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int k = 0;
		string S;
		cin >> S;
		for (int j = 0; j < S.length(); j++) {
			if (S[j] == '(') {
				stk.push(S[j]);
			}
			else if (S[j] == ')')
			{
				if (stk.empty()) {
					cout << "NO\n";
					k = 1;
					break;
				}
				else stk.pop();
			}
		}
		if (k == 0) {
			if (stk.empty())
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		while (!stk.empty()) stk.pop();
	}
	return 0;
}