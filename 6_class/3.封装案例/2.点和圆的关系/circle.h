#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle{
    public:
    void setR(int r);
    void setCenter(Point center);
    int getR();
    Point getCenter();

    private:
    int m_R;
    Point m_Center;
};