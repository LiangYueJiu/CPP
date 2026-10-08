#include <iostream>
using namespace std;

class Abstrac{
    public:
    virtual int func() {
        return 0;
    }

    int m_Num1;
    int m_Num2;
};

class AddCalculate : public Abstrac {
    int func() override {
        return m_Num1 + m_Num2;
    }
};

class SubCalculate : public Abstrac {
    int func() override {
        return m_Num1 - m_Num2;
    }
};

class MulCalculate : public Abstrac {
    int func() override {
        return m_Num1 * m_Num2;
    }
};

void test() {
    Abstrac *abs = new AddCalculate;
    abs->m_Num1 = 10;
    abs->m_Num2 = 20;
    cout << abs->m_Num1 << "+" << abs->m_Num2 << "=" << abs->func() << endl;
}

int main() {
    test();
    return 0;
}