#include <iostream>
using namespace std;

template <typename Typename, typename Typeage>
class Person{
    public:
    Person(Typename name, Typeage age) {
        this->m_Name = name;
        this->m_Age = age;
    }
    void print() {
        cout << "name: " << this->m_Name << endl;
        cout << "age: " << this->m_Age << endl;
    }
    Typename m_Name;
    Typeage m_Age;
};

void test() {
    Person<string, int> p1("Leon", 18);
    p1.print();
}

int main() {
    test();
    return 0;
}