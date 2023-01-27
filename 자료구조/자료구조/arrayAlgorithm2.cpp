//Packed Sorted 배열에 관한 S,I,D
/*
#include <iostream>
using namespace std;
int A[100];
int S; //배열에 insert할 때마다 ++
int left_; int right_; //특정 구간에 삽입해야하므로
int search2(int arr[], int x,int S) { //binary search 이용
	int l = 0; int r = S - 1; int m;
	//while 문을 성립x -> r 가 l 왼쪽으로 이동
	while (l <= r) {
		m = (l + r)/2; //여기 틀렸었음!! 주의**
		if (arr[m] > x) 
			r = m - 1;
		
		else if (arr[m] < x) 
			l = m + 1;
		
		else {
			left_ = right_ = m;
			return m;
		}
	}
	left_ = r; right_ = l;
	return -1;
}
int insert2(int arr[]) { //right 인덱스에 insert 해야함
	int x;
	cout << "insert 할 정수를 입력하세요 : ";
	cin >> x;
	if (search2(A, x,S) == -1) {
		for (int i = S - 1; i >= right_; i--)
			A[i + 1] = A[i];
		A[right_] = x;
		S++;
		return 1;
	}
	else {
		cout << "이미 존재합니다." << endl;
		return -1;
	}
}
void delete2(int arr[]) {
	int x;
	cout << "delete 할 정수를 입력하세요 : ";
	cin >> x;
	if (search2(A, x,S) == -1) {
		cout << "존재하지 않습니다." << endl;
	}
	else {
		for(int i = right_; i< S-1; i++)
			A[i] = A[i+1];
		S--;
		cout << "delete 하였습니다." << endl;
	}
	return;
}

int main() {
	char c;
	int x;
	S = 0;
	while (true) {
		for (int i = 0; i < S; i++) cout << i << "\t";
		cout << endl;
		for (int i = 0; i < S; i++) cout << A[i] << "\t";
		cout << endl;
		scanf_s(" %c", &c);
		if (c == 's') {
			cout << "search 할 정수를 입력하세요 : ";
			cin >> x;
			if (search2(A, x,S) == -1)
				cout << "존재하지 않습니다." << endl;
			else
				cout << "index " << search2(A, x,S) << "에 존재합니다." << endl;
		}
		else if (c == 'i') {
			insert2(A);
		}
		else if (c == 'd') {
			delete2(A);
		}
		else if (c == 'q') {
			cout << "프로그램을 종료합니다.";
			break;;
		}
		else {
			cout << "????\n";
		}
	}
	return 0;
}
*/