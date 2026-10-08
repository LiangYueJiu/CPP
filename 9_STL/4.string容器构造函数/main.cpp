#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void test01() {
    string str1;
    const char* ch = "hello world";
    string str2(ch);
    cout << str2 << endl;

    string str3(str2);
    cout << str3 << endl;

    string str4(10, 'a');
    cout << str4 << endl;
}

int main() {
    test01();
    return 0;
}
