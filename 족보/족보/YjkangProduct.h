#pragma once
#include <string>
#include <vector>
using namespace std;
class YjkangProduct
{
protected:
	string ID;
	string productStyle;
	int productNum;
	int productPrice;
	vector<string> buyers;
public:
	YjkangProduct(string ID, string productStyle, int productNum, int productPrice);
	virtual ~YjkangProduct();
	virtual void join(string name) = 0;
	friend ostream& operator<<(ostream& out, YjkangProduct& p);
	virtual void show() = 0;
	string getID() {
		return ID;
	}
	string getStyle() {
		return productStyle;
	}
	int getNum() {
		return productNum;
	}
	int getPrice() {
		return productPrice;
	}
	vector<string> getBuyers() {
		return buyers;
	}
};

