#include <iostream>
using namespace std;

#define PI 3.14

class Circle
{
public:
    // 属性
    int m_r;

    // 行为
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

class Student
{
    public:
    string m_name;
    int m_age;
    string m_ID;

    void showStudent()
    {
        cout << "姓名：" << m_name << endl;
        cout << "年龄：" << m_age << endl;
        cout << "学号：" << m_ID << endl;
    }
};

int main()
{
    Circle c1;
    c1.m_r = 10;
    cout << "周长为：" << c1.calculateZC() << endl;
    
    Student s1;
    s1.m_name = "张三";
    s1.m_age = 18;
    s1.m_ID = "2023001";
    s1.showStudent();

    return 0;
}