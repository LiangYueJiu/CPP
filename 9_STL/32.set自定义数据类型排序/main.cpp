#include <iostream>
#include <set>
using namespace std;

class Person{
    public:
    Person(string name, int age, int height){
        this->m_Name = name;
        this->m_Age = age;
        this->m_Height = height;
    }

    string m_Name;
    int m_Age;
    int m_Height;
};

class cmpPerson{
    public:
    bool operator()(const Person &p1, const Person &p2) const {
        if (p1.m_Age == p2.m_Age) {
            return p1.m_Height > p2.m_Height;
        }
        return p1.m_Age > p2.m_Age;
    }
};

void printSet(set<Person, cmpPerson> &st){
    for (set<Person, cmpPerson>::iterator it = st.begin(); it != st.end(); it++){
        cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
    }
    cout << endl;
}

void test01() {
    set<Person, cmpPerson> s;
    s.insert(Person("刘备",35, 175));
    s.insert(Person("曹操",45, 180));
    s.insert(Person("孙权",40, 170));
    s.insert(Person("赵云",25, 190));
    s.insert(Person("张飞",35, 195));
    printSet(s);
}

int main() {
    test01();
    return 0;
}
