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
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    printList(l1);
    cout << l1.front() << endl;
    cout << l1.back() << endl;
}

int main() {
    test01();
    return 0;
}
