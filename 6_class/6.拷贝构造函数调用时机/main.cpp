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

void test01(){
    Person p1(20);
    Person p2(p2);
}

void doWork01(Person  p){

}
void test02(){
    Person p2;
    doWork01(p2);
}

Person doWork02(){
    Person p1;
    cout << &p1 << endl;
    return p1;
}

void test03(){
    Person p = doWork02();
    cout << &p << endl;
}

int main(){
    // test02();
    test03();

    return 0;
}