#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person的构造函数" << endl;
    }

    ~Person() {
        cout << "Person的析构函数" << endl;
    }
};

void test() {
    Person p;
}

int main() {
    test();
    Person p;
    system("pause");

    return 0;
}