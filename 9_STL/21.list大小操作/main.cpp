#include <iostream>
#include <list>
using namespace std;

void printList(list<int> &l){
    for(list<int>::iterator it = l.begin(); it != l.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test01() {
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);
    cout << "l1元素个数：" << l1.size() << endl;

    l1.resize(10, 100);
    printList(l1);
}

int main() {
    test01();
    return 0;
}
