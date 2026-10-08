#include <iostream>
using namespace std;

int& test01()
{
    int a = 10;
    return a;
}

// 2.函数的调用可以作为左值
int& test02()
{
    static int a = 10;
    return a;
}

int main()
{
    int &ref = test02();
    cout << "ref = " << ref << endl;
    cout << "ref = " << ref << endl;

    test02() = 20;
    cout << "ref = " << ref << endl;
    cout << "ref = " << ref << endl;

    return 0;
}