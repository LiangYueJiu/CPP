#include <iostream>
using namespace std;

class Base1{
    public:
    int m_A;
    protected:
    int m_B;
    private:
    int m_C;
};

class Son1 : public Base1{
    public:
    void func() {
        m_A = 10;
        m_B = 20;
        // m_C = 30;
    }
};

void test01() {
    Son1 s1;
    s1.m_A = 100;
    // s1.m_B = 200; // 保护权限，类外访问不到
}

int main(){
    test01();

    return 0;
}