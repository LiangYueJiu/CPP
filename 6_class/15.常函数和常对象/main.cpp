#include <iostream>
using namespace std;

class Person{
    public:
    Person(int A) : m_A(A) {

    }
    void func1() const {
        // m_A = 100;
        m_B = 100;
    }

    int m_A;
    mutable int m_B;
};

void test01(){
    const Person p(1);
    p.m_B = 100;

}

int main(){
    test01();
    return 0;
}