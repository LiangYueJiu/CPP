#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;


void test01() {
    negate<int> n;
    cout << n(50) << endl;
}

void test02() {
    plus<int> p;
    cout << p(50, 20) << endl;
}

int main() {
    test02();
    return 0;
}
