#include "YjkangClothing.h"
#include <iostream>
using namespace std;
YjkangClothing::YjkangClothing(string ID, string productStyle, int productNum, int productPrice, string gender, string clothName, string clothSize)
	:YjkangProduct(ID,productStyle,productNum,productPrice),gender(gender),clothName(clothName),clothSize(clothSize)
{
}

void YjkangClothing::join(string name)
{
	buyers.push_back(name);
}

void YjkangClothing::show()
{
	cout << "----------------------- " << endl;
	cout << "�������� : " << gender << endl;
	cout << "�� �̸� : " << clothName << endl;
	cout << "�ʻ����� : " << clothSize << endl;
}
