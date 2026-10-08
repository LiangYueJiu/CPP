#include <iostream>
using namespace std;

// 全局变量
int g_a = 100;
int g_b = 200;

int main() {
    // 全局区

    // 全局变量、静态变量、局部变量

    // 创建普通局部变量
    int a = 10;
    int b = 20;
    
    cout << "局部变量 a 的地址为：" << &a << endl;
    cout << "局部变量 b 的地址为：" << &b << endl;
    cout << "全局变量 g_a 的地址为：" << &g_a <<endl;
    cout << "全局变量 g_b 的地址为：" << &g_b << endl;

    system("pause");
    
    return 0;
}