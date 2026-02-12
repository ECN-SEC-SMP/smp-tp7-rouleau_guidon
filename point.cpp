#include "point.h"


Point::Point():x(0),y(0){}
Point::Point(double x, double y): x(x), y(y){}
Point::Point(const Point& p) : x(p.x), y(p.y) {}

double Point:: getX() const { return x; }
double Point:: getY() const { return y; }

void Point::translater(const Point& p) {
    x += p.getX();
    y += p.getY();
}

void Point::translater(double dx, double dy) {
    x += dx;
    y += dy;
}

ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.getX() << ", " << p.getY() << ")";
    return os;
}

Point& Point::operator+=(const Point& p) {
    x += p.x;
    y += p.y;
    return *this;
}

Forme:: Forme(const Point& c) : centre(c) {}

Forme& Forme:: operator+=(const Point& p) {
    centre += p;   // on reutilise Point::operator+=
    return *this;
}

ostream& operator<<(ostream& os, const Forme& f) {
    os << "Centre : " << f.centre;
    return os;
}


