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
    vector<int> v;
    v.resize(10);
    fill(v.begin(), v.end(), 100);
    for_each(v.begin(), v.end(), MyPrint);
}

int main() {
    test01();

    return 0;
}