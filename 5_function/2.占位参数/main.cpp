#include <iostream>
using namespace std;

void fun(int a, int = 10)
{
    cout << "hello world!" << endl;
}

int main()
{
    fun(10, 10);

    return 0;
}