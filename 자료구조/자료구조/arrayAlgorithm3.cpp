//Unpacked Sorted 배열에 관한 S,I,D
#include <iostream>
using namespace std;

int A[100]; //value 가 들어있는 배열
int B[100]; //사용 유무에 관한 인덱스 배열
int S;
int left_; int right_; // 두 개가 다르면 못 찾음. 같으면 찾음

int search1(int arr[], int arr2[], int x) {
	int l = 0; int r = S - 1; int m;
	//while 문을 성립x -> r 가 l 왼쪽으로 이동
	//2파일의 search 함수에 존재 유무까지 확인
	while (l <= r) {
		m = (l + r) / 2; //여기 틀렸었음!! 주의**
		if (arr[m] > x) {
			r = m - 1;
		}
		else if (arr[m] < x) {
			l = m + 1;
		}
		else {
			left_ = right_ = m;
			if (arr2[m] == 0) return -1;
			return m;
		}
	}
	left_ = r; right_ = l;
	return -1;
}

void insert1(int arr[], int arr2[], int S) {
	int i, j;
	int x;
	cout << "insert 할 정수를 입력하세요 : ";
	cin >> x;
	if (left_ == right_) {
		B[left_] = 1;
	}
	//right_가 0,즉 insert 해야할 자리가 맨 앞
	else if (left_ == -1) {
		i = right_;
		while (B[i] == 1 && i < S)
			i++;

		if (i == S) {
			for (j = S - 1; j > right_ - 1; j--) {
				A[j + 1] = A[j];
				B[j + 1] = B[j];
			}
			A[right_] = x; B[right_] = 1;
			S++;
		}
		else {
			for (j = i - 1; j >= right_; j--) {
				A[j + 1] = A[j]; B[j + 1] = B[j];
			}
			A[right_] = x; B[right_] = 1;
		}
	}
	else if (right_ == S) {
		i = left_;
		while (B[i] == 1 && i >= 0)
			i--;
		if (i == -1) {
			A[S] = x; B[S] = 1; S++;
		}
		else {
			for (j = i; j < right_; j++) {
				A[j] = A[j + 1]; B[j] = B[j + 1];
			}
			A[right_ - 1] = x; B[right_ - 1] = 1;
		}
	}
	else {
		i = left_;
		while (B[i] == 1 && i >= 0)
			i--;
		if (i != -1) {
			for (j = i; j < left_; j++) {
				A[j] = A[j + 1]; B[j] = B[j + 1];
			}
			A[left_] = x; B[left_] = 1;
		}
		else {
			i = right_;
			while (B[i] == 1 && i < S)
				i++;
			if (i != S) {
				for (j = i - 1; j >= right_; j--) {
					A[j + 1] = A[j]; B[j + 1] = B[j];
				}
				A[right_] = x; B[right_] = 1;
			}
			else {
				for (j = S - 1; j >= right_; j--) {
					A[j + 1] = A[j]; B[j + 1] = B[j];
				}
				A[right_] = x; B[right_] = 1;
				S++;
			}
		}
	}

	return ;
}

void delete1(int arr[], int arr2[], int S) {
	if (search1(A, B, S) == -1) cout << "존재하지 않습니다" << endl;
	else if (B[search1(A, B, S)] == 1) {
		B[search1(A, B, S)] = 0;
		cout << "delete 하였습니다" << endl;
	}
	else {
		cout << "존재하지 않습니다" << endl;
	}
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
		for (int i = 0; i < S; i++) {
			if(B[i]==0) cout << "X" << "\t";
			else cout << "O" << "\t";
		}
		scanf_s(" %c", &c);
		if (c == 's') {
			cout << "search 할 정수를 입력하세요 : ";
			cin >> x;
			if (search1(A,B, x) == -1)
				cout << "존재하지 않습니다." << endl;
			else
				cout << "index " << search1(A,B, x) << "에 존재합니다." << endl;
		}
		else if (c == 'i') {
			insert1(A,B,S);
		}
		else if (c == 'd') {
			delete1(A,B,S);
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