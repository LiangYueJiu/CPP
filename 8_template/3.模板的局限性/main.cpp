#include <iostream>
using namespace std;

class Person {
    public:
    Person(string name, int age) : m_Name(name), m_Age(age) {};
    string m_Name;
    int m_Age;
};

template <typename T>
bool myCompare(T &a, T &b) {
    return a == b;
}

template<> bool myCompare(Person &p1, Person &p2) {
    return (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age);
}

void test01() {
    int a = 10;
    int b = 20;
    if (myCompare(a, b))
        cout << "a == b" << endl;
    else 
        cout << "a != b" << endl;
}

void test02() {
    Person p1 = Person("Leon", 18);
    Person p2 = Person("Leon", 18);
    if (myCompare(p1, p2))
        cout << "p1 == p2" << endl;
    else 
        cout << "p1 != p2" << endl;
}

int main() {
    test01();
    test02();

    return 0;
}