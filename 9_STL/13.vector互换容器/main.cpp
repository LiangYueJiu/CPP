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
    vector<int> v1, v2;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i + 100);
    }

    printVector(v1);
    printVector(v2);
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}

void test02() {
    vector<int> v;
    for (int i = 0; i < 100000; i++) {
        v.push_back(i);
    }

    cout << "v的容量" << v.capacity() << endl;
    cout << "v的大小" << v.size() << endl;

    v.resize(3);
    cout << "v的容量" << v.capacity() << endl;
    cout << "v的大小" << v.size() << endl;

    vector<int>(v).swap(v); // 创建一个匿名对象，创建完就被回收
    cout << "v的容量" << v.capacity() << endl;
    cout << "v的大小" << v.size() << endl;
}

int main() {
    test02();
    return 0;
}
