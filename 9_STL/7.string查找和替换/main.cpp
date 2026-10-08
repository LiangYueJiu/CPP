#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void test01() {
    string str = "abcdefde";
    int pos = str.find("dg");
    cout << pos << endl;
    cout << (int)str.find("dg") << endl;

    cout << (int)str.rfind("de") << endl;

    cout << str.replace(1, 3, "1111") << endl;
}

int main() {
    test01();
    return 0;
}
