#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int>& v) {
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test02() {
    vector<int> v;
    v.reserve(100000);
    int *p = NULL;
    int num = 0;
    for (int i = 0; i < 100000; i++) {
        v.push_back(i);
        if (p != &v[0]) {
            p = &v[0];
            num++;
        }
    }
    cout << "num = " << num << endl;
}

int main() {
    test02();
    return 0;
}
