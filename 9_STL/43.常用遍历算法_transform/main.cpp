#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

class MyPrint {
    public:
    void operator()(int val) {
        cout << val << " ";
    }
};

class Transform {
    public:
    int operator()(int val) {
        return val + 1000;
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    vector<int> vTarget;
    vTarget.resize(v.size());
    transform(v.begin(), v.end(), vTarget.begin(), Transform());
    for_each(vTarget.begin(), vTarget.end(), MyPrint());
}

int main() {
    test01();
    return 0;
}
