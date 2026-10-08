#include <iostream>
#include <map>
using namespace std;

class MyCmp{
    public:
    bool operator()(int val1, int val2) const {
        return val1 > val2;
    }
};

void printMap(map<int, int, MyCmp> &m){
    for (map<int, int, MyCmp>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "key: " << it->first << " value: " << it->second << endl;
    }
    cout << endl;
}

void test01() {
    map<int, int, MyCmp> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(map<int, int>::value_type(3, 30));
    m[4] = 40;
    printMap(m);
    
}

int main() {
    test01();
    return 0;
}
