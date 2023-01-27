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
	cout << "성별유형 : " << gender << endl;
	cout << "옷 이름 : " << clothName << endl;
	cout << "옷사이즈 : " << clothSize << endl;
}
