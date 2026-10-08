#include <iostream>
#include <list>
using namespace std;

void printList(list<int> &l){
    for(list<int>::iterator it = l.begin(); it != l.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

bool myCompare(int a, int b){
    return a > b;
}

void test01() {
    list<int> l1;
    l1.push_back(10);
    l1.push_back(240);
    l1.push_back(430);
    l1.push_back(50);
    printList(l1);

    l1.reverse();
    printList(l1);

    l1.sort();
    printList(l1);

    l1.sort(myCompare);
    printList(l1);
}

int main() {
    test01();
    return 0;
}
