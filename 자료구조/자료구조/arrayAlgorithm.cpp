//Packed Unsorted �迭�� ���� S,I,D
/*
#include <iostream>
using namespace std;
int A[100];
int S; //�迭�� insert�� ������ ++

int search1(int arr[],int x) {
	for (int i = 0; i < 100; i++) {
		if (arr[i] == x){
			return i;
			break;
		}
	}
	return -1;
}
int insert1(int arr[]) {
	int x;
	cout << "insert �� ������ �Է��ϼ��� : ";
	cin >> x;
	if (search1(A,x) == -1){
		arr[S++] = x;
		return 1;
	}
	else {
		cout << "�̹� �����մϴ�." << endl;
		return -1;
	}
}
void delete1(int arr[]) {
	int x;
	cout << "delete �� ������ �Է��ϼ��� : ";
	cin >> x;
	if (search1(A,x) == -1) {
		cout << "�������� �ʽ��ϴ�." << endl;
	}
	else {
		arr[search1(A, x)] = A[S - 1];
		S--;
		cout << "delete �Ͽ����ϴ�." << endl;
	}
	return;
}

int main_3() {
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
			if(search1(A, x)==-1)
				cout << "�������� �ʽ��ϴ�." << endl;
			else
				cout << "index " << search1(A,x) << "�� �����մϴ�." << endl;
		}
		else if (c == 'i') {
			insert1(A);
		}
		else if (c == 'd') {
			delete1(A);
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