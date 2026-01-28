#include "point.h"


Point::Point():x(0),y(0){}
Point(double x, double y):: x(x), y(y){}
Point(const Point& p) : x(p.x), y(p.y) {}

double getX() const { return x; }
double getY() const { return y; }

void Point::translater(const Point& p) {
    x += p.getX();
    y += p.getY();
}

void Point::translater(double dx, double dy) {
    x += dx;
    y += dy;
}

