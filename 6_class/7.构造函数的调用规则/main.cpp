#include <iostream>
using namespace std;

class Person{
    public:
    Person(){
        cout << "无参构造函数" << endl;
    }
    Person(int age){
        m_Age = age;
        cout << "有参构造函数" << endl;
    }
    Person(const Person &p){
        m_Age = p.m_Age;
        cout << "拷贝构造函数" << endl;
    }
    ~Person(){
        cout << "析构函数" << endl;
    }
    int m_Age;
};