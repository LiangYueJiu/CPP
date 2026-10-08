#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, int> &m){
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key: " << it->first << " value: " << it->second << endl;
    }
}

void test01() {
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 10));
    m.insert(pair<int, int>(3, 10));
    m.insert(pair<int, int>(4, 10));
    printMap(m);
}

int main() {
    test01();
    return 0;
}
