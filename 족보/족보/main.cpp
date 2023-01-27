#include <iostream>
#include "YjkangClothing.h"
#include "YjkangProduct.h"
#include "YjkangTV.h"
#include "Manager.h"
#include <algorithm>
#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new(_CLIENT_BLOCK,__FILE__,__LINE__)
#define new DBG_NEW
#endif
#endif
using namespace std;

bool checkPiece(YjkangProduct* p) {
	YjkangClothing* cloth = dynamic_cast<YjkangClothing*>(p);
	if (cloth != nullptr) {
		if (cloth->getName() == "원피스") {
			return true;
		}
		return false;
}
	return false;
}

bool checkGajeon(YjkangProduct* p) {
	return p->getStyle() == "가전제품";
}

bool compare(YjkangProduct* p1, YjkangProduct* p2) {
	return p1->getPrice() > p2->getPrice();
}

int main() {
	cout << "학번:202011246 이름:강연주" << endl;
	//YjkangProduct p("A0001", "가전제품", 3, 1000);

	YjkangProduct* tv = new YjkangTV("A0001", "가전제품", 3, 1000, "건국전자", "COM001", 62);

	YjkangProduct* pants = new YjkangClothing("A0001", "의류", 5, 120, "남여공용", "건국청바지", "XL");

	tv->join("홍길동");
	pants->join("김길동");
	pants->join("이길동");

	cout << *tv << endl;
	cout << *pants << endl;


	if (tv != nullptr) {
		delete tv;
		tv = nullptr;
	}
	if (pants != nullptr) {
		delete pants;
		pants = nullptr;
	}
	
	Manager manager("건국나라");

	manager.addItems(new YjkangTV("E0001", "가전제품", 3, 2000, "건국전자", "COM001", 62));
	manager.addItems(new YjkangClothing("A0001", "의류", 5, 120, "남여공용", "건국청바지", "XL"));
	manager.addItems(new YjkangTV("E0002", "가전제품", 2, 100, "대학전자", "SW001", 48));
	manager.addItems(new YjkangClothing("A0002", "의류", 2, 200, "여성용", "원피스", "XXL"));
	manager.addItems(new YjkangClothing("A0003", "의류", 3, 100, "남성용", "티셔츠", "L"));

	auto items = manager.getItems();

	auto pos = find_if(items.begin(), items.end(), checkPiece);
	cout << **pos << endl;

	pos = items.begin();
	while (pos != items.end()) {
		pos=find_if(pos, items.end(), checkGajeon);
		if (pos != items.end()) {
			cout << **pos << endl;
			pos++;
		}
	}

	sort(items.begin(), items.end(), compare);

	for (auto it = items.begin(); it < items.end(); it++) {
		cout << **it << endl;
	}
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	return 0;
}