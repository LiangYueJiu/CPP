#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void test01() {
    string str = "hello";
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << " " ;
        cout << str.at(i) << " " ;
    }
}

int main() {
    test01();
    return 0;
}
