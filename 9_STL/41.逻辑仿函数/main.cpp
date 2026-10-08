#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<bool>& v) {
    for (vector<bool>::iterator it = v.begin(); it < v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);
    printVector(v);

    vector<bool> v2;
    v2.resize(v.size());
    transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
    printVector(v2);
}


int main() {
    test01();
    return 0;
}
