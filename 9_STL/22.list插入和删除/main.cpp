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

    l1.pop_back();
    printList(l1);

    l1.pop_front();
    printList(l1);

    l1.insert(l1.begin(), 1000);
    printList(l1);

    list<int>::iterator it = l1.begin();
    l1.insert(++it, 2000);
    printList(l1);

    it = l1.begin();
    l1.erase(it);
    printList(l1);
}

int main() {
    test01();
    return 0;
}
