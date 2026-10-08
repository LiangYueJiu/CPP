#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person的无参构造函数" << endl;
    }
    Person(int a) {
        m_Age = a;
        cout << "Person的有参构造函数" << endl;
    }
    // 拷贝构造函数
    Person(const Person &p) {
        m_Age = p.m_Age;
        cout << "Person的拷贝构造函数" << endl;
    }

    ~Person() {
        cout << "Person的析构函数" << endl;
    }

    int m_Age;
};

int main() {
    // 括号法
    // Person p1;
    // // Person p1(); 被认为一个函数声明
    // Person p2(18);
    // Person p3(p2);

    // 显示法
    // Person p1;
    // Person p2 = Person(18);
    // Person p3 = Person(p2);
    // // Person(p3); // 等价于 Person p3;

    // 隐式转换法
    Person p1 = 18;
    Person p2 = p1;

    return 0;
}