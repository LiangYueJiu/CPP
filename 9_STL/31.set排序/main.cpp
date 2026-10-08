#include <iostream>
#include <set>
using namespace std;

class myCmp{
    public:
    bool operator()(int v1, int v2) const {
        return v1 > v2;
    }
};

void printSet(set<int> &st){
    for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    set<int> st1;
    st1.insert(10);
    st1.insert(40);
    st1.insert(120);
    st1.insert(20);
    printSet(st1);

    set<int, myCmp> st2;
    st2.insert(10);
    st2.insert(40);
    st2.insert(120);
    st2.insert(20);
    for (set<int, myCmp>::iterator it = st2.begin(); it != st2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    test01();
    return 0;
}
