#include <iostream>
#include <string.h>

using namespace std;

class Phone{
    public:
    Phone(string name) : m_Name(name) {
        cout << "Phone 构造函数" << endl;
    }
    ~Phone(){
        cout << "Phone 析构函数" << endl;

    }
    string m_Name;
};

class Person{
    public:
    Person(string name, string phone) : n_Name(name), m_Phone(phone){
        cout << "Person 构造函数" << endl;
    }
    ~Person(){
        cout << "Person 析构函数" << endl;

    }

    string n_Name;
    Phone m_Phone;
};

void test(){
    Person p("张三", "iphone X");
    cout << p.n_Name << "的手机是" << p.m_Phone.m_Name << endl;
}

int main(){
    test();
    return 0;
}