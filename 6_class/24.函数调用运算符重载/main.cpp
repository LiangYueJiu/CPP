#include <iostream>
using namespace std;

class Person{

    public:
    Person(int a) {
        m_A = new int(a);
    }

    ~Person() {
        if (m_A == NULL)
            return;
        
        delete m_A;
        m_A = NULL;
    }
    Person& operator=(Person &p) {
        if (this->m_A != NULL) {
            delete m_A;
        }

        this->m_A = new int(*p.m_A);

        return *this;
    }
    int *m_A;
};

void test01() {
   Person p1(10);
   Person p2(20);
   Person p3(30);
   p1 = p2 = p3;

   cout << "p1 = " << *p1.m_A << endl;
   cout << "p2 = " << *p2.m_A << endl;
   cout << "p3 = " << *p3.m_A << endl;
}

int main(){
    test01();
    return 0;
}