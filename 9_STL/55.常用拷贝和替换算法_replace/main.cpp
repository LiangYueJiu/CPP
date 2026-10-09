#include <iostream>
#include <algorithm>
#include <functional>
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
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
        v2.push_back(i+10);
    }

    swap(v1, v2);
    for_each(v1.begin(), v1.end(), MyPrint);
    cout << endl;
    for_each(v2.begin(), v2.end(), MyPrint);
}

int main() {
    test01();

    return 0;
}