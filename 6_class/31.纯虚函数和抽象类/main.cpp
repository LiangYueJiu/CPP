#include <iostream>
using namespace std;

class Base {
    public:
    virtual void func() = 0;
};

class Son : public Base {
    virtual void func() override {
        cout << "func函数调用" << endl;
    }
};
void test() {
    Base *s1 = new Son;
    s1->func();
    delete s1;
}

int main() {
    test();
    return 0;
}