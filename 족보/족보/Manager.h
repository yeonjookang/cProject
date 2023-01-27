#pragma once
#include <string>
#include "YjkangProduct.h"
#include "YjkangClothing.h"
#include "YjkangTV.h"
using namespace std;
class Manager
{
private:
	string storeName;
	vector<YjkangProduct*> items;
public:
	Manager(string storeName);
	~Manager();
	void addItems(YjkangProduct* p);
	vector<YjkangProduct*> getItems();
};

