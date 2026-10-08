#include "circle.h"


void Circle::setR(int r) {
    m_R = r;
}

void Circle::setCenter(Point center) {
    m_Center = center;
}

int Circle::getR() {
    return m_R;
}

Point Circle::getCenter() {
    return m_Center;
}