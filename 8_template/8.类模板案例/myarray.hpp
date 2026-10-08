#pragma once
#include <iostream>
using namespace std;

template <class T>
class Array {
    public:
    Array(int Cap) {
        this->m_Arr = new T[Cap];
        this->m_Cap = Cap;
        this->m_Size = 0;
        cout << "Array有参构造函数" << endl;
    }

    Array(const Array &arr) {
        this->m_Arr = new T[arr.m_Cap];
        this->m_Cap = arr.m_Cap;
        this->m_Size = arr.m_Size;

        for (int i = 0; i < arr.m_Size; i++) {
            this->m_Arr[i] = arr.m_Arr[i];
        }
        cout << "Array拷贝构造函数" << endl;

    }

    ~Array() {
        if (this->m_Arr != NULL) {
            delete this->m_Arr;
            this->m_Arr = NULL;
        }
        cout << "Array析构函数" << endl;
    }

    const Array& operator=(const Array &arr) {
        if (this->m_Arr != NULL) {
            delete this->m_Arr;
            this->m_Arr = NULL;
        }

        this->m_Arr = new T[arr.m_Cap];
        this->m_Cap = arr.m_Cap;
        this->m_Size = arr.m_Size;

        for (int i = 0; i < arr.m_Size; i++) {
            this->m_Arr[i] = arr.m_Arr[i];
        }

        return *this;
    }

    T& operator[](int index) {
        return this->m_Arr[index];
    }

    void pushValue(T valve) {
        if (m_Size == m_Cap)
            return;
        this->m_Arr[this->m_Size] = valve;
        m_Size++;
    }

    void popValue() {
        if (m_Size == 0)
            return;
        m_Size--;
    }

    int getSize() {
        return this->m_Size;
    }

    int getCapacity() {
        return this->m_Cap;
    }
    
    private:
    T *m_Arr;
    int m_Cap;
    int m_Size;
};