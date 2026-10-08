#include <iostream>
using namespace std;

class Person;

class Gay{
    public:
    Gay();
    Person * p;
};

class Person{  
    friend class Gay;

    public:
    Person();
    int m_A;

    private:
    int m_B;
};

Gay::Gay() {
    p = new Person;
}

Person::Person() {
    m_A = 10;
    m_B = 10;
}

void test01(){
    Gay g;
    g.p->m_A = 10;
    g.p->m_A = 20;
}

int main(){
    test01();
    return 0;
}