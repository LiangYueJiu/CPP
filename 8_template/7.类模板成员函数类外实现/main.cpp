#include <iostream>
using namespace std;

template <typename Typename, typename Typeage>
class Person{
    public:
    Person(Typename name, Typeage age);
    void print();

    Typename m_Name;
    Typeage m_Age;
};

template <typename Typename, typename Typeage>
Person<Typename, Typeage>::Person(Typename name, Typeage age) {
    this->m_Name = name;
    this->m_Age = age;
}
template <typename Typename, typename Typeage>
void Person<Typename, Typeage>::print() {

}

void test() {
    Person<string, int> p1("Leon", 18);
    p1.print();
}

int main() {
    test();
    return 0;
}