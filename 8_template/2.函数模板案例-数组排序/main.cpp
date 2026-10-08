#include <iostream>
using namespace std;

template <typename T>
void mySort(T arr[], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j]  < arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template <typename T>
void myPrint(T arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << "-";
    }
    cout << endl;
}

void test01() {
    int arr[] = {1, 2, 4, 23, 12, 45};
    int len = sizeof(arr) / sizeof(int);
    mySort(arr, len);
    myPrint(arr, len);
}

void test02() {
    char arr[] = "asdawdas";
    int len = sizeof(arr) / sizeof(char);
    mySort(arr, len);
    myPrint(arr, len);
}

int main() {
    test01();
    test02();

    return 0;
}