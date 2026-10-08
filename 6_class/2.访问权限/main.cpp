#include <iostream>
using namespace std;

class Person{
public: 
    // 公共权限
    string m_Name;

protected:
    // 保护权限
    string m_Car;

private:
    // 私有权限
    int m_Pssw;

public:
    void func() {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Pssw = 123456;
    }
};

int main() {
    Person p1;
    p1.func();
    cout << "姓名：" << p1.m_Name << endl;
    // cout << "座驾：" << p1.m_Car << endl; // 错误，保护权限不能访问
    // cout << "密码：" << p1.m_Pssw << endl; // 错误，私有权限不能访问

    return 0;
}