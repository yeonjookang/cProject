//Unpacked Sorted �迭�� ���� S,I,D
#include <iostream>
using namespace std;

int A[100]; //value �� ����ִ� �迭
int B[100]; //��� ������ ���� �ε��� �迭
int S;
int left_; int right_; // �� ���� �ٸ��� �� ã��. ������ ã��

int search1(int arr[], int arr2[], int x) {
	int l = 0; int r = S - 1; int m;
	//while ���� ����x -> r �� l �������� �̵�
	//2������ search �Լ��� ���� �������� Ȯ��
	while (l <= r) {
		m = (l + r) / 2; //���� Ʋ�Ⱦ���!! ����**
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
	cout << "insert �� ������ �Է��ϼ��� : ";
	cin >> x;
	if (left_ == right_) {
		B[left_] = 1;
	}
	//right_�� 0,�� insert �ؾ��� �ڸ��� �� ��
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
	if (search1(A, B, S) == -1) cout << "�������� �ʽ��ϴ�" << endl;
	else if (B[search1(A, B, S)] == 1) {
		B[search1(A, B, S)] = 0;
		cout << "delete �Ͽ����ϴ�" << endl;
	}
	else {
		cout << "�������� �ʽ��ϴ�" << endl;
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
			cout << "search �� ������ �Է��ϼ��� : ";
			cin >> x;
			if (search1(A,B, x) == -1)
				cout << "�������� �ʽ��ϴ�." << endl;
			else
				cout << "index " << search1(A,B, x) << "�� �����մϴ�." << endl;
		}
		else if (c == 'i') {
			insert1(A,B,S);
		}
		else if (c == 'd') {
			delete1(A,B,S);
		}
		else if (c == 'q') {
			cout << "���α׷��� �����մϴ�.";
			break;;
		}
		else {
			cout << "????\n";
		}
	}
	return 0;
}