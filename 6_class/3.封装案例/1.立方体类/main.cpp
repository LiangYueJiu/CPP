#include <iostream>
using namespace std;

class Cube{
public:
    void setL(int i) {
        m_length = i;
    }

    void setW(int i) {
        m_weight = i;
    }

    void setH(int i) {
        m_height = i;
    }

    int getL() {
        return m_length;
    }
    
    int getW() {
        return m_weight;
    }

    int getH() {
        return m_height;
    }

    int calculateS() {
        return 2*(m_length*m_weight + m_length*m_height + m_weight*m_height);
    }

    int calculateV() {
        return m_length*m_weight*m_height;
    }

    // 利用成员函数判断两个立方体是否相等
    bool isSame(Cube &c) {
        if (m_length == c.m_length && m_weight == c.m_weight && m_height == c.m_height) {
            return true;
        } else {
            return false;
        }
    }

private:
    int m_length;
    int m_weight;
    int m_height;
};

// 利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2) {
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);
    
    cout << "c1的面积为：" << c1.calculateS() << endl;
    cout << "c1的体积为：" << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    cout << "c2的面积为：" << c2.calculateS() << endl;
    cout << "c2的体积为：" << c2.calculateV() << endl;

    cout << "c1和c2是否相等：" << isSame(c1, c2) << endl;
    cout << "c1和c2是否相等：" << c1.isSame(c2) << endl;

    return 0;
}