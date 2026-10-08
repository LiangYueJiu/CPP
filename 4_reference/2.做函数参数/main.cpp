#include <iostream>
using namespace std;

// 1.值传递
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 2.地址传递
void mySwap02(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

// 3.引用传递
void mySwap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 10;
    mySwap01(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    mySwap02(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    mySwap03(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}