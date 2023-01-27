#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main_5() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;
    int count = 0;
    char num = S[0];
    for (int i = 1; i < S.length(); i++) {
        if (num != S[i]) {
            count++;
            num = S[i];
        }
    }
    return 0;
 }

