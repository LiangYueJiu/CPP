#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void test01() {
    string str = "hello";

    string str1 = str;
    str1 += " world";
    cout << "str1 = " << str1 << endl;

    string str2 = str;
    str2 += str;
    cout << "str2 = " << str2 << endl;

    string str3 = str;
    str3 += '!';
    cout << "str3 = " << str3 << endl;

    string str4 = str;
    str4.append("! Monkey");
    cout << "str4 = " << str4 << endl;

    string str5 = str;
    str5.append(" hello world", 12);
    cout << "str5 = " << str5 << endl;

    string str6;
    str6.append(str1);
    cout << "str6 = " << str6 << endl;

    string str7;
    str7.append(10, 'h');
    cout << "str7 = " << str7 << endl;
}

int main() {
    test01();
    return 0;
}
