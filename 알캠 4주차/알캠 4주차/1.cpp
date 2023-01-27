/*/
#include <iostream>
using namespace std;
int n;
long long cache[100] = { 0,1, };

long long fibo(int n) {
	if (n == 0) return cache[n];
	if (n == 1) return cache[n];
	else if (cache[n] == 0)
		cache[n] = fibo(n - 1) + fibo(n - 2);
	return cache[n];
}
int main() {
	cin >> n;
	cout<<fibo(n);
	return 0;
}
*/