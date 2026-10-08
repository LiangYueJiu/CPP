#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<int>& v) {
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    vector<int> v;
    v.push_back(10); 
    v.push_back(40); 
    v.push_back(20); 
    v.push_back(30);
    sort(v.begin(), v.end(), greater<int>());
    printVector(v);
}


int main() {
    test01();
    return 0;
}
