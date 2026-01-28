#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

#pragma once

class Point {
private:
    double x;
    double y;

public:
    // Constructeurs
    Point();                         // origine
    Point(double x, double y);       // avec paramètres
    Point(const Point& p);           // recopie

    // Accesseurs
    double getX() const;
    double getY() const;

    // Mutateurs
    void setX(double x);
    void setY(double y);

    // Methodes
    void translater(const Point& p);
    void translater(double dx, double dy);

    // operateur += (on y revient juste après)
    Point& operator+=(const Point& p);

    // operateur <<
    //friend ostream& operator<<(ostream& os, const Point& p);
};
ostream& operator<<(ostream& os, const Point& p);