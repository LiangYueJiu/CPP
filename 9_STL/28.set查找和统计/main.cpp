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
    
    set<int>::iterator pos = st1.find(0);
    if (pos == st1.end()) {
        cout << "未找到" << endl;
    }
    else {
        cout << "找到元素：" << *pos << endl;
    }

    cout << "个数：" << st1.count(0) << endl;
}

int main() {
    test01();
    return 0;
}
