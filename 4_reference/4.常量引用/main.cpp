#include <iostream>
using namespace std;

void showValue(const int &val)
{
    // val = 20;
    cout << "val = " << val << endl;
}

int main()
{
    // 引用必须引用一块合法的内存空间
    const int& ref = 10; // 加上const之后，编译器将代码改为 int temp = 10; const int& ref = temp;
    
    int a = 10;
    showValue(a);
    cout << "a = " << a << endl;

    return 0;
}