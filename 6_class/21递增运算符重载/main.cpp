#include <iostream>
using namespace std;

class Person{
    friend ostream& operator<<(ostream &cout, const Person &p);

    public:
    Person(){
        m_A = 0;
    }

    // 后置++
    Person& operator++() {
        m_A ++;
        return *this;
    }

    // 前置++
    Person operator++(int) {
        Person temp = *this;
        m_A++;
        return temp;
    }

    Person& operator--() {
        m_A --;
        return *this;
    }

    Person operator--(int) {
        Person temp = *this;
        m_A--;
        return temp;
    }

    private:
    int m_A;
};

ostream& operator<<(ostream &cout, const Person &p) {
    cout << "m_A = " << p.m_A;

    return cout;
}

void test01() {
   Person p;
   cout << p++ << endl;
   cout << p << endl;
   cout << ++p << endl;
   cout << p << endl;

   cout << --p << endl;
   cout << p << endl;
   cout << p-- << endl;
   cout << p << endl;
}

int main(){
    test01();
    return 0;
}