#include <iostream>
#include <set>
using namespace std;

void test01() {
    pair<string, int> p1("Tom", 20);
    cout << "姓名：" << p1.first << " 年龄：" << p1.second << endl;

    pair<string, int> p2 = make_pair("Jerry", 18);
    cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

int main() {
    test01();
    return 0;
}
