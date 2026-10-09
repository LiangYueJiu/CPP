#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;

class MyPrint {
    public:
    void operator()(int val) {
        cout << val << " ";
    }
};

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

    bool operator<(const Person &p) const{
        if (this->m_Age < p.m_Age) {
            return true;
        }
        else {
            return false;
        }
    }

    string m_Name;
    int m_Age;
};

class GreaterFive {
    public:
    bool operator()(int val) const{
        return val > 5;
    }
};

class Greater20 {
    public:
    bool operator()(Person &p) const{
        return p.m_Age > 20;
    }
};

void test01() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    random_shuffle(v.begin(), v.end());
    for_each(v.begin(), v.end(), MyPrint());
}

void test02() {
    vector<Person> v;
    v.push_back(Person("A", 1));
    v.push_back(Person("B", 2));
    v.push_back(Person("C", 3));
    v.push_back(Person("D", 21));
    v.push_back(Person("D", 21));
    v.push_back(Person("D", 21));
    v.push_back(Person("D", 21));
    cout << count_if(v.begin(), v.end(), Greater20());
}

int main() {
    srand((unsigned int)time(NULL));
    test01();
    // test02();
    return 0;
}
