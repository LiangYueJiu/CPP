#include <iostream>
#include <fstream>
using namespace std;

class Person {
    public:
    char m_Name[64];
    int m_Age;
};
void test() {
    ofstream ofs;

    ofs.open("person.txt", ios::out | ios::binary);
    Person p = {"张三", 18};
    ofs.write((const char *) &p, sizeof(Person));
    ofs.close();
}

int main() {
    test();

    return 0;
}
