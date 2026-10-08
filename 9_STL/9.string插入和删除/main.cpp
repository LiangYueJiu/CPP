#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void test01() {
    string str = "hello";
    str.insert(1, "111");
    cout << str << endl;

    str.erase(1, 3);
    cout << str << endl;
}

int main() {
    test01();
    return 0;
}
