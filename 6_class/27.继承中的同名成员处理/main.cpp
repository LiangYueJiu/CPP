#include <iostream>
using namespace std;

class Base1{
    public:
    Base1() {
        m_A = 200;
    }
    void func() {
        cout << "父类 Base1 成员函数" << endl;
    }
    int m_A;
    protected:
    int m_B;
    private:
    int m_C;
};

class Son1 : public Base1{
    public:
    Son1() {
        m_A = 100;
    }
    void func() {
        cout << "子类 Son1 成员函数" << endl;
    }

    int m_A;
};

void test01() {
    Son1 s1;
    cout << s1.m_A << endl;
    cout << s1.Base1::m_A << endl;
    s1.func();
    s1.Base1::func();
}

int main(){
    test01();

    return 0;
}