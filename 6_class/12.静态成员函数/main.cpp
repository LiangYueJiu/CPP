#include <iostream>
using namespace std;

class Person{
    public:
    static void func1() {
        m_A = 100;
        cout << "公共 static void func1 调用" << endl;
    }
    static int m_A;
    private:
    static int m_B;
    static void func2() {
        m_B = 100;
        cout << "私有 static void func2 调用" << endl;
    }
};

int Person::m_A = 100;
int Person::m_B = 100;

void test(){
    Person p1;
    Person p2;

    p1.func1();
    Person::func1();
    // Person::func2();
}

int main(){
    test();

    return 0;
}