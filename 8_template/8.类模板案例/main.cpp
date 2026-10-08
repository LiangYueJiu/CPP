#include <iostream>
#include "myarray.hpp"
using namespace std;

void test01() {
    Array<int> arr1(10);
    Array<int> arr2(arr1);
    Array<int> arr3(20);
    
    for (int i = 0; i < 10; i++) {
        arr1[i] = i;
        cout << arr1[i] << ",";
    }
}

int main() {
    test01();

    return 0;
}