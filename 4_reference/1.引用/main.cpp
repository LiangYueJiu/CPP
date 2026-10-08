#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b =a;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    a = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    b = 30;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "a 的地址为：" << &a << endl;
    cout << "b 的地址为：" << &b << endl;

    system("pause");
    return 0;
}