#include <iostream>
using namespace std;

class Person{  
    public:
    Person() {}
    Person(int A, int B) : m_A(A), m_B(B) {}
    // Person operator+(const Person& p) {
    //     Person temp;
    //     temp.m_A = this->m_A + p.m_A;
    //     temp.m_B = this->m_B + p.m_B;
    //     return temp;
    // }

    int m_A;
    int m_B;
};

Person operator+(const Person& p1, const Person& p2) {
        Person temp;
        temp.m_A = p1.m_A + p2.m_A;
        temp.m_B = p1.m_B + p2.m_B;
        return temp;
}

void test01() {
    Person p1(10,10);
    Person p2(10,10);
    Person p3 = p1 + p2;
    // Person p3 = p1.operator+(p2);
    // Person p3 = operator+(p1, p2);

    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;
}

int main(){
    test01();

    return 0;
}