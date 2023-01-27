//Packed Unsorted 배열에 관한 S,I,D
/*
#include <iostream>
using namespace std;
int A[100];
int S; //배열에 insert할 때마다 ++

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
	cout << "insert 할 정수를 입력하세요 : ";
	cin >> x;
	if (search1(A,x) == -1){
		arr[S++] = x;
		return 1;
	}
	else {
		cout << "이미 존재합니다." << endl;
		return -1;
	}
}
void delete1(int arr[]) {
	int x;
	cout << "delete 할 정수를 입력하세요 : ";
	cin >> x;
	if (search1(A,x) == -1) {
		cout << "존재하지 않습니다." << endl;
	}
	else {
		arr[search1(A, x)] = A[S - 1];
		S--;
		cout << "delete 하였습니다." << endl;
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
			cout << "search 할 정수를 입력하세요 : ";
			cin >> x;
			if(search1(A, x)==-1)
				cout << "존재하지 않습니다." << endl;
			else
				cout << "index " << search1(A,x) << "에 존재합니다." << endl;
		}
		else if (c == 'i') {
			insert1(A);
		}
		else if (c == 'd') {
			delete1(A);
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