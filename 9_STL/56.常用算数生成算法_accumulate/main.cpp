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
    vector<int> v1, v2;
    for (int i = 0; i < 101; i++) {
        v1.push_back(i);
    }

    cout << accumulate(v1.begin(), v1.end(), 0) << endl;
}

int main() {
    test01();

    return 0;
}