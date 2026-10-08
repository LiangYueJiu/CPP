#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Cmp{
    public:
    bool operator()(int val) {
        return val > 5;
    }
};

void test01() {
    vector<int> v;
    for (int i = 1; i < 10; i++) {
        v.push_back(i);
    }

    vector<int>::iterator pos = find_if(v.begin(), v.end(), Cmp());
    if (pos == v.end()) {
        cout << "未找到" << endl;
    }
    else {
        cout << *pos << endl;
    }
}

int main() {
    test01();
    return 0;
}
