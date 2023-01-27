#include "Manager.h"

Manager::Manager(string storeName)
	:storeName(storeName)
{
}

Manager::~Manager()
{
	for (auto it = items.begin(); it != items.end(); it++) {
		delete* it;
	}
}

void Manager::addItems(YjkangProduct* p)
{
	items.push_back(p);
}

vector<YjkangProduct*> Manager::getItems()
{
	return items;
}
