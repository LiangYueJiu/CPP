#include <iostream>
using namespace std;

class Person{
    public:
    Person(int a) : m_A(a) {}
    bool operator==(Person &p) {
        if (m_A == p.m_A)
            return true;
        else
            return false;
    }
    int m_A;
};

void test01() {
    Person p1(10);
    Person p2(10);

    if (p1 == p2)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

int main(){
    test01();
    return 0;
}