#include <iostream>
using namespace std;

class Person{
    public:
    void showClassName(){
        cout << "class: Person" << endl;
    }
    void showPerson()
    {
        if (this == NULL) 
            return;
        cout << "Person.m_Age = " << m_Age << endl;
    }

    int m_Age;
};

void test01(){
    Person *p = NULL;
    p->showClassName();
    p->showPerson();
}

int main(){
    test01();
    return 0;
}