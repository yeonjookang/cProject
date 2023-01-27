#pragma once
#include "YjkangProduct.h"
#include <string>
using namespace std;
class YjkangTV :
    public YjkangProduct
{
private:
    string tvCompany;
    string tvModel;
    int tvSize;
public:
    YjkangTV(string ID, string productStyle, int productNum, int productPrice,string tvCompany, string tvModel, int tvSize);
    void join(string name) override;
    void show() override;
};

