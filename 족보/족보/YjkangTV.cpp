#include "YjkangTV.h"
#include <iostream>
using namespace std;
YjkangTV::YjkangTV(string ID, string productStyle, int productNum,int productPrice, string tvCompany, string tvModel, int tvSize)
	:YjkangProduct(ID,productStyle,productNum,productPrice),tvCompany(tvCompany),tvModel(tvModel),tvSize(tvSize)
{
}

void YjkangTV::join(string name)
{
	buyers.push_back(name);
}

void YjkangTV::show()
{
	cout << "----------------------- " << endl;
	cout << "����ȸ�� : " << tvCompany << endl;
	cout << "��ǰ�� : " << tvModel << endl;
	cout << "ȭ��ũ�� : " << tvSize << endl;
}
