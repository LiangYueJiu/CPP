#include <iostream>
using namespace std;

int * func()
{
    // 利用new关键子可以让程序开辟到堆区

    int *p = new int(10);
    return p;
}

void test()
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 100 + i;
    }

    for (int i = 0; i< 10; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;
}

int main() {
    int *p = func();
    cout << *p << endl;
    // test();
    return 0;
}