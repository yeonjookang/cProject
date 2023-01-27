#include "YjkangProduct.h"
#include "YjkangClothing.h"
#include "YjkangTV.h"
#include <iostream>
using namespace std;
YjkangProduct::YjkangProduct(string ID, string productStyle, int productNum, int productPrice)
	:ID(ID),productStyle(productStyle),productNum(productNum),productPrice(productPrice)
{
}

YjkangProduct::~YjkangProduct()
{
}
ostream& operator<<(ostream& out, YjkangProduct& p)
{
	/*YjkangProduct* ptr = &p;
	out << "-----------------------" << endl;
	out << "��Ϲ�ȣ : " << ptr->ID << endl;
	out << "��ǰ���� : " << ptr->productStyle << endl;
	out << "��ǰ���� : " << ptr->productNum << endl;
	out << "���� : " << ptr->productPrice << endl;
	YjkangTV* tv = dynamic_cast<YjkangTV*>(ptr);
	if (tv != nullptr) {
		tv->show();
	}
	else {
		YjkangClothing* cloth = dynamic_cast<YjkangClothing*>(ptr);
		cloth->show();
	}

	out << "-----------------------" << endl;
	out << "���� ������" << endl;
	out << "-----------------------" << endl;
	for (int i = 0; i < ptr->buyers.size(); i++) {
		cout << ptr->buyers[i] << endl;
	}
	out << "-----------------------" << endl;*/

	YjkangProduct* ptr = &p;
	
	out << "-----------------------" << endl;
	out << "��Ϲ�ȣ : " << ptr->ID << endl;
	out << "��ǰ���� : " << ptr->productStyle << endl;
	out << "��ǰ���� : " << ptr->productNum << endl;
	out << "���� : " << ptr->productPrice << endl;

	ptr->show();

	out << "-----------------------" << endl;
	out << "���� ������" << endl;
	out << "-----------------------" << endl;
	for (int i = 0; i < ptr->buyers.size(); i++) {
		cout << ptr->buyers[i] << endl;
	}
	out << "-----------------------" << endl;
	
	return out;
}
