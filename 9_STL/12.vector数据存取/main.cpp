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

void test01() {
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
        cout << v1.at(i) << " ";
    }

    cout << endl << v1.front() << " " << v1.back() << endl;
}

int main() {
    test01();
    return 0;
}
