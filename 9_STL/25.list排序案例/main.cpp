#include <iostream>
#include <list>
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

void printList(list<Person> &l){
    for (list<Person>::iterator it = l.begin(); it != l.end(); it++){
        cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
    }
}

// 指定排序规则
bool cmpPerson(Person &p1, Person &p2){
    if (p1.m_Age == p2.m_Age) {
        return p1.m_Height > p2.m_Height;
    }
    return p1.m_Age < p2.m_Age;
}

void test01() {
    list<Person> l;
    l.push_back(Person("刘备",35, 175));
    l.push_back(Person("曹操",45, 180));
    l.push_back(Person("孙权",40, 170));
    l.push_back(Person("赵云",25, 190));
    l.push_back(Person("张飞",35, 195));
    // printList(l);

    l.sort(cmpPerson);
    printList(l);
}

int main() {
    test01();
    return 0;
}
