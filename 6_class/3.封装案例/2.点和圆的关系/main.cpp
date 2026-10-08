#include <iostream>
#include "Circle.h"
using namespace std;

void isInCircle(Circle &c, Point &p){
    int distance = (p.getX() - c.getCenter().getX()) * (p.getX() - c.getCenter().getX()) + 
                   (p.getY() - c.getCenter().getY()) * (p.getY() - c.getCenter().getY());
    int rDistance = c.getR() * c.getR();
    if (distance < rDistance) {
        cout << "点在圆内" << endl;
    } else if (distance == rDistance) {
        cout << "点在圆上" << endl;
    } else {
        cout << "点在圆外" << endl;
    }
}

int main() {
    Circle c1;
    c1.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c1.setCenter(center);

    Point p1;
    p1.setX(10);
    p1.setY(0);
    isInCircle(c1, p1);

    Point p2;
    p2.setX(10);
    p2.setY(10);
    isInCircle(c1, p2);
    return 0;
}