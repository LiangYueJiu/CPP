#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

class Person {
    public:
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    bool operator==(const Person &p) {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
            return true;
        }
        else {
            return false;
        }
    }

    string m_Name;
    int m_Age;
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    vector<int>::iterator it = find(v.begin(), v.end(), 5);
    if (it == v.end()) {
        cout << "未找到" << endl;
    }
    else {
        cout << "find: " << *it << endl;
    }
}

void test02() {
    vector<Person> v;
    v.push_back(Person("A", 1));
    v.push_back(Person("B", 2));
    v.push_back(Person("C", 3));
    v.push_back(Person("D", 4));
    vector<Person>::iterator it = find(v.begin(), v.end(), Person("A", 1));
    if (it == v.end()) {
        cout << "未找到" << endl;
    }
    else {
        cout << "find: " << it->m_Name << endl;
    }
}

int main() {
    test02();
    return 0;
}
