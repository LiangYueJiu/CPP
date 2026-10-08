#include <iostream>
using namespace std;

void fun()
{
    cout << "func 的调用" << endl;
}

void fun(int)
{
    cout << "func(int) 的调用" << endl;
}

void fun(double)
{
    cout << "func(double) 的调用" << endl;
}

void fun(int, double)
{
    cout << "func(int, double) 的调用" << endl;
}

void fun(double, int)
{
    cout << "func(double, int) 的调用" << endl;
}

// 引用作为重载条件
void fun(char &a)
{
    cout << "func(char &a) 的调用" << endl;
}

void fun(const char &a)
{
    cout << "func(const char &a) 的调用" << endl;
}

// 函数重载碰到函数默认参数 只传一个参数时会与void fun(int)；冲突
// void fun(int a, int b = 0)
// {
//     cout << "func(int, int) 的调用" << endl;
// }

int main() {
    fun();
    fun(10);
    fun(10.5);
    fun(10, 10.5);
    fun(10.5, 10);
    const int a = 10;
    fun(a);
    return 0;
}