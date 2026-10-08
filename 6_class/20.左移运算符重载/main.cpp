#include <iostream>
using namespace std;

class Person{
    friend ostream& operator<<(ostream &cout, Person &p);
    public:
    Person() {}
    Person(int A, int B) : m_A(A), m_B(B) {}

    private:
    int m_A;
    int m_B;
};

ostream& operator<<(ostream &cout, Person &p) {
    cout << "m_A = " << p.m_A << " m_B = " << p.m_B;

    return cout;
}

void test01() {
   Person p(10, 20);
   cout << p << endl;
}

int main(){
    test01();
    system("pause");
    return 0;
}