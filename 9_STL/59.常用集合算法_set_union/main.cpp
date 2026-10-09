#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;

class GreaterFive {
    public:
    bool operator()(int val) const{
        return val > 5;
    }
};

void MyPrint(int val) {
    cout << val << ' ';
}

void test01() {
    vector<int> v1, v2, vTarget;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i+5);
    }
    vTarget.resize(v1.size() + v2.size());
    vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    for_each(vTarget.begin(), it, MyPrint);
}

int main() {
    test01();

    return 0;
}