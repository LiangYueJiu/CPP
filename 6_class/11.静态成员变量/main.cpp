#include <iostream>
using namespace std;

class Person{
    public:
    static int m_A;
    private:
    static int m_B;
};

int Person::m_A = 100;
int Person::m_B = 100;

void test(){
    Person p1;
    Person p2;
    p2.m_A = 200;
    cout << p1.m_A << endl;
    cout << p2.m_A << endl;

    cout << Person::m_A << endl;
    // cout << Person::m_B << endl;
}

int main(){
    test();

    return 0;
}