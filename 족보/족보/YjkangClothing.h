#pragma once
#include "YjkangProduct.h"
#include <string>
using namespace std;
class YjkangClothing :
    public YjkangProduct
{
private:
    string gender;
    string clothName;
    string clothSize;
public:
    YjkangClothing(string ID, string productStyle, int productNum, int productPrice, string gender, string clothName, string clothSize);
    void join(string name) override;
    void show() override;
    string getName() {
        return clothName;
    }
};

