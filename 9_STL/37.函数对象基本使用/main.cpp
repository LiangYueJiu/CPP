#include <iostream>
#include <set>
using namespace std;

class myAdd{
    public:
    int operator()(int v1, int v2) const {
        return v1 + v2;
    }
};
void test01() {
    myAdd ma;
    cout << ma(10, 10) << endl;
}

class myPrint{
    public:
    myPrint() {
        m_Count = 0;
    }
    void operator()(string str) {
        cout << str << endl;
        m_Count++;
    }

    int m_Count;
};

void doPrint(myPrint &mp, string str) {
    mp(str);
}

void test03() {
    myPrint mp;
    doPrint(mp, "Hello C++");
}

int main() {
    test03();
    return 0;
}
