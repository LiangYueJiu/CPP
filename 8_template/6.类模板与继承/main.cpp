#include <iostream>
using namespace std;

template <class T>

class Base{
    public:
    T a;
};

class Son1 : public Base<int> {};

template <class T1, class T2>
class Son2 : public Base<T1> {
    public:
    Son2() { 
        cout << "T1: " << typeid(T1).name() << endl;
        cout << "T2: " << typeid(T2).name() << endl;
    }
    T2 obj;
};

void test() {
    Son2<char, int> S1;
}

int main() {
    test();
    return 0;
}