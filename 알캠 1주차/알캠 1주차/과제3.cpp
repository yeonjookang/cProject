#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nanjang(9);
    list<int> realNanjang;
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> nanjang[i];
        sum += nanjang[i];
    }
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - nanjang[i] - nanjang[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k == i || k == j) continue;
                    realNanjang.push_back(nanjang[k]);
                }
            }
        }
    }
    realNanjang.sort();
    for (int i = 0; i < 7; i++)
    {
        cout << realNanjang.front() << "\n";
        realNanjang.pop_front();
    }
    return 0;
}