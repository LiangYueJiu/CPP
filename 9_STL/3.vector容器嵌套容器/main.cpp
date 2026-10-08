#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test01() {
    vector<vector<int>> vv;
    vector<int> v1, v2, v3, v4;
    for (int i = 0; i < 4; i++) {
        v1.push_back(i);
        v2.push_back(i+4);
        v3.push_back(i+8);
        v4.push_back(i+12);
    }
    vv.push_back(v1);
    vv.push_back(v2);
    vv.push_back(v3);
    vv.push_back(v4);

    for (vector<vector<int>>::iterator it = vv.begin(); it < vv.end(); it++) {
        for (vector<int>::iterator vit = it->begin(); vit < it->end(); vit++) {
            cout << *vit << " ";
        }
        cout << endl;
    }
}

int main() {
    test01();
    return 0;
}
