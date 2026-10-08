#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void func() {
        cout << "The Animal speaks!" << endl;
    }
};

class Dog : public Animal {
    public:
    virtual void func() override {
        cout << "The dog speaks!" << endl;
    }
};

void doSpeak(Animal &a) {
    a.func();
}

void test01() {
    Dog d;
    Animal a;
    doSpeak(d);
    doSpeak(a);
}

int main(){
    test01();

    return 0;
}