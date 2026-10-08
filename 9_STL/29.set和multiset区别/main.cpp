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
    pair<set<int>::iterator, bool> ret = st1.insert(10);
    if (ret.second) {
        cout << "第一次插入成果" << endl;
    }
    else {
        cout << "第一次插入失败" << endl;
    }
    ret = st1.insert(10);
    if (ret.second) {
        cout << "第二次插入成果" << endl;
    }
    else {
        cout << "第二次插入失败" << endl;
    }
    printSet(st1);
    
}

int main() {
    test01();
    return 0;
}
