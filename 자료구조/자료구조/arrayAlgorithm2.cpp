//Packed Sorted �迭�� ���� S,I,D
/*
#include <iostream>
using namespace std;
int A[100];
int S; //�迭�� insert�� ������ ++
int left_; int right_; //Ư�� ������ �����ؾ��ϹǷ�
int search2(int arr[], int x,int S) { //binary search �̿�
	int l = 0; int r = S - 1; int m;
	//while ���� ����x -> r �� l �������� �̵�
	while (l <= r) {
		m = (l + r)/2; //���� Ʋ�Ⱦ���!! ����**
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
int insert2(int arr[]) { //right �ε����� insert �ؾ���
	int x;
	cout << "insert �� ������ �Է��ϼ��� : ";
	cin >> x;
	if (search2(A, x,S) == -1) {
		for (int i = S - 1; i >= right_; i--)
			A[i + 1] = A[i];
		A[right_] = x;
		S++;
		return 1;
	}
	else {
		cout << "�̹� �����մϴ�." << endl;
		return -1;
	}
}
void delete2(int arr[]) {
	int x;
	cout << "delete �� ������ �Է��ϼ��� : ";
	cin >> x;
	if (search2(A, x,S) == -1) {
		cout << "�������� �ʽ��ϴ�." << endl;
	}
	else {
		for(int i = right_; i< S-1; i++)
			A[i] = A[i+1];
		S--;
		cout << "delete �Ͽ����ϴ�." << endl;
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
			cout << "search �� ������ �Է��ϼ��� : ";
			cin >> x;
			if (search2(A, x,S) == -1)
				cout << "�������� �ʽ��ϴ�." << endl;
			else
				cout << "index " << search2(A, x,S) << "�� �����մϴ�." << endl;
		}
		else if (c == 'i') {
			insert2(A);
		}
		else if (c == 'd') {
			delete2(A);
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
*/