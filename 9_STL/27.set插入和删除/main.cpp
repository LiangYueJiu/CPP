#include <iostream>
#include <set>
using namespace std;

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

    st1.erase(st1.begin());
    printSet(st1);
}

int main() {
    test01();
    return 0;
}
