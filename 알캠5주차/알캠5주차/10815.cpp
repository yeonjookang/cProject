/*
#include <iostream>
#include <algorithm>
int N,M;
int cards[500001];
int nums[500001];
using namespace std;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> cards[i];
	cin >> M;
	for (int i = 1; i <= M; i++)
		cin >> nums[i];
	//정렬(nlogn)
	sort(cards,cards + N);
	//이진탐색
	for (int i = 1; i <= M; i++) {
		int x = nums[i]; int answer = 0;
		int left = 0; int right = N - 1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (cards[mid] == x)
			{
				answer =1;
				break;
			}
			else if (cards[mid] < x) {
				left = mid + 1;
			}
			else if (cards[mid] > x) {
				right = mid - 1;
			}
		}
		cout << answer<<" ";
	}
	return 0;
}
*/
