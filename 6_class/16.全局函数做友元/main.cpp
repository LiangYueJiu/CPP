#include <iostream>
using namespace std;

class Person{
    friend void test01();
    
    public:
    int m_A;

    private:
    int m_B;
};

void test01(){
    Person p;
    p.m_A = 100;
    p.m_B = 100;

}

int main(){
    test01();
    return 0;
}