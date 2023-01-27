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
		if (cloth->getName() == "���ǽ�") {
			return true;
		}
		return false;
}
	return false;
}

bool checkGajeon(YjkangProduct* p) {
	return p->getStyle() == "������ǰ";
}

bool compare(YjkangProduct* p1, YjkangProduct* p2) {
	return p1->getPrice() > p2->getPrice();
}

int main() {
	cout << "�й�:202011246 �̸�:������" << endl;
	//YjkangProduct p("A0001", "������ǰ", 3, 1000);

	YjkangProduct* tv = new YjkangTV("A0001", "������ǰ", 3, 1000, "�Ǳ�����", "COM001", 62);

	YjkangProduct* pants = new YjkangClothing("A0001", "�Ƿ�", 5, 120, "��������", "�Ǳ�û����", "XL");

	tv->join("ȫ�浿");
	pants->join("��浿");
	pants->join("�̱浿");

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
	
	Manager manager("�Ǳ�����");

	manager.addItems(new YjkangTV("E0001", "������ǰ", 3, 2000, "�Ǳ�����", "COM001", 62));
	manager.addItems(new YjkangClothing("A0001", "�Ƿ�", 5, 120, "��������", "�Ǳ�û����", "XL"));
	manager.addItems(new YjkangTV("E0002", "������ǰ", 2, 100, "��������", "SW001", 48));
	manager.addItems(new YjkangClothing("A0002", "�Ƿ�", 2, 200, "������", "���ǽ�", "XXL"));
	manager.addItems(new YjkangClothing("A0003", "�Ƿ�", 3, 100, "������", "Ƽ����", "L"));

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