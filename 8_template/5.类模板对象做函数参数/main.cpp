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

// void printPerson(Person<string, int> &p) {
//     p.print();
// }

template <typename T1, typename T2>
void printPerson(Person<T1, T2> &p) {
    p.print();
    cout << typeid(T1).name() << endl;
    cout << typeid(T2).name() << endl;

}

// template <typename T>
// void printPerson(T &p) {
//     p.print();
//     cout << typeid(T).name() << endl;
// }

void test() {
    Person<string, int> p1("Leon", 18);
    printPerson(p1);
}

int main() {
    test();
    return 0;
}